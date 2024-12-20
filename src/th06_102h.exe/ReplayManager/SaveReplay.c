
/* WARNING: Removing unreachable block (ram,0x0042ada4) */
/* WARNING: Removing unreachable block (ram,0x0042ad25) */
/* WARNING: Removing unreachable block (ram,0x0042ad69) */
/* WARNING: Removing unreachable block (ram,0x0042addf) */

void th06::ReplayManager::SaveReplay(char *replay_path,char *param_2)

{
  DWORD_PTR cookie;
  ReplayManager *pRVar1;
  ushort rng;
  StageReplayData *pSVar3;
  FILE *_File;
  int i;
  uint8_t *pcVar4;
  ReplayData *rpy_data;
  ReplayData *ppcVar5;
  uint8_t local_ac;
  uint8_t local_a8;
  byte local_a4;
  char *local_94;
  char *local_90;
  StageReplayData *local_84;
  int local_80;
  uint8_t local_79;
  undefined3 uStack_78;
  undefined uStack_75;
  uint32_t checksum;
  int local_70;
  StageReplayData *local_68;
  ReplayData replayCopy;
  float slowDown;
  uint j;
  char cVar1;
  
  pRVar1 = g_ReplayManager;
  cookie = __security_cookie;
  if (g_ReplayManager != (ReplayManager *)0x0) {
    if (g_ReplayManager->is_demo == 0) {
      if (replay_path != (char *)0x0) {
        rpy_data = g_ReplayManager->data;
        ppcVar5 = &replayCopy;
        for (i = uVar6; i != 0; i = i + -1) {
          ppcVar5->magic = rpy_data->magic;
          rpy_data = (ReplayData *)&rpy_data->version;
          ppcVar5 = (ReplayData *)&ppcVar5->version;
        }
        StopRecording();
        local_68 = (StageReplayData *)0x50;
        for (j = 0; (int)j < 7; j = j + 1) {
          if (pRVar1->data->stage_replay_data[j] != (StageReplayData *)0x0) {
            replayCopy.stage_replay_data[j] = local_68;
            local_68 = (StageReplayData *)
                       ((int)local_68 +
                       ((int)pRVar1->replayInputByStage[j] - (int)pRVar1->data->stage_replay_data[j]
                       ));
          }
        }
        utils::DebugPrint2("%s write ...\n",replay_path);
        replayCopy.score = g_GameManager.gui_score;
        slowDown = g_Supervisor.unk_frame_related1 / g_Supervisor.unk_frames_related2 - 0.5;
        slowDown = slowDown + slowDown;
        if (slowDown < 0.0 == NAN(slowDown)) {
          if (1.0 <= slowDown) {
            slowDown = 1.0;
          }
        }
        else {
          slowDown = 0.0;
        }
        replayCopy.slowdown_rate = (1.0 - slowDown) * 100.0;
        replayCopy.slowdown_rate2 = replayCopy.slowdown_rate + 1.12;
        replayCopy.slowdown_rate3 = replayCopy.slowdown_rate + 2.34;
        pRVar1->data->stage_replay_data[g_GameManager.current_stage + -1]->score =
             g_GameManager.score;
        local_90 = param_2;
        local_94 = replayCopy.name;
        do {
          cVar1 = *local_90;
          *local_94 = cVar1;
          local_90 = local_90 + 1;
          local_94 = local_94 + 1;
        } while (cVar1 != '\0');
        strdate(replayCopy.date);
        rng = Rng::GetRandomU16(&g_Rng);
        replayCopy.key = (char)((uint)rng % 0x80) + '@';
        rng = Rng::GetRandomU16(&g_Rng);
        local_a4 = (byte)((uint)rng % 0x100);
        replayCopy.rng_value3 = local_a4;
        rng = Rng::GetRandomU16(&g_Rng);
        local_a8 = (uint8_t)((uint)rng % 0x100);
        replayCopy.rng_value1 = local_a8;
        rng = Rng::GetRandomU16(&g_Rng);
        local_ac = (uint8_t)((uint)rng % 0x100);
        replayCopy.rng_value2 = local_ac;
        pcVar4 = &replayCopy.key;
        uStack_75 = (undefined)((uint)pcVar4 >> 0x18);
        checksum = 0x3f000318;
        for (j = 0; j < 0x42; j = j + 1) {
          uStack_78 = SUB43(pcVar4,0);
          checksum = checksum + *(byte *)CONCAT13(uStack_75,uStack_78);
          pcVar4 = (uint8_t *)(CONCAT13(uStack_75,uStack_78) + 1);
          uStack_75 = (undefined)((uint)pcVar4 >> 0x18);
        }
        for (j = 0; (int)j < 7; j = j + 1) {
          if (pRVar1->data->stage_replay_data[j] != (StageReplayData *)0x0) {
            pSVar3 = pRVar1->data->stage_replay_data[j];
            uStack_75 = (undefined)((uint)pSVar3 >> 0x18);
            for (local_70 = 0;
                local_70 <
                (int)pRVar1->replayInputByStage[j] - (int)pRVar1->data->stage_replay_data[j];
                local_70 = local_70 + 1) {
              uStack_78 = SUB43(pSVar3,0);
              checksum = checksum + *(byte *)CONCAT13(uStack_75,uStack_78);
              pSVar3 = (StageReplayData *)(CONCAT13(uStack_75,uStack_78) + 1);
              uStack_75 = (undefined)((uint)pSVar3 >> 0x18);
            }
          }
        }
        replayCopy.checksum = checksum;
        local_84 = (StageReplayData *)&replayCopy.rng_value3;
        local_79 = replayCopy.key;
        for (j = 0; j < 0x41; j = j + 1) {
          *(byte *)local_84 = *(byte *)local_84 + local_79;
          local_79 = local_79 + '\a';
          local_84 = (StageReplayData *)((int)local_84 + 1);
        }
        for (j = 0; (int)j < 7; j = j + 1) {
          if (pRVar1->data->stage_replay_data[j] != (StageReplayData *)0x0) {
            local_84 = pRVar1->data->stage_replay_data[j];
            for (local_80 = 0;
                local_80 <
                (int)pRVar1->replayInputByStage[j] - (int)pRVar1->data->stage_replay_data[j];
                local_80 = local_80 + 1) {
              *(uint8_t *)&local_84->score = *(char *)&local_84->score + local_79;
              local_79 = local_79 + 7;
              local_84 = (StageReplayData *)((int)&local_84->score + 1);
            }
          }
        }
        _File = fopen(replay_path,"wb");
        fwrite(&replayCopy,0x50,1,_File);
        for (j = 0; (int)j < 7; j = j + 1) {
          if (pRVar1->data->stage_replay_data[j] != (StageReplayData *)0x0) {
            fwrite(pRVar1->data->stage_replay_data[j],1,
                   (int)pRVar1->replayInputByStage[j] - (int)pRVar1->data->stage_replay_data[j],
                   _File);
          }
        }
        fclose(_File);
      }
      for (j = 0; (int)j < 7; j = j + 1) {
        if (g_ReplayManager->data->stage_replay_data[j] != (StageReplayData *)0x0) {
          utils::DebugPrint2("Replay Size %d\n",
                             (int)pRVar1->replayInputByStage[j] -
                             (int)pRVar1->data->stage_replay_data[j]);
          _free(g_ReplayManager->data->stage_replay_data[j]);
        }
      }
    }
    Chain::Cut(&g_Chain,g_ReplayManager->calc_chain);
  }
  __security_check_cookie(cookie);
  return;
}

