
void __thiscall SoundPlayer::LoadSound(SoundPlayer *this,int idx,char *path)

{
  char *soundFileData;
  int compared;
  HRESULT HVar3;
  int i;
  uint uVar4;
  WAVEFORMATEX *piVar1;
  DSBUFFERDESC *pDVar6;
  undefined4 *piVar2;
  undefined4 *puVar7;
  WAVEFORMATEX wavData;
  char *soundFileData2;
  LPVOID AudioPtr1;
  dword AudioBytes1;
  DWORD AudioBytes2;
  LPVOID AudioPtr2;
  DWORD formatSize;
  WAVEFORMATEX *wavDataPtr;
  DSBUFFERDESC dsBuffer;
  uint stackCookie;
  char *sFD_Cursor;
  int fileSize;
  uint unaff_retaddr;
  
  stackCookie = __security_cookie ^ unaff_retaddr;
  if (this->csoundmanager_ptr != (CSoundManager *)0x0) {
    if (this->sound_buffers[idx] != (LPDIRECTSOUNDBUFFER)0x0) {
      (*this->sound_buffers[idx]->lpVtbl->Release)(this->sound_buffers[idx]);
      this->sound_buffers[idx] = (LPDIRECTSOUNDBUFFER)0x0;
    }
    soundFileData = (char *)FileSystem::OpenPath(path,0);
    sFD_Cursor = soundFileData;
    if (soundFileData != (char *)0x0) {
      compared = _strncmp(soundFileData,"RIFF",4);
      if (compared == 0) {
        fileSize = *(int *)(sFD_Cursor + 4);
        sFD_Cursor = sFD_Cursor + 8;
        compared = _strncmp(sFD_Cursor,"WAVE",4);
        if (compared == 0) {
          sFD_Cursor = sFD_Cursor + 4;
          wavDataPtr = GetWavFormatData(sFD_Cursor,"fmt ",(int *)&formatSize,fileSize + -12);
          if (wavDataPtr == (WAVEFORMATEX *)0x0) {
            GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",path);
            _free(soundFileData);
          }
          else {
            wavData.wFormatTag = wavDataPtr->wFormatTag;
            wavData.nChannels = wavDataPtr->nChannels;
            wavData.nSamplesPerSec = wavDataPtr->nSamplesPerSec;
            wavData.nAvgBytesPerSec = wavDataPtr->nAvgBytesPerSec;
            wavData.nBlockAlign = wavDataPtr->nBlockAlign;
            wavData.wBitsPerSample = wavDataPtr->wBitsPerSample;
            wavData.cbSize = wavDataPtr->cbSize;
            wavDataPtr = GetWavFormatData(sFD_Cursor,"data",(int *)&formatSize,fileSize + -0xc);
            if (wavDataPtr == (WAVEFORMATEX *)0x0) {
              GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",path);
              _free(soundFileData);
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
              HVar3 = (*((this->csoundmanager).m_pDS)->lpVtbl->CreateSoundBuffer)
                                ((this->csoundmanager).m_pDS,&dsBuffer,this->sound_buffers + idx,
                                 (LPUNKNOWN)0x0);
              if (HVar3 < 0) {
                _free(soundFileData);
              }
              else {
                HVar3 = (*this->sound_buffers[idx]->lpVtbl->Lock)
                                  (this->sound_buffers[idx],0,formatSize,&AudioPtr1,&AudioBytes1,
                                   &AudioPtr2,&AudioBytes2,0);
                if (HVar3 < 0) {
                  _free(soundFileData);
                }
                else {
                  piVar1 = wavDataPtr;
                  piVar2 = (undefined4 *)AudioPtr1;
                  for (uVar4 = AudioBytes1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *piVar2 = *(undefined4 *)piVar1;
                    piVar1 = (WAVEFORMATEX *)&piVar1->nSamplesPerSec;
                    piVar2 = piVar2 + 1;
                  }
                  for (uVar4 = AudioBytes1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *(undefined *)piVar2 = *(undefined *)&piVar1->wFormatTag;
                    piVar1 = (WAVEFORMATEX *)((int)&piVar1->wFormatTag + 1);
                    piVar2 = (undefined4 *)((int)piVar2 + 1);
                  }
                  if (AudioBytes2 != 0) {
                    piVar2 = (undefined4 *)((int)&wavDataPtr->wFormatTag + AudioBytes1);
                    puVar7 = (undefined4 *)AudioPtr2;
                    for (uVar4 = AudioBytes2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                      *puVar7 = *piVar2;
                      piVar2 = piVar2 + 1;
                      puVar7 = puVar7 + 1;
                    }
                    for (uVar4 = AudioBytes2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                      *(undefined *)puVar7 = *(undefined *)piVar2;
                      piVar2 = (undefined4 *)((int)piVar2 + 1);
                      puVar7 = (undefined4 *)((int)puVar7 + 1);
                    }
                  }
                  (*this->sound_buffers[idx]->lpVtbl->Unlock)
                            (this->sound_buffers[idx],AudioPtr1,AudioBytes1,AudioPtr2,AudioBytes2);
                  _free(soundFileData);
                }
              }
            }
          }
        }
        else {
          GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",path);
          _free(soundFileData);
        }
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない %s\n",path);
        _free(soundFileData);
      }
    }
  }
  __security_check_cookie(stackCookie ^ unaff_retaddr);
  return;
}

