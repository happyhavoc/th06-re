
ZunResult __thiscall th06::SoundPlayer::LoadSound(SoundPlayer *this,int idx,char *path)

{
  WORD WVar1;
  ZunResult ZVar2;
  char *soundFileData;
  int compared;
  HRESULT HVar3;
  int i;
  uint uVar4;
  WAVEFORMATEX *piVar1;
  WAVEFORMATEX *puVar5;
  DSBUFFERDESC *pDVar6;
  WAVEFORMATEX *piVar2;
  WAVEFORMATEX wavData;
  char *soundFileData2;
  WAVEFORMATEX *AudioPtr1;
  dword AudioBytes1;
  DWORD AudioBytes2;
  WAVEFORMATEX *AudioPtr2;
  int formatSize;
  WAVEFORMATEX *wavDataPtr;
  DSBUFFERDESC dsBuffer;
  uint stackCookie;
  char *sFD_Cursor;
  int fileSize;
  uint unaff_retaddr;
  
  stackCookie = __security_cookie ^ unaff_retaddr;
  if (this->csoundmanager_ptr == (CSoundManager *)0x0) {
    ZVar2 = ZUN_SUCCESS;
  }
  else {
    if (this->sound_buffers[idx] != (LPDIRECTSOUNDBUFFER)0x0) {
      (*this->sound_buffers[idx]->lpVtbl->Release)(this->sound_buffers[idx]);
      this->sound_buffers[idx] = (LPDIRECTSOUNDBUFFER)0x0;
    }
    soundFileData = (char *)FileSystem::OpenPath(path,0);
    sFD_Cursor = soundFileData;
    if (soundFileData == (char *)0x0) {
      ZVar2 = ZUN_ERROR;
    }
    else {
      compared = _strncmp(soundFileData,"RIFF",4);
      if (compared == 0) {
        fileSize = *(int *)(sFD_Cursor + 4);
        sFD_Cursor = sFD_Cursor + 8;
        compared = _strncmp(sFD_Cursor,"WAVE",4);
        if (compared == 0) {
          sFD_Cursor = sFD_Cursor + 4;
          wavDataPtr = GetWavFormatData((byte *)sFD_Cursor,"fmt ",&formatSize,fileSize - uVar2);
          if (wavDataPtr == (WAVEFORMATEX *)0x0) {
            GameErrorContext::Log(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",path);
            _free(soundFileData);
            ZVar2 = ZUN_ERROR;
          }
          else {
            wavData.wFormatTag = wavDataPtr->wFormatTag;
            wavData.nChannels = wavDataPtr->nChannels;
            wavData.nSamplesPerSec = wavDataPtr->nSamplesPerSec;
            wavData.nAvgBytesPerSec = wavDataPtr->nAvgBytesPerSec;
            wavData.nBlockAlign = wavDataPtr->nBlockAlign;
            wavData.wBitsPerSample = wavDataPtr->wBitsPerSample;
            wavData.cbSize = wavDataPtr->cbSize;
            wavDataPtr = GetWavFormatData((byte *)sFD_Cursor,"data",&formatSize,fileSize - 0xc);
            if (wavDataPtr == (WAVEFORMATEX *)0x0) {
              GameErrorContext::Log(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",path);
              _free(soundFileData);
              ZVar2 = ZUN_ERROR;
            }
            else {
              pDVar6 = &dsBuffer;
              for (i = 9; i != 0; i = i + -1) {
                pDVar6->dwSize = 0;
                pDVar6 = (DSBUFFERDESC *)&pDVar6->dwFlags;
              }
              dsBuffer.dwSize = 0x24;
              dsBuffer.dwFlags = 0x8088;
              dsBuffer.dwBufferBytes = formatSize;
              dsBuffer.lpwfxFormat = &wavData;
              HVar3 = (*this->directSoundHdl->lpVtbl->CreateSoundBuffer)
                                (this->directSoundHdl,&dsBuffer,this->sound_buffers + idx,
                                 (LPUNKNOWN)0x0);
              if (HVar3 < 0) {
                _free(soundFileData);
                ZVar2 = ZUN_ERROR;
              }
              else {
                HVar3 = (*this->sound_buffers[idx]->lpVtbl->Lock)
                                  (this->sound_buffers[idx],0,formatSize,&AudioPtr1,&AudioBytes1,
                                   &AudioPtr2,&AudioBytes2,0);
                if (HVar3 < 0) {
                  _free(soundFileData);
                  ZVar2 = ZUN_ERROR;
                }
                else {
                  piVar1 = wavDataPtr;
                  piVar2 = AudioPtr1;
                  for (uVar4 = AudioBytes1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                    WVar1 = piVar1->nChannels;
                    piVar2->wFormatTag = piVar1->wFormatTag;
                    piVar2->nChannels = WVar1;
                    piVar1 = (WAVEFORMATEX *)&piVar1->nSamplesPerSec;
                    piVar2 = (WAVEFORMATEX *)&piVar2->nSamplesPerSec;
                  }
                  for (uVar4 = AudioBytes1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *(undefined *)&piVar2->wFormatTag = *(undefined *)&piVar1->wFormatTag;
                    piVar1 = (WAVEFORMATEX *)((int)&piVar1->wFormatTag + 1);
                    piVar2 = (WAVEFORMATEX *)((int)&piVar2->wFormatTag + 1);
                  }
                  if (AudioBytes2 != 0) {
                    puVar5 = (WAVEFORMATEX *)((int)&wavDataPtr->wFormatTag + AudioBytes1);
                    piVar1 = AudioPtr2;
                    for (uVar4 = AudioBytes2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                      WVar1 = puVar5->nChannels;
                      piVar1->wFormatTag = puVar5->wFormatTag;
                      piVar1->nChannels = WVar1;
                      puVar5 = (WAVEFORMATEX *)&puVar5->nSamplesPerSec;
                      piVar1 = (WAVEFORMATEX *)&piVar1->nSamplesPerSec;
                    }
                    for (uVar4 = AudioBytes2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                      *(undefined *)&piVar1->wFormatTag = *(undefined *)&puVar5->wFormatTag;
                      puVar5 = (WAVEFORMATEX *)((int)&puVar5->wFormatTag + 1);
                      piVar1 = (WAVEFORMATEX *)((int)&piVar1->wFormatTag + 1);
                    }
                  }
                  (*this->sound_buffers[idx]->lpVtbl->Unlock)
                            (this->sound_buffers[idx],AudioPtr1,AudioBytes1,AudioPtr2,AudioBytes2);
                  _free(soundFileData);
                  ZVar2 = ZUN_SUCCESS;
                }
              }
            }
          }
        }
        else {
          GameErrorContext::Log(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",path);
          _free(soundFileData);
          ZVar2 = ZUN_ERROR;
        }
      }
      else {
        GameErrorContext::Log(&g_GameErrorContext,"Wav ファイルじゃない %s\n",path);
        _free(soundFileData);
        ZVar2 = ZUN_ERROR;
      }
    }
  }
  __security_check_cookie(stackCookie ^ unaff_retaddr);
  return ZVar2;
}

