
undefined4 FUN_004379e4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  int local_8;
  
  if (*(int *)(in_ECX + 0x81f4) < 0x1e) {
    uVar2 = 1;
  }
  else if ((((BUTTONS_PRESSED_CURFRAME & 0x160b) == 0) ||
           ((BUTTONS_PRESSED_CURFRAME & 0x160b) == (BUTTONS_PRESSED_PREVFRAME & 0x160b))) &&
          (((BUTTONS_PRESSED_CURFRAME & 0x160b) == 0 || (DAT_0069d90c == 0)))) {
    uVar2 = 1;
  }
  else {
    *(undefined4 *)(in_ECX + 0x81f4) = 0;
    *(undefined4 *)(in_ECX + 0x81f0) = 2;
    for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
      *(undefined2 *)(in_ECX + 0x8a + local_8 * 0x110) = 2;
    }
    if ((g_GameContext.cfg.render_opts & 1U) == 0) {
      *(undefined4 *)(in_ECX + 0x7c + *(int *)(in_ECX + 0x81a0) * 0x110) = 0xffff0000;
    }
    else {
      *(undefined4 *)(in_ECX + 0x7c + *(int *)(in_ECX + 0x81a0) * 0x110) = 0xffffe0e0;
    }
    puVar1 = (undefined4 *)(in_ECX + 0xe4 + *(int *)(in_ECX + 0x81a0) * 0x110);
    *puVar1 = 0xc0c00000;
    puVar1[1] = 0xc0c00000;
    puVar1[2] = 0;
    *(undefined4 *)(in_ECX + 0x81fc) = 0;
    *(undefined4 *)(in_ECX + 0x8200) = 0x40000000;
    *(undefined4 *)(in_ECX + 0x820c) = 0;
    *(undefined4 *)(in_ECX + 0x8210) = 0x3c;
    uVar2 = 0;
  }
  return uVar2;
}

