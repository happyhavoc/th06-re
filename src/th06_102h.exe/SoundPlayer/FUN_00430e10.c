
undefined4 __thiscall SoundPlayer::FUN_00430e10(SoundPlayer *this,char *filepath)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int *_Memory;
  
  if (this->directsound8_uninit == (DirectSound8Player *)0x0) {
    uVar3 = 0xffffffff;
  }
  else if (g_Supervisor.cfg.playSounds == 0) {
    uVar3 = 0xffffffff;
  }
  else if (this->streamingSound == (CStreamingSound *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    _Memory = (int *)FileSystem::OpenPath(filepath,0);
    if (_Memory == (int *)0x0) {
      uVar3 = 0xffffffff;
    }
    else {
      pvVar1 = this->streamingSound->m_pWaveFile;
      iVar2 = _Memory[1];
      *(int *)((int)pvVar1 + 0x90) = *_Memory << 2;
      *(int *)((int)pvVar1 + 0x94) = iVar2 << 2;
      _free(_Memory);
      uVar3 = 0;
    }
  }
  return uVar3;
}
