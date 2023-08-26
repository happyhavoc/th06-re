
/* WARNING: Removing unreachable block (ram,0x0042a60a) */

undefined4 FUN_0042a570(int *param_1)

{
  if (DAT_0069d4c1 != '\0') {
    while (*(int *)(param_1[0x12] + 8) <= *param_1) {
      param_1[0x12] = param_1[0x12] + 8;
    }
    BUTTONS_PRESSED_CURFRAME = BUTTONS_PRESSED_CURFRAME & 0xfe08 | *(ushort *)(param_1[0x12] + 4);
    DAT_0069d90c = 0;
    if (BUTTONS_PRESSED_PREVFRAME == BUTTONS_PRESSED_CURFRAME) {
      if ((0x1d < DAT_0069d910) &&
         (DAT_0069d90c = (ushort)((DAT_0069d910 & 7) == 0), 0x25 < DAT_0069d910)) {
        DAT_0069d910 = 0x1e;
      }
      DAT_0069d910 = DAT_0069d910 + 1;
    }
    else {
      DAT_0069d910 = 0;
    }
    *param_1 = *param_1 + 1;
  }
  return 1;
}

