
undefined4 __thiscall th06::ResultScreen::CheckConfirmButton(ResultScreen *this)

{
  if (this->resultScreenState == 0xf) {
    if (this->field1_0x4 < 0x1f) {
      (this->viewportMaybe).pendingInterrupt = 0x10;
    }
    if (((0x59 < this->field1_0x4) && ((g_CurFrameInput & 0x1001) != 0)) &&
       ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
      (this->viewportMaybe).pendingInterrupt = 2;
      this->field1_0x4 = 0;
      this->resultScreenState = 0x10;
    }
  }
  else if ((this->resultScreenState == 0x10) && (0x1d < this->field1_0x4)) {
    this->field1_0x4 = 0x3b;
    this->resultScreenState = 10;
  }
  return 0;
}

