
void FUN_0042d0a4(int param_1,int param_2)

{
  if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
     (((DAT_0069d904 & 0x10) != 0 && (DAT_0069d90c != 0)))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x10) < 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2;
    }
    FUN_004311e0(0xc,0);
  }
  if ((((DAT_0069d904 & 0x20) != 0) && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))) ||
     (((DAT_0069d904 & 0x20) != 0 && (DAT_0069d90c != 0)))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (param_2 <= *(int *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_2;
    }
    FUN_004311e0(0xc,0);
  }
  return;
}

