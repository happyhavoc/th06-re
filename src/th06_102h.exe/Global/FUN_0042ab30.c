
/* WARNING: Removing unreachable block (ram,0x0042ada4) */
/* WARNING: Removing unreachable block (ram,0x0042ad25) */
/* WARNING: Removing unreachable block (ram,0x0042ad69) */
/* WARNING: Removing unreachable block (ram,0x0042addf) */

void FUN_0042ab30(char *param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  FILE *_File;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  uint unaff_retaddr;
  undefined local_ac;
  undefined local_a8;
  char local_a4;
  char *local_94;
  char *local_90;
  char *local_84;
  int local_80;
  char local_79;
  undefined3 uStack_78;
  undefined uStack_75;
  int local_74;
  int local_70;
  int local_68;
  int local_64 [3];
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
  int local_c;
  uint local_8;
  
  local_14 = __security_cookie ^ unaff_retaddr;
  if (DAT_006d3f18 != 0) {
    local_c = DAT_006d3f18;
    if (*(int *)(DAT_006d3f18 + 8) == 0) {
      if (param_1 != (char *)0x0) {
        piVar5 = *(int **)(DAT_006d3f18 + 4);
        piVar6 = local_64;
        for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        FUN_0042aab0();
        local_68 = 0x50;
        for (local_8 = 0; (int)local_8 < 7; local_8 = local_8 + 1) {
          if (*(int *)(*(int *)(local_c + 4) + 0x34 + local_8 * 4) != 0) {
            aiStack_30[local_8] = local_68;
            local_68 = local_68 +
                       (*(int *)(local_c + 0x4c + local_8 * 4) -
                       *(int *)(*(int *)(local_c + 4) + 0x34 + local_8 * 4));
          }
        }
        DebugPrint2("%s write ...\n",param_1);
        local_40 = DAT_0069bca0;
        local_10 = (float)g_GameContext._436_4_ / (float)g_GameContext._440_4_ - 0.5;
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
        **(undefined4 **)(*(int *)(local_c + 4) + 0x30 + DAT_0069d6d4 * 4) = DAT_0069bca4;
        local_90 = param_2;
        local_94 = local_4b;
        do {
          cVar1 = *local_90;
          *local_94 = cVar1;
          local_90 = local_90 + 1;
          local_94 = local_94 + 1;
        } while (cVar1 != '\0');
        FUN_0045d414(local_55 + 1);
        uVar2 = FUN_0041e780(&DAT_0069d8f8);
        local_56 = (char)((uint)uVar2 % 0x80) + '@';
        uVar2 = FUN_0041e780(&DAT_0069d8f8);
        local_a4 = (char)((uint)uVar2 % 0x100);
        local_55[0] = local_a4;
        uVar2 = FUN_0041e780(&DAT_0069d8f8);
        local_a8 = (undefined)((uint)uVar2 % 0x100);
        local_58 = local_a8;
        uVar2 = FUN_0041e780(&DAT_0069d8f8);
        local_ac = (undefined)((uint)uVar2 % 0x100);
        local_57 = local_ac;
        pcVar4 = &local_56;
        uStack_75 = (undefined)((uint)pcVar4 >> 0x18);
        local_74 = 0x3f000318;
        for (local_8 = 0; local_8 < 0x42; local_8 = local_8 + 1) {
          uStack_78 = SUB43(pcVar4,0);
          local_74 = local_74 + (uint)*(byte *)CONCAT13(uStack_75,uStack_78);
          pcVar4 = (char *)(CONCAT13(uStack_75,uStack_78) + 1);
          uStack_75 = (undefined)((uint)pcVar4 >> 0x18);
        }
        for (local_8 = 0; (int)local_8 < 7; local_8 = local_8 + 1) {
          if (*(int *)(*(int *)(local_c + 4) + 0x34 + local_8 * 4) != 0) {
            iVar3 = *(int *)(*(int *)(local_c + 4) + 0x34 + local_8 * 4);
            uStack_75 = (undefined)((uint)iVar3 >> 0x18);
            for (local_70 = 0;
                local_70 <
                *(int *)(local_c + 0x4c + local_8 * 4) -
                *(int *)(*(int *)(local_c + 4) + 0x34 + local_8 * 4); local_70 = local_70 + 1) {
              uStack_78 = (undefined3)iVar3;
              local_74 = local_74 + (uint)*(byte *)CONCAT13(uStack_75,uStack_78);
              iVar3 = CONCAT13(uStack_75,uStack_78) + 1;
              uStack_75 = (undefined)((uint)iVar3 >> 0x18);
            }
          }
        }
        local_64[2] = local_74;
        local_84 = local_55;
        local_79 = local_56;
        for (local_8 = 0; local_8 < 0x41; local_8 = local_8 + 1) {
          *local_84 = *local_84 + local_79;
          local_79 = local_79 + '\a';
          local_84 = local_84 + 1;
        }
        for (local_8 = 0; (int)local_8 < 7; local_8 = local_8 + 1) {
          if (*(int *)(*(int *)(local_c + 4) + 0x34 + local_8 * 4) != 0) {
            local_84 = *(char **)(*(int *)(local_c + 4) + 0x34 + local_8 * 4);
            for (local_80 = 0;
                local_80 <
                *(int *)(local_c + 0x4c + local_8 * 4) -
                *(int *)(*(int *)(local_c + 4) + 0x34 + local_8 * 4); local_80 = local_80 + 1) {
              *local_84 = *local_84 + local_79;
              local_79 = local_79 + '\a';
              local_84 = local_84 + 1;
            }
          }
        }
        _File = fopen(param_1,"wb");
        _fwrite(local_64,0x50,1,_File);
        for (local_8 = 0; (int)local_8 < 7; local_8 = local_8 + 1) {
          if (*(int *)(*(int *)(local_c + 4) + 0x34 + local_8 * 4) != 0) {
            _fwrite(*(void **)(*(int *)(local_c + 4) + 0x34 + local_8 * 4),1,
                    *(int *)(local_c + 0x4c + local_8 * 4) -
                    *(int *)(*(int *)(local_c + 4) + 0x34 + local_8 * 4),_File);
          }
        }
        _fclose(_File);
      }
      for (local_8 = 0; (int)local_8 < 7; local_8 = local_8 + 1) {
        if (*(int *)(*(int *)(DAT_006d3f18 + 4) + 0x34 + local_8 * 4) != 0) {
          DebugPrint2("Replay Size %d\n",
                      *(int *)(local_c + 0x4c + local_8 * 4) -
                      *(int *)(*(int *)(local_c + 4) + 0x34 + local_8 * 4));
          _free(*(void **)(*(int *)(DAT_006d3f18 + 4) + 0x34 + local_8 * 4));
        }
      }
    }
    Chain::Cut((Chain *)&DAT_0069d918,*(ChainElem **)(DAT_006d3f18 + 0x68));
  }
  __security_check_cookie(local_14 ^ unaff_retaddr);
  return;
}

