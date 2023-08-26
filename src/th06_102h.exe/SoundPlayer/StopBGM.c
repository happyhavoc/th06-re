
void __thiscall SoundPlayer::StopBGM(SoundPlayer *this)

{
  if (*(int *)&this->field_0x62c != 0) {
    FUN_0043b300();
    if (this->field1318_0x618 != 0) {
      PostThreadMessageA(*(DWORD *)&this->field_0x614,0x12,0,0);
      DebugPrint2("stop m_dwNotifyThreadID\n");
      WaitForSingleObject((HANDLE)this->field1318_0x618,0xffffffff);
      DebugPrint2("comp\n");
      CloseHandle((HANDLE)this->field1318_0x618);
      CloseHandle(this[1].directsound.directsound8);
      this->field1318_0x618 = 0;
    }
    if (*(int *)&this->field_0x62c != 0) {
      if (*(undefined4 **)&this->field_0x62c != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)&this->field_0x62c)(1);
      }
      *(undefined4 *)&this->field_0x62c = 0;
    }
    DebugPrint2("stop BGM\n");
  }
  return;
}

