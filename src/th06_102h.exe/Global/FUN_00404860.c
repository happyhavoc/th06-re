
undefined4 FUN_00404860(void)

{
  int iVar1;
  int *in_ECX;
  AnmVm *vm;
  short *local_1c;
  int local_10;
  int local_c;
  
  for (local_10 = 0; local_10 < in_ECX[3]; local_10 = local_10 + 1) {
    iVar1 = *(int *)(in_ECX[4] + local_10 * 4);
    if ((*(byte *)(iVar1 + 3) & 1) != 0) {
      local_c = 0;
      for (local_1c = (short *)(iVar1 + 0x1c); -1 < *local_1c;
          local_1c = (short *)((int)local_1c + (int)local_1c[1])) {
        vm = (AnmVm *)(local_1c[3] * 0x110 + *in_ECX);
        if (*local_1c == 0) {
          AnmManager::FUN_00433960(DAT_006d4588,vm);
        }
        else if (*local_1c == 1) {
          AnmManager::FUN_00433960(DAT_006d4588,vm);
        }
        if (vm->currentInstruction != (AnmRawInstr *)0x0) {
          local_c = local_c + 1;
        }
      }
      if (local_c == 0) {
        *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) & 0xfe;
      }
    }
  }
  return 0;
}

