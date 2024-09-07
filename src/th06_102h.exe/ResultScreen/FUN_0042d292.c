
undefined4 __thiscall th06::ResultScreen::FUN_0042d292(ResultScreen *this)

{
  if (this->unk_8 == 0xf) {
    if (this->field1_0x4 < 0x1f) {
      (this->viewportMaybe).pendingInterrupt = 0x10;
    }
    if (((0x59 < this->field1_0x4) && ((g_CurFrameInput & 0x1001) != 0)) &&
       ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
      (this->viewportMaybe).pendingInterrupt = 2;
      this->field1_0x4 = 0;
      this->unk_8 = 0x10;
    }
  }
  else if ((this->unk_8 == 0x10) && (0x1d < this->field1_0x4)) {
    this->field1_0x4 = 0x3b;
    this->unk_8 = 10;
  }
  return 0;
}

