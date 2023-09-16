
undefined4 __thiscall SoundPlayer::FUN_00430e10(SoundPlayer *this,char *filepath)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *_Memory;
  
  if (this->directsound8_uninit == (DirectSound8Player *)0x0) {
    uVar3 = 0xffffffff;
  }
  else if (g_GameContext.cfg.playSounds == 0) {
    uVar3 = 0xffffffff;
  }
  else if (*(int *)&this->field_0x62c == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    _Memory = (int *)OpenPath(filepath,0);
    if (_Memory == (int *)0x0) {
      uVar3 = 0xffffffff;
    }
    else {
      iVar1 = *(int *)(*(int *)&this->field_0x62c + 0xc);
      iVar2 = _Memory[1];
      *(int *)(iVar1 + 0x90) = *_Memory << 2;
      *(int *)(iVar1 + 0x94) = iVar2 << 2;
      _free(_Memory);
      uVar3 = 0;
    }
  }
  return uVar3;
}

