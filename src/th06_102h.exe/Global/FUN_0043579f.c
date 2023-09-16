
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043579f(int param_1)

{
  short sVar1;
  float fVar2;
  DWORD DVar3;
  int iVar4;
  bool bVar5;
  uint local_b4;
  uint local_4c;
  float local_48;
  float local_44;
  undefined4 local_28;
  AnmVm *local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 0x10ee0) < 0x10) {
    timeBeginPeriod(1);
    if (*(int *)(param_1 + 0x10f30) == 0) {
      DVar3 = timeGetTime();
      *(DWORD *)(param_1 + 0x10f30) = DVar3;
    }
    DVar3 = timeGetTime();
    timeEndPeriod(1);
    *(int *)(param_1 + 0x10f2c) = *(int *)(param_1 + 0x10f2c) + 1;
    iVar4 = DVar3 - *(int *)(param_1 + 0x10f30);
    if (iVar4 < 700) {
      if (499 < iVar4) {
        fVar2 = ((float)*(int *)(param_1 + 0x10f2c) * 1000.0) / (float)iVar4;
        if (57.0 <= fVar2) {
          *(float *)(param_1 + 0x10ee4 + *(int *)(param_1 + 0x10ee0) * 4) = fVar2;
          *(int *)(param_1 + 0x10ee0) = *(int *)(param_1 + 0x10ee0) + 1;
        }
        *(DWORD *)(param_1 + 0x10f30) = DVar3;
        *(undefined4 *)(param_1 + 0x10f2c) = 0;
      }
    }
    else {
      *(DWORD *)(param_1 + 0x10f30) = DVar3;
      *(undefined4 *)(param_1 + 0x10f2c) = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x81f0);
  switch(iVar4) {
  case 0:
    iVar4 = FUN_004378a2();
    if (iVar4 == -1) {
      return 0;
    }
  case 1:
    *(int *)(param_1 + 0x81f8) = *(int *)(param_1 + 0x81f8) + 1;
    if (DAT_0069d904 != 0) {
      *(undefined4 *)(param_1 + 0x81f8) = 0;
    }
    if (0x2cf < *(int *)(param_1 + 0x81f8)) {
LAB_004359b3:
      _DAT_0069bcbc = 1;
      DAT_0069d4c4 = 1;
      _DAT_0069d4c8 = 0;
      DAT_006c6ec4 = 1.0;
      _strcpy(&DAT_0069d4cc,"data/demo/demo00.rpy");
      _DAT_0069bcb0 = 3;
      DAT_0069d6d4 = 3;
      DAT_006c6ea4 = 2;
      return 0;
    }
    iVar4 = FUN_004379e4();
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x81f8) = 0;
switchD_004358f7_caseD_2:
      FUN_00437b41();
      if (DAT_0069d904 != 0) {
        *(undefined4 *)(param_1 + 0x81f8) = 0;
      }
      *(int *)(param_1 + 0x81f8) = *(int *)(param_1 + 0x81f8) + 1;
      if (0x2cf < *(int *)(param_1 + 0x81f8)) goto LAB_004359b3;
    }
    break;
  case 2:
    goto switchD_004358f7_caseD_2;
  case 3:
    iVar4 = FUN_00439137(param_1);
    if (iVar4 != 0) {
      return 0;
    }
    break;
  case 4:
    if (0x3b < *(int *)(param_1 + 0x81f4)) {
      DAT_006c6ea4 = 4;
      return 0;
    }
    break;
  case 5:
    FUN_0043753c();
    local_c = (AnmVm *)(param_1 + 0x2420);
    for (local_8 = 0; (int)local_8 < 0xb; local_8 = local_8 + 1) {
      FUN_004377a3(local_c,local_8,*(undefined4 *)(param_1 + 0x81a0),
                   *(undefined4 *)(param_1 + 0x8204));
      local_c = local_c + 1;
    }
    for (local_8 = 0; (int)local_8 < 9; local_8 = local_8 + 1) {
      if (*(short *)(param_1 + 0x821c + local_8 * 2) < 0) {
        local_c->flags = local_c->flags & 0xfffffffd;
      }
      else {
        local_c->flags = local_c->flags | 2;
        FUN_004377a3(local_c,local_8,*(undefined4 *)(param_1 + 0x81a0),
                     *(undefined4 *)(param_1 + 0x8204));
      }
      local_c = local_c + 1;
    }
    for (local_8 = 0; (int)local_8 < 0x12; local_8 = local_8 + 1) {
      if (*(short *)(param_1 + 0x821c + ((int)local_8 / 2) * 2) < 0) {
        local_c->flags = local_c->flags & 0xfffffffd;
      }
      else {
        local_c->flags = local_c->flags | 2;
        sVar1 = *(short *)(param_1 + 0x821c + ((int)local_8 / 2) * 2);
        if ((int)local_8 % 2 == 0) {
          AnmManager::FUN_004323a0(DAT_006d4588,local_c,(int)sVar1 / 10 + 0x100);
        }
        else {
          AnmManager::FUN_004323a0(DAT_006d4588,local_c,(int)sVar1 % 10 + 0x100);
        }
        local_c->anotherSpriteNumber = local_c->spriteNumber;
        FUN_004377a3(local_c,(int)local_8 / 2,*(undefined4 *)(param_1 + 0x81a0),
                     *(undefined4 *)(param_1 + 0x8204));
      }
      local_c = local_c + 1;
    }
    if (0x1f < *(int *)(param_1 + 0x81f4)) {
      iVar4 = FUN_0041d680();
      local_28 = local_28 & 0xffff0000;
      while( true ) {
        if ((0x1f < (short)local_28) || ((*(byte *)(iVar4 + (short)local_28) & 0x80) != 0)) break;
        local_28 = CONCAT22(local_28._2_2_,(short)local_28 + 1);
      }
      if (((short)local_28 < 0x20) && (DAT_00478690 != (short)local_28)) {
        FUN_004311e0(10);
        switch(*(undefined4 *)(param_1 + 0x81a0)) {
        case 0:
          FUN_00437672(param_1,local_28,*(undefined2 *)(param_1 + 0x821c));
          *(short *)(param_1 + 0x821c) = (short)local_28;
          break;
        case 1:
          FUN_00437672(param_1,local_28,*(undefined2 *)(param_1 + 0x821e));
          *(short *)(param_1 + 0x821e) = (short)local_28;
          break;
        case 2:
          FUN_00437672(param_1,local_28,*(undefined2 *)(param_1 + 0x8220));
          *(short *)(param_1 + 0x8220) = (short)local_28;
          break;
        case 3:
          FUN_00437672(param_1,local_28,*(undefined2 *)(param_1 + 0x8222));
          *(short *)(param_1 + 0x8222) = (short)local_28;
          break;
        case 4:
          FUN_00437672(param_1,local_28,*(undefined2 *)(param_1 + 0x8224));
          *(short *)(param_1 + 0x8224) = (short)local_28;
          break;
        case 5:
          FUN_00437672(param_1,local_28,*(undefined2 *)(param_1 + 0x8226));
          *(short *)(param_1 + 0x8226) = (short)local_28;
          break;
        case 6:
          FUN_00437672(param_1,local_28,*(undefined2 *)(param_1 + 0x8228));
          *(short *)(param_1 + 0x8228) = (short)local_28;
          break;
        case 7:
          FUN_00437672(param_1,local_28,*(undefined2 *)(param_1 + 0x822a));
          *(short *)(param_1 + 0x822a) = (short)local_28;
          break;
        case 8:
          FUN_00437672(param_1,local_28,*(undefined2 *)(param_1 + 0x822c));
          *(short *)(param_1 + 0x822c) = (short)local_28;
        }
      }
      DAT_00478690 = (short)local_28;
      if (((DAT_0069d904 & 0x1001) != 0) && ((DAT_0069d904 & 0x1001) != (DAT_0069d908 & 0x1001))) {
        if (*(int *)(param_1 + 0x81a0) == 9) {
          *(undefined4 *)(param_1 + 0x821c) = 0x10000;
          *(undefined4 *)(param_1 + 0x8220) = 0xffff0000;
          *(undefined4 *)(param_1 + 0x8224) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x8228) = 0xffffffff;
          *(undefined2 *)(param_1 + 0x822c) = 0xffff;
        }
        else if (*(int *)(param_1 + 0x81a0) == 10) {
          *(undefined4 *)(param_1 + 0x81f0) = 3;
          *(undefined4 *)(param_1 + 0x81f4) = 0;
          for (local_28._0_2_ = 0; (short)local_28 < 0x7a; local_28._0_2_ = (short)local_28 + 1) {
            *(undefined2 *)(param_1 + 0x8a + (short)local_28 * 0x110) = 3;
          }
          *(undefined4 *)(param_1 + 0x81a0) = 7;
          FUN_004311e0(0xb);
          g_ControllerMapping._0_4_ = *(undefined4 *)(param_1 + 0x821c);
          g_ControllerMapping._4_4_ = *(undefined4 *)(param_1 + 0x8220);
          g_ControllerMapping._8_4_ = *(undefined4 *)(param_1 + 0x8224);
          g_ControllerMapping._12_4_ = *(undefined4 *)(param_1 + 0x8228);
          g_ControllerMapping.skipButton = *(short *)(param_1 + 0x822c);
          DAT_006c6e2c = *(undefined4 *)(param_1 + 0x821c);
          DAT_006c6e30 = *(undefined4 *)(param_1 + 0x8220);
          DAT_006c6e34 = *(undefined4 *)(param_1 + 0x8224);
          DAT_006c6e38 = *(undefined4 *)(param_1 + 0x8228);
          DAT_006c6e3c = *(undefined2 *)(param_1 + 0x822c);
        }
      }
    }
    break;
  case 6:
    if (*(int *)(param_1 + 0x81f4) != 0x3c) break;
    iVar4 = FUN_00439f88();
    if (iVar4 != 0) {
      GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                          "セレクト画面の読み込みに失敗\n");
      DAT_006c6ea4 = 4;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x81f0) = 7;
    *(undefined4 *)(param_1 + 0x81fc) = 0;
    *(undefined4 *)(param_1 + 0x8214) = *(undefined4 *)(param_1 + 0x8210);
    *(undefined4 *)(param_1 + 0x8210) = 0;
    if (_DAT_0069bcb0 < 4) {
      for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
        *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 6;
      }
      *(uint *)(param_1 + 0x81a0) = (uint)DAT_006c6e49;
    }
    else {
      for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
        *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 0x12;
      }
      *(undefined4 *)(param_1 + 0x81a0) = 0;
    }
  case 8:
    if (*(int *)(param_1 + 0x81f4) == 0x24) {
      *(undefined4 *)(param_1 + 0x81f0) = 0;
      *(undefined4 *)(param_1 + 0x81f4) = 0;
    }
    break;
  case 7:
    local_c = (AnmVm *)(param_1 + 0x5610);
    if (_DAT_0069bcb0 < 4) {
      FUN_0043753c(param_1);
      for (local_8 = 0; (int)local_8 < 4; local_8 = local_8 + 1) {
        if (local_8 == *(int *)(param_1 + 0x81a0)) {
          if ((DAT_006c6e60 & 1) == 0) {
            *(undefined4 *)((int)local_c + 0x7c) = 0xff000000;
          }
          else {
            *(undefined4 *)((int)local_c + 0x7c) = 0xffffffff;
          }
          *(undefined4 *)((int)local_c + 0xe4) = 0xc0c00000;
          *(undefined4 *)((int)local_c + 0xe8) = 0xc0c00000;
          *(undefined4 *)((int)local_c + 0xec) = 0;
        }
        else {
          if ((DAT_006c6e60 & 1) == 0) {
            *(undefined4 *)((int)local_c + 0x7c) = 0x60000000;
          }
          else {
            *(undefined4 *)((int)local_c + 0x7c) = 0x60ffffff;
          }
          *(undefined4 *)((int)local_c + 0xe4) = 0;
          *(undefined4 *)((int)local_c + 0xe8) = 0;
          *(undefined4 *)((int)local_c + 0xec) = 0;
          *(undefined2 *)((int)local_c + 0x84) = 0;
        }
        local_c = (AnmVm *)((int)local_c + 0x110);
      }
      *(uint *)((int)local_c + 0x80) = *(uint *)((int)local_c + 0x80) & 0xfffffffd;
    }
    else {
      for (local_8 = 0; (int)local_8 < 4; local_8 = local_8 + 1) {
        *(uint *)((int)local_c + 0x80) = *(uint *)((int)local_c + 0x80) & 0xfffffffd;
        local_c = (AnmVm *)((int)local_c + 0x110);
      }
      for (local_8 = 4; (int)local_8 < 5; local_8 = local_8 + 1) {
        if ((DAT_006c6e60 & 1) == 0) {
          *(undefined4 *)((int)local_c + 0x7c) = 0xff000000;
        }
        else {
          *(undefined4 *)((int)local_c + 0x7c) = 0xffffffff;
        }
        *(undefined4 *)((int)local_c + 0xe4) = 0xc0c00000;
        *(undefined4 *)((int)local_c + 0xe8) = 0xc0c00000;
        *(undefined4 *)((int)local_c + 0xec) = 0;
        local_c = (AnmVm *)((int)local_c + 0x110);
      }
    }
    if (((DAT_0069d904 & 10) == 0) || ((DAT_0069d904 & 10) == (DAT_0069d908 & 10))) {
      if (((DAT_0069d904 & 0x1001) != 0) && ((DAT_0069d904 & 0x1001) != (DAT_0069d908 & 0x1001))) {
        *(undefined4 *)(param_1 + 0x81f0) = 9;
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 7;
        }
        FUN_004311e0(10);
        if (_DAT_0069bcb0 < 4) {
          *(undefined2 *)(param_1 + (*(int *)(param_1 + 0x81a0) + 0x51) * 0x110 + 0x8a) = 8;
          _DAT_0069bcb0 = *(int *)(param_1 + 0x81a0);
          *(uint *)(param_1 + 0x81a0) = (uint)DAT_0069d4bd;
        }
        else {
          *(undefined2 *)(param_1 + 0x5ada) = 8;
          _DAT_0069bcb0 = 4;
          iVar4 = FUN_0043a736(DAT_0069d4bd,0);
          if ((iVar4 == 0) && (iVar4 = FUN_0043a736(DAT_0069d4bd,1), iVar4 == 0)) {
            *(uint *)(param_1 + 0x81a0) = 1 - (uint)DAT_0069d4bd;
          }
          else {
            *(uint *)(param_1 + 0x81a0) = (uint)DAT_0069d4bd;
          }
        }
        DAT_006c6e49 = DAT_0069bcb0;
        local_c = (AnmVm *)(param_1 + 0x5b60);
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 != *(int *)(param_1 + 0x81a0)) {
            *(undefined2 *)((int)local_c + 0x8a) = 0;
            *(undefined2 *)((int)local_c + 0x19a) = 0;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x81f0) = 8;
      *(undefined4 *)(param_1 + 0x81f4) = 0;
      for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
        *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 4;
      }
      FUN_004311e0(0xb);
      if (_DAT_0069bcb0 < 4) {
        DAT_006c6e49 = *(byte *)(param_1 + 0x81a0);
        if (DAT_0069d4c3 == '\0') {
          *(undefined4 *)(param_1 + 0x81a0) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x81a0) = 2;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x81a0) = 1;
      }
    }
    break;
  case 9:
    if (*(int *)(param_1 + 0x81f4) < 0x1e) break;
    if ((((DAT_0069d904 & 0x40) == 0) || ((DAT_0069d904 & 0x40) == (DAT_0069d908 & 0x40))) &&
       (((DAT_0069d904 & 0x40) == 0 || (DAT_0069d90c == 0)))) {
LAB_0043666d:
      if ((((DAT_0069d904 & 0x80) != 0) && ((DAT_0069d904 & 0x80) != (DAT_0069d908 & 0x80))) ||
         (((DAT_0069d904 & 0x80) != 0 && (DAT_0069d90c != 0)))) {
        *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + -1;
        if (*(int *)(param_1 + 0x81a0) < 0) {
          *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + 2;
        }
        if (((_DAT_0069bcb0 == 4) &&
            (iVar4 = FUN_0043a736(*(undefined4 *)(param_1 + 0x81a0),0), iVar4 == 0)) &&
           (iVar4 = FUN_0043a736(*(undefined4 *)(param_1 + 0x81a0),1), iVar4 == 0)) {
          *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + 1;
          if (1 < *(int *)(param_1 + 0x81a0)) {
            *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + -2;
          }
        }
        else {
          FUN_004311e0(0xc);
          local_c = (AnmVm *)(param_1 + 0x5b60);
          for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
            if (local_8 == *(int *)(param_1 + 0x81a0)) {
              *(undefined2 *)((int)local_c + 0x8a) = 10;
              *(undefined2 *)((int)local_c + 0x19a) = 10;
            }
            else {
              *(undefined2 *)((int)local_c + 0x8a) = 0xb;
              *(undefined2 *)((int)local_c + 0x19a) = 0xb;
            }
            local_c = (AnmVm *)((int)local_c + 0x220);
          }
        }
      }
    }
    else {
      *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + 1;
      if (1 < *(int *)(param_1 + 0x81a0)) {
        *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + -2;
      }
      if (((_DAT_0069bcb0 != 4) ||
          (iVar4 = FUN_0043a736(*(undefined4 *)(param_1 + 0x81a0),0), iVar4 != 0)) ||
         (iVar4 = FUN_0043a736(*(undefined4 *)(param_1 + 0x81a0),1), iVar4 != 0)) {
        FUN_004311e0(0xc);
        local_c = (AnmVm *)(param_1 + 0x5b60);
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 == *(int *)(param_1 + 0x81a0)) {
            *(undefined2 *)((int)local_c + 0x8a) = 9;
            *(undefined2 *)((int)local_c + 0x19a) = 9;
          }
          else {
            *(undefined2 *)((int)local_c + 0x8a) = 0xc;
            *(undefined2 *)((int)local_c + 0x19a) = 0xc;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
        goto LAB_0043666d;
      }
      *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + -1;
      if (*(int *)(param_1 + 0x81a0) < 0) {
        *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + 2;
      }
    }
    if (((DAT_0069d904 & 10) == 0) || ((DAT_0069d904 & 10) == (DAT_0069d908 & 10))) {
      if (((DAT_0069d904 & 0x1001) != 0) && ((DAT_0069d904 & 0x1001) != (DAT_0069d908 & 0x1001))) {
        *(undefined4 *)(param_1 + 0x81f0) = 0xb;
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 0xd;
        }
        *(undefined2 *)(param_1 + (_DAT_0069bcb0 + 0x51) * 0x110 + 0x8a) = 0;
        local_c = (AnmVm *)(param_1 + 0x5b60);
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 != *(int *)(param_1 + 0x81a0)) {
            *(undefined2 *)((int)local_c + 0x8a) = 0;
            *(undefined2 *)((int)local_c + 0x19a) = 0;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
        local_c = (AnmVm *)(param_1 + 0x61c0);
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 != *(int *)(param_1 + 0x81a0)) {
            *(undefined2 *)((int)local_c + 0x8a) = 0;
            *(undefined2 *)((int)local_c + 0x19a) = 0;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
        DAT_0069d4bd = *(byte *)(param_1 + 0x81a0);
        if (_DAT_0069bcb0 < 4) {
          *(uint *)(param_1 + 0x81a0) = (uint)DAT_0069d4be;
        }
        else {
          iVar4 = FUN_0043a736(DAT_0069d4bd,DAT_0069d4be);
          if (iVar4 == 0) {
            *(uint *)(param_1 + 0x81a0) = 1 - (uint)DAT_0069d4be;
          }
          else {
            *(uint *)(param_1 + 0x81a0) = (uint)DAT_0069d4be;
          }
        }
        FUN_004311e0(10);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x81f0) = 7;
      *(undefined4 *)(param_1 + 0x81f4) = 0;
      if (_DAT_0069bcb0 < 4) {
        for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 6;
        }
        *(uint *)(param_1 + 0x81a0) = (uint)DAT_006c6e49;
      }
      else {
        for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 0x12;
        }
        *(undefined4 *)(param_1 + 0x81a0) = 0;
      }
      FUN_004311e0(0xb);
    }
    break;
  case 10:
    if (0x3b < *(int *)(param_1 + 0x81f4)) {
      DAT_006c6ea4 = 6;
      return 0;
    }
    break;
  case 0xb:
    FUN_0043753c(param_1);
    if ((_DAT_0069bcb0 == 4) &&
       (iVar4 = FUN_0043a736(DAT_0069d4bd,*(undefined4 *)(param_1 + 0x81a0)), iVar4 == 0)) {
      *(int *)(param_1 + 0x81a0) = 1 - *(int *)(param_1 + 0x81a0);
    }
    local_c = (AnmVm *)(param_1 + 0x61c0);
    for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
      *(uint *)((int)local_c + 400) = *(uint *)((int)local_c + 400) | 8;
      local_c = (AnmVm *)((int)local_c + 0x220);
    }
    local_c = (AnmVm *)(param_1 + ((uint)DAT_0069d4bd * 2 + 0x5c) * 0x110);
    for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
      *(uint *)((int)local_c + 0x80) = *(uint *)((int)local_c + 0x80) | 8;
      *(uint *)((int)local_c + 0x80) = *(uint *)((int)local_c + 0x80) | 1;
      if (local_8 == *(int *)(param_1 + 0x81a0)) {
        if ((DAT_006c6e60 & 1) == 0) {
          *(undefined4 *)((int)local_c + 0x7c) = 0xff202020;
        }
        else {
          *(undefined4 *)((int)local_c + 0x7c) = 0xffffffff;
        }
        *(undefined4 *)((int)local_c + 0xe4) = 0xc0c00000;
        *(undefined4 *)((int)local_c + 0xe8) = 0xc0c00000;
        *(undefined4 *)((int)local_c + 0xec) = 0;
      }
      else {
        if ((DAT_006c6e60 & 1) == 0) {
          *(undefined4 *)((int)local_c + 0x7c) = 0xa0000000;
        }
        else {
          *(undefined4 *)((int)local_c + 0x7c) = 0xa0d0d0d0;
        }
        *(undefined4 *)((int)local_c + 0xe4) = 0;
        *(undefined4 *)((int)local_c + 0xe8) = 0;
        *(undefined4 *)((int)local_c + 0xec) = 0;
      }
      local_c = (AnmVm *)((int)local_c + 0x110);
    }
    if (0x1d < *(int *)(param_1 + 0x81f4)) {
      if (((DAT_0069d904 & 10) == 0) || ((DAT_0069d904 & 10) == (DAT_0069d908 & 10))) {
        if (((DAT_0069d904 & 0x1001) != 0) && ((DAT_0069d904 & 0x1001) != (DAT_0069d908 & 0x1001)))
        {
          DAT_0069d4be = *(byte *)(param_1 + 0x81a0);
          if (DAT_0069d4c3 == '\0') {
            if (_DAT_0069bcb0 < 4) {
              DAT_0069d6d4 = 0;
            }
            else {
              DAT_0069d6d4 = 6;
            }
            goto LAB_00436de7;
          }
          *(undefined4 *)(param_1 + 0x81f0) = 0x11;
          *(undefined4 *)(param_1 + 0x81f4) = 0;
          for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
            *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 0x13;
          }
          *(undefined2 *)(param_1 + (_DAT_0069bcb0 + 0x51) * 0x110 + 0x8a) = 0;
          local_c = (AnmVm *)(param_1 + 0x5b60);
          for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
            if (local_8 != DAT_0069d4bd) {
              *(undefined2 *)((int)local_c + 0x8a) = 0;
              *(undefined2 *)((int)local_c + 0x19a) = 0;
            }
            local_c = (AnmVm *)((int)local_c + 0x220);
          }
          local_c = (AnmVm *)(param_1 + 0x61c0);
          for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
            if (local_8 != DAT_0069d4bd) {
              *(undefined2 *)((int)local_c + 0x8a) = 0;
              *(undefined2 *)((int)local_c + 0x19a) = 0;
            }
            local_c = (AnmVm *)((int)local_c + 0x220);
          }
          *(undefined4 *)(param_1 + 0x81a0) = DAT_0069d6d8;
          if ((byte)(&DAT_0069cce1)
                    [_DAT_0069bcb0 + ((uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2) * 0x18] < 7) {
            local_b4 = (uint)(byte)(&DAT_0069cce1)
                                   [_DAT_0069bcb0 +
                                    ((uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2) * 0x18];
          }
          else {
            local_b4 = 6;
          }
          local_4c = local_b4;
          if ((_DAT_0069bcb0 == 0) && (local_b4 == 6)) {
            local_4c = 5;
          }
          if ((int)local_4c <= *(int *)(param_1 + 0x81a0)) {
            *(undefined4 *)(param_1 + 0x81a0) = 0;
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x81f0) = 9;
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 7;
        }
        local_c = (AnmVm *)(param_1 + 0x61c0);
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 != DAT_0069d4bd) {
            *(undefined2 *)((int)local_c + 0x8a) = 0;
            *(undefined2 *)((int)local_c + 0x19a) = 0;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
        *(undefined2 *)(param_1 + (_DAT_0069bcb0 + 0x51) * 0x110 + 0x8a) = 0;
        FUN_004311e0(0xb);
        DAT_0069d4be = *(byte *)(param_1 + 0x81a0);
        *(uint *)(param_1 + 0x81a0) = (uint)DAT_0069d4bd;
        local_c = (AnmVm *)(param_1 + 0x5b60);
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 != *(int *)(param_1 + 0x81a0)) {
            *(undefined2 *)((int)local_c + 0x8a) = 0;
            *(undefined2 *)((int)local_c + 0x19a) = 0;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
      }
    }
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    FUN_004381ec(param_1);
    if (iVar4 != 0) {
      return 0;
    }
    break;
  case 0x10:
    if (0x3b < *(int *)(param_1 + 0x81f4)) {
      DAT_006c6ea4 = 9;
      return 0;
    }
    break;
  case 0x11:
    FUN_0043753c(param_1);
    if (0x1d < *(int *)(param_1 + 0x81f4)) {
      if (((DAT_0069d904 & 10) == 0) || ((DAT_0069d904 & 10) == (DAT_0069d908 & 10))) {
        if (((DAT_0069d904 & 0x1001) != 0) && ((DAT_0069d904 & 0x1001) != (DAT_0069d908 & 0x1001)))
        {
          DAT_0069d6d4 = *(undefined4 *)(param_1 + 0x81a0);
          DAT_0069d6d8 = *(undefined4 *)(param_1 + 0x81a0);
LAB_00436de7:
          DAT_0069d4ba = DAT_006c6e44;
          DAT_0069d4bb = DAT_006c6e45;
          if ((_DAT_0069bcb0 == 4) || (DAT_0069d4c3 != '\0')) {
            DAT_0069d4ba = 2;
            DAT_0069d4bb = 3;
          }
          DAT_006c6ea4 = 2;
          FUN_004311e0(10);
          _DAT_0069bcbc = 0;
          local_48 = 0.0;
          if (*(int *)(param_1 + 0x10ee0) < 2) {
            local_48 = 60.0;
          }
          else {
            for (local_8 = 0; (int)local_8 < *(int *)(param_1 + 0x10ee0); local_8 = local_8 + 1) {
              local_48 = local_48 + *(float *)(param_1 + 0x10ee4 + local_8 * 4);
            }
            local_48 = local_48 / (float)local_8;
          }
          if (local_48 < 155.0) {
            if (local_48 < 135.0) {
              if (local_48 < 110.0) {
                if (local_48 < 95.0) {
                  if (local_48 < 87.5) {
                    if (local_48 < 82.5) {
                      if (local_48 < 77.5) {
                        if (local_48 < 73.5) {
                          if (local_48 < 68.0) {
                            local_44 = 1.0;
                          }
                          else {
                            local_44 = 0.8571429;
                          }
                        }
                        else {
                          local_44 = 0.8;
                        }
                      }
                      else {
                        local_44 = 0.75;
                      }
                    }
                    else {
                      local_44 = 0.7058824;
                    }
                  }
                  else {
                    local_44 = 0.6666667;
                  }
                }
                else {
                  local_44 = 0.6;
                }
              }
              else {
                local_44 = 0.5;
              }
            }
            else {
              local_44 = 0.4;
            }
          }
          else {
            local_44 = 0.375;
          }
          DebugPrint("Reflesh Rate = %f\n",(double)(60.0 / local_44));
          DAT_006c6ec4 = local_44;
          GameContext::FUN_00424d38((GameContext *)&DAT_006c6d18);
          return 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x81f0) = 0xb;
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 0xd;
        }
        *(undefined2 *)(param_1 + (_DAT_0069bcb0 + 0x51) * 0x110 + 0x8a) = 0;
        local_c = (AnmVm *)(param_1 + 0x5b60);
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 != DAT_0069d4bd) {
            *(undefined2 *)((int)local_c + 0x8a) = 0;
            *(undefined2 *)((int)local_c + 0x19a) = 0;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
        local_c = (AnmVm *)(param_1 + 0x61c0);
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 != DAT_0069d4bd) {
            *(undefined2 *)((int)local_c + 0x8a) = 0;
            *(undefined2 *)((int)local_c + 0x19a) = 0;
          }
          local_c = (AnmVm *)((int)local_c + 0x220);
        }
        *(uint *)(param_1 + 0x81a0) = (uint)DAT_0069d4be;
        FUN_004311e0(10);
      }
    }
  }
  *(int *)(param_1 + 0x81f4) = *(int *)(param_1 + 0x81f4) + 1;
  for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
    iVar4 = param_1 + local_8 * 0x110;
    if (*(int *)(iVar4 + 0xc0) == 0) {
      bVar5 = false;
    }
    else if (**(int **)(iVar4 + 0xc0) < 0) {
      bVar5 = false;
    }
    else {
      bVar5 = DAT_006d4588->textures[**(int **)(iVar4 + 0xc0)] != (IDirect3DTexture8 *)0x0;
    }
    if (bVar5) {
      AnmManager::FUN_00433960(DAT_006d4588,(AnmVm *)(param_1 + local_8 * 0x110));
    }
  }
  return 1;
}

