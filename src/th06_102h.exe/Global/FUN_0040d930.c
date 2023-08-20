
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d930(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0xce4)) {
    FUN_0040caf0(param_1,param_2);
    iVar1 = DAT_006d4588;
    if (_DAT_006d1bf0 == 0) {
      if ((0 < *(int *)(param_1 + 0xe4c)) &&
         (FUN_004241e5(1), iVar1 = DAT_006d4588, *(int *)(param_1 + 0xe4c) == 0)) {
        if (*(short *)(param_1 + 0xe5a) < 0) {
          *(undefined2 *)(param_1 + 0xb4) = 0x1a0;
          FUN_00432430(param_1,*(undefined4 *)(iVar1 + 0x1cfb4));
          *(undefined2 *)(param_1 + 0xe5a) = 0xa1;
        }
        *(byte *)(param_1 + 0xe51) = *(byte *)(param_1 + 0xe51) | 1;
      }
    }
    else {
      if (-1 < *(short *)(param_1 + 0xe5a)) {
        *(undefined2 *)(param_1 + 0xb4) = 0x1a5;
        FUN_00432430(param_1,*(undefined4 *)(iVar1 + 0x1cfc8));
        *(undefined2 *)(param_1 + 0xe5a) = 0xffff;
      }
      *(byte *)(param_1 + 0xe51) = *(byte *)(param_1 + 0xe51) & 0xfe;
      *(undefined4 *)(param_1 + 0xe4c) = 0x3c;
      *(undefined4 *)(param_1 + 0xe48) = 0;
      *(undefined4 *)(param_1 + 0xe44) = 0xfffffc19;
    }
  }
  return;
}

