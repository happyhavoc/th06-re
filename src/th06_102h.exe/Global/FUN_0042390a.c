
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042390a(void)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  void *pvVar4;
  int unaff_EBP;
  
  FUN_0045c3e0();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while (*(int *)(unaff_EBP + -0x10) < 0x10) {
    *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x1bc + *(int *)(unaff_EBP + -0x10) * 4) = 0;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  }
  DAT_0069d900 = *(int *)(unaff_EBP + 8) + 0x1bc;
  iVar1 = FUN_00424375(0,&DAT_0046b63c);
  if (iVar1 == 0) {
    FUN_00435010(DAT_006d4588,0,"data/title/th06logo.jpg");
    FUN_00435300(0,0,0,0,0);
    iVar1 = (**(code **)(*(int *)g_GameContext._8_4_ + 0x3c))(g_GameContext._8_4_,0,0,0,0);
    if (iVar1 < 0) {
      (**(code **)(*(int *)g_GameContext._8_4_ + 0x38))(g_GameContext._8_4_,0x6c6df8);
    }
    FUN_00435300(0,0,0,0,0);
    iVar1 = (**(code **)(*(int *)g_GameContext._8_4_ + 0x3c))(g_GameContext._8_4_,0,0,0,0);
    if (iVar1 < 0) {
      (**(code **)(*(int *)g_GameContext._8_4_ + 0x38))(g_GameContext._8_4_,0x6c6df8);
    }
    FUN_00435270(0);
    DVar3 = timeGetTime();
    *(DWORD *)(*(int *)(unaff_EBP + 8) + 0x400) = DVar3;
    FUN_00423b14(*(undefined4 *)(unaff_EBP + 8));
    pvVar4 = operator_new(0x300);
    *(void **)(unaff_EBP + -0x18) = pvVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    else {
      uVar2 = FUN_00421df0();
      *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x1b0) = *(undefined4 *)(unaff_EBP + -0x14);
    DVar3 = timeGetTime();
    *(short *)(unaff_EBP + -0x1a) = (short)DVar3;
    DAT_0069d8f8 = *(undefined2 *)(unaff_EBP + -0x1a);
    _DAT_0069d8fc = 0;
    FUN_00431080((int **)&UNK_GAME_WINDOW_);
    iVar1 = FUN_00431dc0(DAT_006d4588,0,"data/text.anm",0x700);
    if (iVar1 == 0) {
      iVar1 = FUN_004012c0();
      if (iVar1 == 0) {
        *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x198) = 0;
        FUN_00431660();
        FUN_0041f008();
        FUN_004242f3(0);
        iVar1 = FUN_00424375(1,&DAT_0046b5e0);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"error : 文字の初期化に失敗しました\n")
        ;
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

