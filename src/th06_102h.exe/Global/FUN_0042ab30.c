
/* WARNING: Removing unreachable block (ram,0x0042ada4) */
/* WARNING: Removing unreachable block (ram,0x0042ad25) */
/* WARNING: Removing unreachable block (ram,0x0042ad69) */
/* WARNING: Removing unreachable block (ram,0x0042addf) */

void FUN_0042ab30(char *param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  StageReplayData *pSVar3;
  FILE *_File;
  int iVar4;
  char *pcVar5;
  ReplayData *pRVar6;
  char **ppcVar7;
  uint unaff_retaddr;
  undefined local_ac;
  undefined local_a8;
  char local_a4;
  char *local_94;
  char *local_90;
  StageReplayData *local_84;
  int local_80;
  char local_79;
  undefined3 uStack_78;
  undefined uStack_75;
  int local_74;
  int local_70;
  int local_68;
  char *local_64 [2];
  int local_5c;
  undefined local_58;
  undefined local_57;
  char local_56;
  char local_55 [10];
  char local_4b [11];
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  int aiStack_30 [7];
  uint local_14;
  float local_10;
  ReplayManager *local_c;
  uint local_8;
  
  local_14 = __security_cookie ^ unaff_retaddr;
  if (g_ReplayManager != (ReplayManager *)0x0) {
    local_c = g_ReplayManager;
    if (g_ReplayManager->is_demo == 0) {
      if (param_1 != (char *)0x0) {
        pRVar6 = g_ReplayManager->data;
        ppcVar7 = local_64;
        for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
          *ppcVar7 = pRVar6->magic;
          pRVar6 = (ReplayData *)&pRVar6->version;
          ppcVar7 = ppcVar7 + 1;
        }
        FUN_0042aab0();
        local_68 = 0x50;
        for (local_8 = 0; (int)local_8 < 7; local_8 = local_8 + 1) {
          if (local_c->data->stage_score[local_8 + 1] != (StageReplayData *)0x0) {
            aiStack_30[local_8] = local_68;
            local_68 = local_68 +
                       (*(int *)(&local_c->field_0x4c + local_8 * 4) -
                       (int)local_c->data->stage_score[local_8 + 1]);
          }
        }
        DebugPrint2("%s write ...\n",param_1);
        local_40 = g_GameManager.field0_0x0;
        local_10 = g_Supervisor.unk1b4 / g_Supervisor.unk1b8 - 0.5;
        local_10 = local_10 + local_10;
        if (local_10 < 0.0 == NAN(local_10)) {
          if (1.0 <= local_10) {
            local_10 = 1.0;
          }
        }
        else {
          local_10 = 0.0;
        }
        local_38 = (1.0 - local_10) * 100.0;
        local_3c = local_38 + 1.12;
        local_34 = local_38 + 2.34;
        local_c->data->stage_score[g_GameManager.current_stage]->score = g_GameManager.score;
        local_90 = param_2;
        local_94 = local_4b;
        do {
          cVar1 = *local_90;
          *local_94 = cVar1;
          local_90 = local_90 + 1;
          local_94 = local_94 + 1;
        } while (cVar1 != '\0');
        FUN_0045d414(local_55 + 1);
        uVar2 = Rng::GetRandomU16(&g_Rng);
        local_56 = (char)((uint)uVar2 % 0x80) + '@';
        uVar2 = Rng::GetRandomU16(&g_Rng);
        local_a4 = (char)((uint)uVar2 % 0x100);
        local_55[0] = local_a4;
        uVar2 = Rng::GetRandomU16(&g_Rng);
        local_a8 = (undefined)((uint)uVar2 % 0x100);
        local_58 = local_a8;
        uVar2 = Rng::GetRandomU16(&g_Rng);
        local_ac = (undefined)((uint)uVar2 % 0x100);
        local_57 = local_ac;
        pcVar5 = &local_56;
        uStack_75 = (undefined)((uint)pcVar5 >> 0x18);
        local_74 = 0x3f000318;
        for (local_8 = 0; local_8 < 0x42; local_8 = local_8 + 1) {
          uStack_78 = SUB43(pcVar5,0);
          local_74 = local_74 + (uint)*(byte *)CONCAT13(uStack_75,uStack_78);
          pcVar5 = (char *)(CONCAT13(uStack_75,uStack_78) + 1);
          uStack_75 = (undefined)((uint)pcVar5 >> 0x18);
        }
        for (local_8 = 0; (int)local_8 < 7; local_8 = local_8 + 1) {
          if (local_c->data->stage_score[local_8 + 1] != (StageReplayData *)0x0) {
            pSVar3 = local_c->data->stage_score[local_8 + 1];
            uStack_75 = (undefined)((uint)pSVar3 >> 0x18);
            for (local_70 = 0;
                local_70 <
                *(int *)(&local_c->field_0x4c + local_8 * 4) -
                (int)local_c->data->stage_score[local_8 + 1]; local_70 = local_70 + 1) {
              uStack_78 = SUB43(pSVar3,0);
              local_74 = local_74 + (uint)*(byte *)CONCAT13(uStack_75,uStack_78);
              pSVar3 = (StageReplayData *)(CONCAT13(uStack_75,uStack_78) + 1);
              uStack_75 = (undefined)((uint)pSVar3 >> 0x18);
            }
          }
        }
        local_5c = local_74;
        local_84 = (StageReplayData *)local_55;
        local_79 = local_56;
        for (local_8 = 0; local_8 < 0x41; local_8 = local_8 + 1) {
          *(char *)local_84 = *(char *)local_84 + local_79;
          local_79 = local_79 + '\a';
          local_84 = (StageReplayData *)((int)local_84 + 1);
        }
        for (local_8 = 0; (int)local_8 < 7; local_8 = local_8 + 1) {
          if (local_c->data->stage_score[local_8 + 1] != (StageReplayData *)0x0) {
            local_84 = local_c->data->stage_score[local_8 + 1];
            for (local_80 = 0;
                local_80 <
                *(int *)(&local_c->field_0x4c + local_8 * 4) -
                (int)local_c->data->stage_score[local_8 + 1]; local_80 = local_80 + 1) {
              *(char *)&local_84->score = *(char *)&local_84->score + local_79;
              local_79 = local_79 + '\a';
              local_84 = (StageReplayData *)((int)&local_84->score + 1);
            }
          }
        }
        _File = fopen(param_1,"wb");
        fwrite(local_64,0x50,1,_File);
        for (local_8 = 0; (int)local_8 < 7; local_8 = local_8 + 1) {
          if (local_c->data->stage_score[local_8 + 1] != (StageReplayData *)0x0) {
            fwrite(local_c->data->stage_score[local_8 + 1],1,
                   *(int *)(&local_c->field_0x4c + local_8 * 4) -
                   (int)local_c->data->stage_score[local_8 + 1],_File);
          }
        }
        fclose(_File);
      }
      for (local_8 = 0; (int)local_8 < 7; local_8 = local_8 + 1) {
        if (g_ReplayManager->data->stage_score[local_8 + 1] != (StageReplayData *)0x0) {
          DebugPrint2("Replay Size %d\n",
                      *(int *)(&local_c->field_0x4c + local_8 * 4) -
                      (int)local_c->data->stage_score[local_8 + 1]);
          _free(g_ReplayManager->data->stage_score[local_8 + 1]);
        }
      }
    }
    Chain::Cut(&g_Chain,g_ReplayManager->chain1);
  }
  __security_check_cookie(local_14 ^ unaff_retaddr);
  return;
}

