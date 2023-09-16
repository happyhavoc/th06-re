
undefined4 FUN_0042d18f(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((DAT_0069d904 & 0x40) == 0) || ((DAT_0069d904 & 0x40) == (DAT_0069d908 & 0x40))) &&
     (((DAT_0069d904 & 0x40) == 0 || (DAT_0069d90c == 0)))) {
    if ((((DAT_0069d904 & 0x80) == 0) || ((DAT_0069d904 & 0x80) == (DAT_0069d908 & 0x80))) &&
       (((DAT_0069d904 & 0x80) == 0 || (DAT_0069d90c == 0)))) {
      uVar1 = 0;
    }
    else {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      if (param_2 <= *(int *)(param_1 + 0x10)) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_2;
      }
      FUN_004311e0(0xc);
      uVar1 = 1;
    }
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x10) < 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2;
    }
    FUN_004311e0(0xc);
    uVar1 = 1;
  }
  return uVar1;
}

