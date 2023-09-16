
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 InputChainCallback(GameContext *param_1)

{
  int iVar1;
  
  if (g_SoundPlayer._1580_4_ != 0) {
    FUN_0043b4d0((void *)g_SoundPlayer._1580_4_);
  }
  DAT_0069d908 = DAT_0069d904;
  DAT_0069d904 = GetInput();
  DAT_0069d90c = 0;
  if (DAT_0069d908 == DAT_0069d904) {
    if ((0x1d < DAT_0069d910) &&
       (DAT_0069d90c = (ushort)((uint)DAT_0069d910 % 8 == 0), 0x25 < DAT_0069d910)) {
      DAT_0069d910 = 0x1e;
    }
    DAT_0069d910 = DAT_0069d910 + 1;
  }
  else {
    DAT_0069d910 = 0;
  }
  if (param_1->unkInput1 == param_1->unkInput2) goto LAB_0042375b;
  param_1->unkInput4 = param_1->unkInput1;
  iVar1 = param_1->unkInput1;
  if (iVar1 == 0) goto LAB_00423454;
  if (iVar1 == 1) {
    iVar1 = param_1->unkInput2;
    if (iVar1 == 2) {
      iVar1 = FUN_0041ba6a();
      if (iVar1 != 0) {
        return 4;
      }
    }
    else {
      if (iVar1 == 4) {
        return 4;
      }
      if (iVar1 == 5) {
        return 5;
      }
      if (iVar1 == 6) {
        iVar1 = FUN_0042d773(0);
        if (iVar1 != 0) {
          return 4;
        }
      }
      else if (iVar1 == 9) {
        iVar1 = FUN_0042523a();
        if (iVar1 != 0) {
          return 4;
        }
      }
      else if (iVar1 == 10) {
        FUN_0041c269();
        iVar1 = FUN_004107b0();
        if (iVar1 != 0) {
          return 4;
        }
      }
    }
  }
  else if (iVar1 == 2) {
    iVar1 = param_1->unkInput2;
    if (iVar1 == 1) {
LAB_004235a0:
      FUN_0041c269();
      param_1->unkInput2 = 0;
      FUN_0042ab30(0,0);
LAB_00423454:
      param_1->unkInput2 = 1;
      (*(g_GameContext.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_GameContext.d3dDevice,0);
      iVar1 = FUN_0043a338(0);
      if (iVar1 != 0) {
        return 4;
      }
    }
    else if (iVar1 == 3) {
      FUN_0041c269();
      iVar1 = FUN_0041ba6a();
      if (iVar1 != 0) {
        return 4;
      }
      if (param_1->unkInput2 == 1) goto LAB_004235a0;
      param_1->unkInput2 = 2;
    }
    else {
      if (iVar1 == 4) {
        return 4;
      }
      if (iVar1 == 7) {
        FUN_0041c269();
        iVar1 = FUN_0042d773(1);
        if (iVar1 != 0) {
          return 4;
        }
      }
      else if (iVar1 == 8) {
        FUN_0041c269();
        param_1->unkInput2 = 0;
        FUN_0042ab30(0,0);
        param_1->unkInput2 = 1;
        (*(g_GameContext.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_GameContext.d3dDevice,0)
        ;
        iVar1 = FUN_0043a338(1);
        if (iVar1 != 0) {
          return 4;
        }
      }
      else if (iVar1 == 10) {
        FUN_0041c269();
        iVar1 = FUN_004107b0();
        if (iVar1 != 0) {
          return 4;
        }
      }
    }
  }
  else if (iVar1 == 6) {
    if (param_1->unkInput2 == 1) {
      param_1->unkInput2 = 0;
      goto LAB_00423454;
    }
    if (param_1->unkInput2 == 4) {
      return 4;
    }
  }
  else if (iVar1 == 7) {
    if (param_1->unkInput2 == 1) {
      param_1->unkInput2 = 0;
      FUN_0042ab30(0,0);
      goto LAB_00423454;
    }
    if (param_1->unkInput2 == 4) {
      FUN_0042ab30(0,0);
      return 4;
    }
  }
  else if (iVar1 == 9) {
    if (param_1->unkInput2 == 1) {
      param_1->unkInput2 = 0;
      goto LAB_00423454;
    }
    if (param_1->unkInput2 == 4) {
      return 4;
    }
  }
  else if (iVar1 == 10) {
    iVar1 = param_1->unkInput2;
    if (iVar1 == 1) {
      param_1->unkInput2 = 0;
      goto LAB_00423454;
    }
    if (iVar1 == 4) {
      return 4;
    }
    if ((iVar1 == 7) && (iVar1 = FUN_0042d773(1), iVar1 != 0)) {
      return 4;
    }
  }
  DAT_0069d90c = 0;
  DAT_0069d908 = 0;
  DAT_0069d904 = 0;
LAB_0042375b:
  param_1->unkInput1 = param_1->unkInput2;
  param_1->unkInput3 = param_1->unkInput3 + 1;
  return 1;
}

