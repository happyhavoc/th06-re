
undefined4 FUN_0040f100(int param_1)

{
  int iVar1;
  int local_c;
  AnmVm *local_8;
  
  local_8 = (AnmVm *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    if (*(char *)((int)&local_8[1].matrix.field0_0x0 + 0x2c) != '\0') {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      if ((local_8[1].matrix.field0_0x0.field0._33 != 0.0) &&
         (iVar1 = (*(code *)local_8[1].matrix.field0_0x0.field0._33)(local_8), iVar1 != 1)) {
        *(undefined *)((int)&local_8[1].matrix.field0_0x0 + 0x2c) = 0;
      }
      iVar1 = AnmManager::FUN_00433960(DAT_006d4588,local_8);
      if (iVar1 != 0) {
        *(undefined *)((int)&local_8[1].matrix.field0_0x0 + 0x2c) = 0;
      }
      local_8[1].matrix.field0_0x0.field0._23 = local_8[1].matrix.field0_0x0.field0._31;
      GameContext::FUN_00424285
                ((GameContext *)&DAT_006c6d18,(int *)&local_8[1].matrix.field0_0x0.field0._31,
                 &local_8[1].matrix.field0_0x0.field0._24);
    }
    local_8 = (AnmVm *)((int)&local_8[1].matrix.field0_0x0 + 0x30);
  }
  return 1;
}

