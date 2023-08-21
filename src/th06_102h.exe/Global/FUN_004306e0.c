
void FUN_004306e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int **in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint unaff_retaddr;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  char *local_4c;
  undefined4 *local_48;
  uint local_44;
  uint local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30 [4];
  undefined4 *local_20;
  uint local_c;
  char *local_8;
  
  local_c = __security_cookie ^ unaff_retaddr;
  if (in_ECX[0x184] != (int *)0x0) {
    if (in_ECX[param_1 + 2] != (int *)0x0) {
      (**(code **)(*in_ECX[param_1 + 2] + 8))(in_ECX[param_1 + 2]);
      in_ECX[param_1 + 2] = (int *)0x0;
    }
    local_4c = (char *)OpenPath(param_2,0);
    local_8 = local_4c;
    if (local_4c != (char *)0x0) {
      iVar1 = _strncmp(local_4c,"RIFF",4);
      if (iVar1 == 0) {
        iVar1 = *(int *)(local_8 + 4);
        local_8 = local_8 + 8;
        iVar2 = _strncmp(local_8,"WAVE",4);
        if (iVar2 == 0) {
          local_8 = local_8 + 4;
          local_34 = (undefined4 *)FUN_004309f0(local_8,&DAT_0046c0ec,&local_38,iVar1 + -0xc);
          if (local_34 == (undefined4 *)0x0) {
            GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",param_2);
            _free(local_4c);
          }
          else {
            local_60 = *local_34;
            local_5c = local_34[1];
            local_58 = local_34[2];
            local_54 = local_34[3];
            local_50 = *(undefined2 *)(local_34 + 4);
            local_34 = (undefined4 *)FUN_004309f0(local_8,&DAT_0046c0e4,&local_38,iVar1 + -0xc);
            if (local_34 == (undefined4 *)0x0) {
              GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",param_2);
              _free(local_4c);
            }
            else {
              puVar4 = local_30;
              for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
                *puVar4 = 0;
                puVar4 = puVar4 + 1;
              }
              local_30[0] = 0x24;
              local_30[1] = 0x8088;
              local_30[2] = local_38;
              local_20 = &local_60;
              iVar1 = (**(code **)(**in_ECX + 0xc))(*in_ECX,local_30,in_ECX + param_1 + 2,0);
              if (iVar1 < 0) {
                _free(local_4c);
              }
              else {
                iVar1 = (**(code **)(*in_ECX[param_1 + 2] + 0x2c))
                                  (in_ECX[param_1 + 2],0,local_38,&local_48,&local_44,&local_3c,
                                   &local_40,0);
                if (iVar1 < 0) {
                  _free(local_4c);
                }
                else {
                  puVar4 = local_34;
                  puVar5 = local_48;
                  for (uVar3 = local_44 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                    *puVar5 = *puVar4;
                    puVar4 = puVar4 + 1;
                    puVar5 = puVar5 + 1;
                  }
                  for (uVar3 = local_44 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                    *(undefined *)puVar5 = *(undefined *)puVar4;
                    puVar4 = (undefined4 *)((int)puVar4 + 1);
                    puVar5 = (undefined4 *)((int)puVar5 + 1);
                  }
                  if (local_40 != 0) {
                    puVar4 = (undefined4 *)((int)local_34 + local_44);
                    puVar5 = local_3c;
                    for (uVar3 = local_40 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                      *puVar5 = *puVar4;
                      puVar4 = puVar4 + 1;
                      puVar5 = puVar5 + 1;
                    }
                    for (uVar3 = local_40 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                      *(undefined *)puVar5 = *(undefined *)puVar4;
                      puVar4 = (undefined4 *)((int)puVar4 + 1);
                      puVar5 = (undefined4 *)((int)puVar5 + 1);
                    }
                  }
                  (**(code **)(*in_ECX[param_1 + 2] + 0x4c))
                            (in_ECX[param_1 + 2],local_48,local_44,local_3c,local_40);
                  _free(local_4c);
                }
              }
            }
          }
        }
        else {
          GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",param_2);
          _free(local_4c);
        }
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない %s\n",param_2);
        _free(local_4c);
      }
    }
  }
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}

