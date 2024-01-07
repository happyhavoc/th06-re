
undefined4 __thiscall SoundPlayer::playBGM(SoundPlayer *this,LPDIRECTSOUND8 param_2)

{
  undefined4 uVar1;
  HRESULT HVar2;
  LPDIRECTSOUNDBUFFER pDSB;
  int iVar3;
  
  DebugPrint2("play BGM\n");
  if (this->streamingSound == (CStreamingSound *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    HVar2 = CStreamingSound::Reset(this->streamingSound);
    if (HVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      pDSB = (LPDIRECTSOUNDBUFFER)CSound::GetBuffer(&this->streamingSound->base,0);
      iVar3 = CSound::FillBufferWithSound(&this->streamingSound->base,pDSB,(BOOL)param_2);
      if (iVar3 < 0) {
        uVar1 = 0xffffffff;
      }
      else {
        iVar3 = CSound::Play(&this->streamingSound->base,0,1);
        if (iVar3 < 0) {
          uVar1 = 0xffffffff;
        }
        else {
          DebugPrint2("comp\n");
          this[1].csoundmanager.m_pDS = param_2;
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}

