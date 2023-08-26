
undefined4 FUN_0042d292(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) == 0xf) {
    if (*(int *)(in_ECX + 4) < 0x1f) {
      *(undefined2 *)(in_ECX + 0x281a) = 0x10;
    }
    if (((0x59 < *(int *)(in_ECX + 4)) && ((BUTTONS_PRESSED_CURFRAME & 0x1001) != 0)) &&
       ((BUTTONS_PRESSED_CURFRAME & 0x1001) != (BUTTONS_PRESSED_PREVFRAME & 0x1001))) {
      *(undefined2 *)(in_ECX + 0x281a) = 2;
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 8) = 0x10;
    }
  }
  else if ((*(int *)(in_ECX + 8) == 0x10) && (0x1d < *(int *)(in_ECX + 4))) {
    *(undefined4 *)(in_ECX + 4) = 0x3b;
    *(undefined4 *)(in_ECX + 8) = 10;
  }
  return 0;
}

