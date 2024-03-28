
/* WARNING: Removing unreachable block (ram,0x0042ada4) */
/* WARNING: Removing unreachable block (ram,0x0042ad25) */
/* WARNING: Removing unreachable block (ram,0x0042ad69) */
/* WARNING: Removing unreachable block (ram,0x0042addf) */

void SaveReplay(char *replay_path,char *param_2)

{
  ushort uVar2;
  StageReplayData *pSVar3;
  FILE *_File;
  int i;
  uint8_t *pcVar4;
  ReplayData *rpy_data;
  ReplayData *ppcVar5;
  undefined local_ac;
  undefined local_a8;
  undefined local_a4;
  char *local_94;
  char *local_90;
  StageReplayData *local_84;
  int local_80;
  uint8_t local_79;
  undefined3 uStack_78;
  undefined uStack_75;
  uint32_t local_74;
  int local_70;
  StageReplayData *local_68;
  ReplayData local_64;
  uint local_14;
  float local_10;
  ReplayManager *rpy_manager;
  uint j;
  char cVar1;
  uint unaff_retaddr;
  
  local_14 = __security_cookie ^ unaff_retaddr;
  if (g_ReplayManager != (ReplayManager *)0x0) {
    rpy_manager = g_ReplayManager;
    if (g_ReplayManager->is_demo == 0) {
      if (replay_path != (char *)0x0) {
        rpy_data = g_ReplayManager->data;
        ppcVar5 = &local_64;
        for (i = uVar6; i != 0; i = i + -1) {
          ppcVar5->magic = rpy_data->magic;
          rpy_data = (ReplayData *)&rpy_data->version;
          ppcVar5 = (ReplayData *)&ppcVar5->version;
        }
        FUN_0042aab0();
        local_68 = (StageReplayData *)0x50;
        for (j = 0; (int)j < 7; j = j + 1) {
          if (rpy_manager->data->stage_score[j + 1] != (StageReplayData *)0x0) {
            local_64.stage_score[j + 1] = local_68;
            local_68 = (StageReplayData *)
                       ((int)local_68 +
                       ((int)rpy_manager->replayInputAddresses[j] -
                       (int)rpy_manager->data->stage_score[j + 1]));
          }
        }
        DebugPrint2("%s write ...\n",replay_path);
        local_64._36_4_ = g_GameManager.field0_0x0;
        local_10 = g_Supervisor.unk_frame_related1 / g_Supervisor.unk_frames_related2 - 0.5;
        local_10 = local_10 + local_10;
        if (local_10 < 0.0 == NAN(local_10)) {
          if (1.0 <= local_10) {
            local_10 = 1.0;
          }
        }
        else {
          local_10 = 0.0;
        }
        local_64._44_4_ = (1.0 - local_10) * 100.0;
        local_64._40_4_ = (float)local_64._44_4_ + 1.12;
        local_64.stage_score[0] = (StageReplayData *)((float)local_64._44_4_ + 2.34);
        rpy_manager->data->stage_score[g_GameManager.current_stage]->score = g_GameManager.score;
        local_90 = param_2;
        local_94 = &local_64.field_0x19;
        do {
          cVar1 = *local_90;
          *local_94 = cVar1;
          local_90 = local_90 + 1;
          local_94 = local_94 + 1;
        } while (cVar1 != '\0');
        FUN_0045d414(&local_64.field_0x10);
        uVar2 = Rng::GetRandomU16(&g_Rng);
        local_64.key = (char)((uint)uVar2 % 0x80) + '@';
        uVar2 = Rng::GetRandomU16(&g_Rng);
        local_a4 = (undefined)((uint)uVar2 % 0x100);
        local_64._15_1_ = local_a4;
        uVar2 = Rng::GetRandomU16(&g_Rng);
        local_a8 = (undefined)((uint)uVar2 % 0x100);
        local_64.padding_bytes._0_1_ = local_a8;
        uVar2 = Rng::GetRandomU16(&g_Rng);
        local_ac = (undefined)((uint)uVar2 % 0x100);
        local_64.padding_bytes._1_1_ = local_ac;
        pcVar4 = &local_64.key;
        uStack_75 = (undefined)((uint)pcVar4 >> 0x18);
        local_74 = 0x3f000318;
        for (j = 0; j < 0x42; j = j + 1) {
          uStack_78 = SUB43(pcVar4,0);
          local_74 = local_74 + *(byte *)CONCAT13(uStack_75,uStack_78);
          pcVar4 = (uint8_t *)(CONCAT13(uStack_75,uStack_78) + 1);
          uStack_75 = (undefined)((uint)pcVar4 >> 0x18);
        }
        for (j = 0; (int)j < 7; j = j + 1) {
          if (rpy_manager->data->stage_score[j + 1] != (StageReplayData *)0x0) {
            pSVar3 = rpy_manager->data->stage_score[j + 1];
            uStack_75 = (undefined)((uint)pSVar3 >> 0x18);
            for (local_70 = 0;
                local_70 <
                (int)rpy_manager->replayInputAddresses[j] -
                (int)rpy_manager->data->stage_score[j + 1]; local_70 = local_70 + 1) {
              uStack_78 = SUB43(pSVar3,0);
              local_74 = local_74 + *(byte *)CONCAT13(uStack_75,uStack_78);
              pSVar3 = (StageReplayData *)(CONCAT13(uStack_75,uStack_78) + 1);
              uStack_75 = (undefined)((uint)pSVar3 >> 0x18);
            }
          }
        }
        local_64.checksum = local_74;
        local_84 = (StageReplayData *)&local_64.field_0xf;
        local_79 = local_64.key;
        for (j = 0; j < 0x41; j = j + 1) {
          *(uint8_t *)local_84 = *(char *)local_84 + local_79;
          local_79 = local_79 + '\a';
          local_84 = (StageReplayData *)((int)local_84 + 1);
        }
        for (j = 0; (int)j < 7; j = j + 1) {
          if (rpy_manager->data->stage_score[j + 1] != (StageReplayData *)0x0) {
            local_84 = rpy_manager->data->stage_score[j + 1];
            for (local_80 = 0;
                local_80 <
                (int)rpy_manager->replayInputAddresses[j] -
                (int)rpy_manager->data->stage_score[j + 1]; local_80 = local_80 + 1) {
              *(uint8_t *)&local_84->score = *(char *)&local_84->score + local_79;
              local_79 = local_79 + '\a';
              local_84 = (StageReplayData *)((int)&local_84->score + 1);
            }
          }
        }
        _File = fopen(replay_path,"wb");
        fwrite(&local_64,0x50,1,_File);
        for (j = 0; (int)j < 7; j = j + 1) {
          if (rpy_manager->data->stage_score[j + 1] != (StageReplayData *)0x0) {
            fwrite(rpy_manager->data->stage_score[j + 1],1,
                   (int)rpy_manager->replayInputAddresses[j] -
                   (int)rpy_manager->data->stage_score[j + 1],_File);
          }
        }
        fclose(_File);
      }
      for (j = 0; (int)j < 7; j = j + 1) {
        if (g_ReplayManager->data->stage_score[j + 1] != (StageReplayData *)0x0) {
          DebugPrint2("Replay Size %d\n",
                      (int)rpy_manager->replayInputAddresses[j] -
                      (int)rpy_manager->data->stage_score[j + 1]);
          _free(g_ReplayManager->data->stage_score[j + 1]);
        }
      }
    }
    Chain::Cut(&g_Chain,g_ReplayManager->calc_chain);
  }
  __security_check_cookie(local_14 ^ unaff_retaddr);
  return;
}

