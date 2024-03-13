
ZunResult __thiscall SoundPlayer::LoadPos(SoundPlayer *this,char *filepath)

{
  CWaveFile *pCVar1;
  int iVar2;
  ZunResult result;
  int *data;
  
  if (this->csoundmanager_ptr == (CSoundManager *)0x0) {
    result = ZUN_ERROR;
  }
  else if (g_Supervisor.cfg.playSounds == 0) {
    result = ZUN_ERROR;
  }
  else if (this->streamingSound == (CStreamingSound *)0x0) {
    result = ZUN_ERROR;
  }
  else {
    data = (int *)FileSystem::OpenPath(filepath,0);
    if (data == (int *)0x0) {
      result = ZUN_ERROR;
    }
    else {
      pCVar1 = (this->streamingSound->base).m_pWaveFile;
      iVar2 = data[1];
      pCVar1->m_loopStartPoint = *data << 2;
      pCVar1->m_loopEndPoint = iVar2 << 2;
      _free(data);
      result = ZUN_SUCCESS;
    }
  }
  return result;
}

