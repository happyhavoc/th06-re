
void FUN_00424375(void)

{
  byte bVar1;
  byte bVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int unaff_EBP;
  bool bVar6;
  
  FUN_0045c3e0();
  *(uint *)(unaff_EBP + -0x14) = __security_cookie ^ *(uint *)(unaff_EBP + 4);
  *(undefined4 *)(unaff_EBP + -0xa8) = extraout_ECX;
  if (*(int *)(*(int *)(unaff_EBP + -0xa8) + 0x1bc + *(int *)(unaff_EBP + 8) * 4) != 0) {
    *(int *)(unaff_EBP + -0xac) =
         *(int *)(unaff_EBP + -0xa8) + 0x1fc + *(int *)(unaff_EBP + 8) * 0x20;
    *(undefined4 *)(unaff_EBP + -0xb0) = *(undefined4 *)(unaff_EBP + 0xc);
    do {
      bVar1 = **(byte **)(unaff_EBP + -0xb0);
      *(byte *)(unaff_EBP + -0xb1) = bVar1;
      bVar6 = bVar1 < **(byte **)(unaff_EBP + -0xac);
      if (bVar1 != **(byte **)(unaff_EBP + -0xac)) {
LAB_0042442a:
        *(uint *)(unaff_EBP + -0xb8) = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00424435;
      }
      if (*(char *)(unaff_EBP + -0xb1) == '\0') break;
      bVar1 = *(byte *)(*(int *)(unaff_EBP + -0xb0) + 1);
      *(byte *)(unaff_EBP + -0xb2) = bVar1;
      bVar2 = *(byte *)(*(int *)(unaff_EBP + -0xac) + 1);
      bVar6 = bVar1 < bVar2;
      if (bVar1 != bVar2) goto LAB_0042442a;
      *(int *)(unaff_EBP + -0xb0) = *(int *)(unaff_EBP + -0xb0) + 2;
      *(int *)(unaff_EBP + -0xac) = *(int *)(unaff_EBP + -0xac) + 2;
    } while (*(char *)(unaff_EBP + -0xb2) != '\0');
    *(undefined4 *)(unaff_EBP + -0xb8) = 0;
LAB_00424435:
    *(undefined4 *)(unaff_EBP + -0xbc) = *(undefined4 *)(unaff_EBP + -0xb8);
    if (*(int *)(unaff_EBP + -0xbc) == 0) goto LAB_00424634;
  }
  FUN_004242f3(*(undefined4 *)(unaff_EBP + 8));
  pvVar3 = operator_new(0x14);
  *(void **)(unaff_EBP + -0x9c) = pvVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x9c) == 0) {
    *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  }
  else {
    uVar4 = FUN_0043c770();
    *(undefined4 *)(unaff_EBP + -0xc0) = uVar4;
  }
  *(undefined4 *)(unaff_EBP + -0x98) = *(undefined4 *)(unaff_EBP + -0xc0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(*(int *)(unaff_EBP + -0xa8) + 0x1bc + *(int *)(unaff_EBP + 8) * 4) =
       *(undefined4 *)(unaff_EBP + -0x98);
  DebugPrint("%s open ...\n",*(undefined4 *)(unaff_EBP + 0xc));
  iVar5 = FUN_0043ca90(*(undefined4 *)(unaff_EBP + 0xc));
  if (iVar5 == 0) {
    *(undefined4 *)(unaff_EBP + -0xa4) =
         *(undefined4 *)(*(int *)(unaff_EBP + -0xa8) + 0x1bc + *(int *)(unaff_EBP + 8) * 4);
    *(undefined4 *)(unaff_EBP + -0xa0) = *(undefined4 *)(unaff_EBP + -0xa4);
    if (*(int *)(unaff_EBP + -0xa0) == 0) {
      *(undefined4 *)(unaff_EBP + -0xd4) = 0;
    }
    else {
      thunk_FUN_0043c8d0();
      _free(*(void **)(unaff_EBP + -0xa0));
      *(undefined4 *)(unaff_EBP + -0xd4) = *(undefined4 *)(unaff_EBP + -0xa0);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0xa8) + 0x1bc + *(int *)(unaff_EBP + 8) * 4) = 0;
    *(undefined4 *)(*(int *)(unaff_EBP + -0xa8) + 0x1bc + *(int *)(unaff_EBP + 8) * 4) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0xc4) = *(undefined4 *)(unaff_EBP + 0xc);
    *(int *)(unaff_EBP + -200) =
         *(int *)(unaff_EBP + -0xa8) + 0x1fc + *(int *)(unaff_EBP + 8) * 0x20;
    *(undefined4 *)(unaff_EBP + -0xcc) = *(undefined4 *)(unaff_EBP + -200);
    do {
      *(undefined *)(unaff_EBP + -0xcd) = **(undefined **)(unaff_EBP + -0xc4);
      **(undefined **)(unaff_EBP + -200) = *(undefined *)(unaff_EBP + -0xcd);
      *(int *)(unaff_EBP + -0xc4) = *(int *)(unaff_EBP + -0xc4) + 1;
      *(int *)(unaff_EBP + -200) = *(int *)(unaff_EBP + -200) + 1;
    } while (*(char *)(unaff_EBP + -0xcd) != '\0');
    FUN_0045c386(unaff_EBP + -0x94,"ver%.4x.dat",0x102);
    uVar4 = FUN_0043c920(unaff_EBP + -0x94);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    if (*(int *)(unaff_EBP + -0x10) < 0) {
      GameErrorContextFatal
                (&g_GameErrorContext,"error : データのバージョンが違います\n");
    }
  }
LAB_00424634:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  __security_check_cookie(*(uint *)(unaff_EBP + -0x14) ^ *(uint *)(unaff_EBP + 4));
  return;
}

