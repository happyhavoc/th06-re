
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall GameWindow::Render(GameWindow *this)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  double local_34;
  
  if (this->lastActiveAppValue != 0) {
    if (this->curFrame != 0) goto LAB_00420894;
    do {
      while( true ) {
        if (DAT_006c6e4b <= this->curFrame) {
          if ((DAT_006c6e60 >> CLEAR_BACKBUFFER_ON_REFRESH & 1 |
              DAT_006c6e60 >> DISPLAY_MINIMUM_GRAPHICS & 1) != 0) {
            (**(code **)(*DAT_006c6d20 + 0xa0))(DAT_006c6d20);
            (**(code **)(*DAT_006c6d20 + 0x90))(DAT_006c6d20,0,0,3,DAT_00487b60,0x3f800000,0);
            (**(code **)(*DAT_006c6d20 + 0xa0))(DAT_006c6d20,&DAT_006c6de0);
          }
          (**(code **)(*DAT_006c6d20 + 0x88))();
          Chain::RunDrawChain((Chain *)&DAT_0069d918);
          (**(code **)(*DAT_006c6d20 + 0x8c))(DAT_006c6d20);
          (**(code **)(*DAT_006c6d20 + 0xf4))(DAT_006c6d20,0,0);
        }
        _DAT_006c6de0 = 0;
        DAT_006c6de4 = 0;
        DAT_006c6de8 = 640;
        DAT_006c6dec = 480;
        (**(code **)(*DAT_006c6d20 + 0xa0))(DAT_006c6d20);
        iVar3 = Chain::RunCalcChain((Chain *)&DAT_0069d918);
        SoundPlayer::PlaySounds((SoundPlayer *)&DAT_006d3f50);
        if (iVar3 == 0) {
          return 1;
        }
        if (iVar3 == -1) {
          return 2;
        }
        this->curFrame = this->curFrame + 1;
LAB_00420894:
        if (DAT_006c6e4a != '\0') break;
        if (((DAT_006c6e60 >> 7 & 1) == 0) || (_DAT_006c6eb8 == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) break;
LAB_004209ab:
        if (DAT_006c6e4a != '\0') {
          return 0;
        }
        if (((DAT_006c6e60 >> 7 & 1) == 0) || (_DAT_006c6eb8 == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return 0;
        }
        if (DAT_006c6e4b < this->curFrame) goto LAB_00420a0b;
        FUN_00420b50();
      }
      if (this->curFrame == 0) goto LAB_004209ab;
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
    } while (this->curFrame <= DAT_006c6e4b);
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
              (double)(DAT_006c6e4b + 1);
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
    this->curFrame = 0;
    DAT_006c6bf4 = DAT_006c6bf4 + 1;
  }
  return 0;
}

