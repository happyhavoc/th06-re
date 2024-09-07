
ZunResult __thiscall th06::SoundPlayer::PlayBGM(SoundPlayer *this,BOOL isLooping)

{
  ZunResult result;
  HRESULT HVar1;
  LPDIRECTSOUNDBUFFER pDSB;
  int iVar2;
  
  DebugPrint2("play BGM\n");
  if (this->backgroundMusic == (CStreamingSound *)0x0) {
    result = ZUN_ERROR;
  }
  else {
    HVar1 = CStreamingSound::Reset(this->backgroundMusic);
    if (HVar1 < 0) {
      result = ZUN_ERROR;
    }
    else {
      pDSB = (LPDIRECTSOUNDBUFFER)CSound::GetBuffer(&this->backgroundMusic->base,0);
      iVar2 = CSound::FillBufferWithSound(&this->backgroundMusic->base,pDSB,isLooping);
      if (iVar2 < 0) {
        result = ZUN_ERROR;
      }
      else {
        iVar2 = CSound::Play(&this->backgroundMusic->base,0,1);
        if (iVar2 < 0) {
          result = ZUN_ERROR;
        }
        else {
          DebugPrint2("comp\n");
          this->isLooping = isLooping;
          result = ZUN_SUCCESS;
        }
      }
    }
  }
  return result;
}

