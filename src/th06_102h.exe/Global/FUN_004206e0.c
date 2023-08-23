
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004206e0(void)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  int in_ECX;
  double local_34;
  
  if (*(int *)(in_ECX + 8) != 0) {
    if (*(char *)(in_ECX + 0x10) != '\0') goto LAB_00420894;
    do {
      while( true ) {
        if (g_GameContext.cfg.field15_0x1f <= *(byte *)(in_ECX + 0x10)) {
          if (((uint)g_GameContext.cfg.field34_0x34 >> 3 & 1 |
              (uint)g_GameContext.cfg.field34_0x34 >> 4 & 1) != 0) {
            (**(code **)(*(int *)g_GameContext._8_4_ + 0xa0))(g_GameContext._8_4_);
            (**(code **)(*(int *)g_GameContext._8_4_ + 0x90))
                      (g_GameContext._8_4_,0,0,3,DAT_00487b60,0x3f800000,0);
            (**(code **)(*(int *)g_GameContext._8_4_ + 0xa0))(g_GameContext._8_4_,0x6c6de0);
          }
          (**(code **)(*(int *)g_GameContext._8_4_ + 0x88))();
          FUN_0041cad0();
          (**(code **)(*(int *)g_GameContext._8_4_ + 0x8c))(g_GameContext._8_4_);
          (**(code **)(*(int *)g_GameContext._8_4_ + 0xf4))(g_GameContext._8_4_,0,0);
        }
        g_GameContext._200_4_ = 0;
        g_GameContext._204_4_ = 0;
        g_GameContext._208_4_ = 0x280;
        g_GameContext._212_4_ = 0x1e0;
        (**(code **)(*(int *)g_GameContext._8_4_ + 0xa0))(g_GameContext._8_4_);
        iVar3 = FUN_0041ca10();
        FUN_00431270();
        if (iVar3 == 0) {
          return 1;
        }
        if (iVar3 == -1) {
          return 2;
        }
        *(char *)(in_ECX + 0x10) = *(char *)(in_ECX + 0x10) + '\x01';
LAB_00420894:
        if (g_GameContext.cfg.field14_0x1e != 0) break;
        if ((((uint)g_GameContext.cfg.field34_0x34 >> 7 & 1) == 0) ||
           (g_GameContext.field352_0x1a0 == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) break;
LAB_004209ab:
        if (g_GameContext.cfg.field14_0x1e != 0) {
          return 0;
        }
        if ((((uint)g_GameContext.cfg.field34_0x34 >> 7 & 1) == 0) ||
           (g_GameContext.field352_0x1a0 == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return 0;
        }
        if (g_GameContext.cfg.field15_0x1f < *(byte *)(in_ECX + 0x10)) goto LAB_00420a0b;
        FUN_00420b50();
      }
      if (*(char *)(in_ECX + 0x10) == '\0') goto LAB_004209ab;
      DAT_006c6ec4 = 1.0;
      timeBeginPeriod(1);
      DVar4 = timeGetTime();
      dVar1 = (double)(ulonglong)DVar4;
      if (dVar1 < _DAT_006c6bf8 != (NAN(dVar1) || NAN(_DAT_006c6bf8))) {
        _DAT_006c6bf8 = dVar1;
      }
      local_34 = _fabs(dVar1 - _DAT_006c6bf8);
      timeEndPeriod(1);
      if (local_34 < 16.66666666666667) goto LAB_004209ab;
      do {
        _DAT_006c6bf8 = _DAT_006c6bf8 + 16.66666666666667;
        local_34 = local_34 - 16.66666666666667;
      } while (16.66666666666667 <= local_34);
    } while (*(byte *)(in_ECX + 0x10) <= g_GameContext.cfg.field15_0x1f);
LAB_00420a0b:
    FUN_00420b50();
    if (NAN(DAT_006c6ec4) == (DAT_006c6ec4 == 0.0)) {
      DAT_006c6ec0 = DAT_006c6ec4;
    }
    else if (1 < DAT_006c6bf4) {
      timeBeginPeriod(1);
      DVar4 = timeGetTime();
      if (DVar4 < _DAT_006c6ebc) {
        _DAT_006c6ebc = DVar4;
      }
      dVar1 = ((((double)(ulonglong)(DVar4 - _DAT_006c6ebc) * 60.0) / 2.0) / 1000.0) /
              (double)(g_GameContext.cfg.field15_0x1f + 1);
      if (dVar1 < 0.865) {
        if (dVar1 < 0.6) {
          DAT_006c6ec0 = 0.5;
        }
        else {
          DAT_006c6ec0 = 0.8;
        }
      }
      else {
        DAT_006c6ec0 = 1.0;
      }
      _DAT_006c6ebc = DVar4;
      timeEndPeriod(1);
      DAT_006c6bf4 = 0;
    }
    *(undefined *)(in_ECX + 0x10) = 0;
    DAT_006c6bf4 = DAT_006c6bf4 + 1;
  }
  return 0;
}

