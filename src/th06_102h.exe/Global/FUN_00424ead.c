
void FUN_00424ead(void)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint unaff_retaddr;
  char *local_5c;
  undefined4 local_54 [17];
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  local_10 = __security_cookie ^ unaff_retaddr;
  local_8 = *(undefined4 *)(in_ECX + 0x18);
  if (((BUTTONS_PRESSED_CURFRAME & 0x10) != 0) &&
     ((BUTTONS_PRESSED_CURFRAME & 0x10) != (BUTTONS_PRESSED_PREVFRAME & 0x10))) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
    if (*(int *)(in_ECX + 0x10) < 0) {
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x1c) + -1;
      *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x1c) + -10;
    }
    else if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x18)) {
      *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x10);
    }
  }
  if (((BUTTONS_PRESSED_CURFRAME & 0x20) != 0) &&
     ((BUTTONS_PRESSED_CURFRAME & 0x20) != (BUTTONS_PRESSED_PREVFRAME & 0x20))) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
    if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x1c)) {
      if (*(int *)(in_ECX + 0x18) <= *(int *)(in_ECX + 0x10) + -10) {
        *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x10) + -9;
      }
    }
    else {
      *(undefined4 *)(in_ECX + 0x10) = 0;
      *(undefined4 *)(in_ECX + 0x18) = 0;
    }
  }
  if (((BUTTONS_PRESSED_CURFRAME & 0x1001) != 0) &&
     ((BUTTONS_PRESSED_CURFRAME & 0x1001) != (BUTTONS_PRESSED_PREVFRAME & 0x1001))) {
    *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0x10);
    FUN_00424b5d(*(int *)(in_ECX + 0x14) * 0x272 + *(int *)(in_ECX + 0x20));
    for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
      puVar4 = local_54;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      if (local_c % 2 == 0) {
LAB_0042508a:
        puVar4 = (undefined4 *)
                 (*(int *)(in_ECX + 0x20) + *(int *)(in_ECX + 0x14) * 0x272 + 0x62 +
                  (local_c / 2) * 0x42 + (local_c % 2) * 0x20);
        puVar5 = local_54;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      else {
        local_5c = (char *)(*(int *)(in_ECX + 0x20) + *(int *)(in_ECX + 0x14) * 0x272 + 0x62 +
                           (local_c / 2) * 0x42);
        pcVar2 = local_5c + 1;
        do {
          cVar1 = *local_5c;
          local_5c = local_5c + 1;
        } while (cVar1 != '\0');
        if (0x20 < (uint)((int)local_5c - (int)pcVar2)) goto LAB_0042508a;
      }
      if ((char)local_54[0] == '\0') {
        *(uint *)(in_ECX + 0x23b4 + local_c * 0x110) =
             *(uint *)(in_ECX + 0x23b4 + local_c * 0x110) & 0xfffffffd;
      }
      else {
        *(uint *)(in_ECX + 0x23b4 + local_c * 0x110) =
             *(uint *)(in_ECX + 0x23b4 + local_c * 0x110) | 2;
        FUN_00434b60(VERY_BIG_STRUCT,in_ECX + 0x2334 + local_c * 0x110,0xffe0c0,0x300000,local_54);
      }
      *(float *)(in_ECX + 0x23c4 + local_c * 0x110) = (float)(local_c % 2) * 248.0 + 96.0;
      *(float *)(in_ECX + 0x23c8 + local_c * 0x110) = (float)(local_c / 2 << 4) + 320.0;
      *(undefined4 *)(in_ECX + 0x23cc + local_c * 0x110) = 0;
      *(uint *)(in_ECX + 0x23b4 + local_c * 0x110) =
           *(uint *)(in_ECX + 0x23b4 + local_c * 0x110) | 0x300;
    }
  }
  if (((BUTTONS_PRESSED_CURFRAME & 10) != 0) &&
     ((BUTTONS_PRESSED_CURFRAME & 10) != (BUTTONS_PRESSED_PREVFRAME & 10))) {
    g_GameContext.unkInput2 = 1;
  }
  __security_check_cookie(local_10 ^ unaff_retaddr);
  return;
}
