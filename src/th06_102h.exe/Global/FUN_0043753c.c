
undefined4 FUN_0043753c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((DAT_0069d904 & 0x10) == 0) || ((DAT_0069d904 & 0x10) == (DAT_0069d908 & 0x10))) &&
     (((DAT_0069d904 & 0x10) == 0 || (DAT_0069d90c == 0)))) {
    if ((((DAT_0069d904 & 0x20) == 0) || ((DAT_0069d904 & 0x20) == (DAT_0069d908 & 0x20))) &&
       (((DAT_0069d904 & 0x20) == 0 || (DAT_0069d90c == 0)))) {
      uVar1 = 0;
    }
    else {
      *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + 1;
      FUN_004311e0(0xc);
      if (*(int *)(param_1 + 0x81a0) < 0) {
        *(int *)(param_1 + 0x81a0) = param_2 + -1;
      }
      if (param_2 <= *(int *)(param_1 + 0x81a0)) {
        *(undefined4 *)(param_1 + 0x81a0) = 0;
      }
      uVar1 = 1;
    }
  }
  else {
    *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + -1;
    FUN_004311e0(0xc);
    if (*(int *)(param_1 + 0x81a0) < 0) {
      *(int *)(param_1 + 0x81a0) = param_2 + -1;
    }
    if (param_2 <= *(int *)(param_1 + 0x81a0)) {
      *(undefined4 *)(param_1 + 0x81a0) = 0;
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

