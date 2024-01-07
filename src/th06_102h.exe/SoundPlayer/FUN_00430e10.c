
undefined4 __thiscall SoundPlayer::FUN_00430e10(SoundPlayer *this,char *filepath)

{
  CWaveFile *pCVar1;
  int iVar2;
  undefined4 uVar3;
  int *data;
  
  if (this->csoundmanager_ptr == (CSoundManager *)0x0) {
    uVar3 = 0xffffffff;
  }
  else if (g_Supervisor.cfg.playSounds == 0) {
    uVar3 = 0xffffffff;
  }
  else if (this->streamingSound == (CStreamingSound *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    data = (int *)FileSystem::OpenPath(filepath,0);
    if (data == (int *)0x0) {
      uVar3 = 0xffffffff;
    }
    else {
      pCVar1 = (this->streamingSound->base).m_pWaveFile;
      iVar2 = data[1];
      pCVar1->m_dataToReadOnReset = *data << 2;
      pCVar1->field12_0x94 = (void *)(iVar2 << 2);
      _free(data);
      uVar3 = 0;
    }
  }
  return uVar3;
}

