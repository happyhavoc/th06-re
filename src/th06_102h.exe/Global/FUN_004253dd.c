
undefined4 FUN_004253dd(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  do {
    if (*(int *)(param_1 + 0xc) != 0) {
      if ((*(int *)(param_1 + 0xc) == 1) && (iVar2 = FUN_00424ead(), iVar2 != 0)) {
        return 0;
      }
      break;
    }
    iVar2 = FUN_00424e8f();
  } while (iVar2 != 0);
  if (iVar1 == *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00433960(param_1 + 0x24);
  return 1;
}

