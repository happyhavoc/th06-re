
undefined4 FUN_0042333b(int param_1)

{
  int iVar1;
  
  if (DAT_006d457c != 0) {
    FUN_0043b4d0();
  }
  DAT_0069d908 = DAT_0069d904;
  DAT_0069d904 = FUN_0041d820();
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
  if (*(int *)(param_1 + 0x188) == *(int *)(param_1 + 0x18c)) goto LAB_0042375b;
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x188);
  iVar1 = *(int *)(param_1 + 0x188);
  if (iVar1 == 0) goto LAB_00423454;
  if (iVar1 == 1) {
    iVar1 = *(int *)(param_1 + 0x18c);
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
    iVar1 = *(int *)(param_1 + 0x18c);
    if (iVar1 == 1) {
LAB_004235a0:
      FUN_0041c269();
      *(undefined4 *)(param_1 + 0x18c) = 0;
      FUN_0042ab30(0,0);
LAB_00423454:
      *(undefined4 *)(param_1 + 0x18c) = 1;
      (**(code **)(*(int *)g_GameContext._8_4_ + 0x14))(g_GameContext._8_4_,0);
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
      if (*(int *)(param_1 + 0x18c) == 1) goto LAB_004235a0;
      *(undefined4 *)(param_1 + 0x18c) = 2;
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
        *(undefined4 *)(param_1 + 0x18c) = 0;
        FUN_0042ab30(0,0);
        *(undefined4 *)(param_1 + 0x18c) = 1;
        (**(code **)(*(int *)g_GameContext._8_4_ + 0x14))(g_GameContext._8_4_,0);
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
    if (*(int *)(param_1 + 0x18c) == 1) {
      *(undefined4 *)(param_1 + 0x18c) = 0;
      goto LAB_00423454;
    }
    if (*(int *)(param_1 + 0x18c) == 4) {
      return 4;
    }
  }
  else if (iVar1 == 7) {
    if (*(int *)(param_1 + 0x18c) == 1) {
      *(undefined4 *)(param_1 + 0x18c) = 0;
      FUN_0042ab30(0,0);
      goto LAB_00423454;
    }
    if (*(int *)(param_1 + 0x18c) == 4) {
      FUN_0042ab30(0,0);
      return 4;
    }
  }
  else if (iVar1 == 9) {
    if (*(int *)(param_1 + 0x18c) == 1) {
      *(undefined4 *)(param_1 + 0x18c) = 0;
      goto LAB_00423454;
    }
    if (*(int *)(param_1 + 0x18c) == 4) {
      return 4;
    }
  }
  else if (iVar1 == 10) {
    iVar1 = *(int *)(param_1 + 0x18c);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x18c) = 0;
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
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x18c);
  *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
  return 1;
}

