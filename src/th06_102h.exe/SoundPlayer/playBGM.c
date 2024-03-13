
ZunResult __thiscall SoundPlayer::playBGM(SoundPlayer *this,LPDIRECTSOUND8 param_2)

{
  ZunResult result;
  HRESULT HVar1;
  LPDIRECTSOUNDBUFFER pDSB;
  int iVar2;
  
  DebugPrint2("play BGM\n");
  if (this->streamingSound == (CStreamingSound *)0x0) {
    result = ZUN_ERROR;
  }
  else {
    HVar1 = CStreamingSound::Reset(this->streamingSound);
    if (HVar1 < 0) {
      result = ZUN_ERROR;
    }
    else {
      pDSB = (LPDIRECTSOUNDBUFFER)CSound::GetBuffer(&this->streamingSound->base,0);
      iVar2 = CSound::FillBufferWithSound(&this->streamingSound->base,pDSB,(BOOL)param_2);
      if (iVar2 < 0) {
        result = ZUN_ERROR;
      }
      else {
        iVar2 = CSound::Play(&this->streamingSound->base,0,1);
        if (iVar2 < 0) {
          result = ZUN_ERROR;
        }
        else {
          DebugPrint2("comp\n");
          this[1].csoundmanager.m_pDS = param_2;
          result = ZUN_SUCCESS;
        }
      }
    }
  }
  return result;
}

