
void __thiscall SoundPlayer::LoadSound(SoundPlayer *this,int idx,char *path)

{
  byte *_Str1;
  int iVar1;
  int iVar2;
  HRESULT HVar3;
  uint uVar4;
  undefined4 *puVar5;
  DWORD *pDVar6;
  undefined4 *puVar7;
  uint unaff_retaddr;
  char *local_4c;
  undefined4 *local_48;
  uint local_44;
  uint local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  tWAVEFORMATEX local_34;
  uint local_c;
  char *local_8;
  
  local_c = __security_cookie ^ unaff_retaddr;
  if (this->csoundmanager_ptr != (CSoundManager *)0x0) {
    if (this->sound_buffers[idx] != (LPDIRECTSOUNDBUFFER)0x0) {
      (*this->sound_buffers[idx]->lpVtbl->Release)(this->sound_buffers[idx]);
      this->sound_buffers[idx] = (LPDIRECTSOUNDBUFFER)0x0;
    }
    _Str1 = FileSystem::OpenPath(path,0);
    if (_Str1 != (byte *)0x0) {
      iVar1 = _strncmp((char *)_Str1,"RIFF",4);
      if (iVar1 == 0) {
        iVar1 = *(int *)(_Str1 + 4);
        iVar2 = _strncmp((char *)(_Str1 + 8),"WAVE",4);
        if (iVar2 == 0) {
          local_34._0_4_ = FUN_004309f0(_Str1 + 0xc,"fmt ",&local_38,iVar1 + -12);
          if (local_34._0_4_ == 0) {
            GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",path);
            _free(_Str1);
          }
          else {
            local_34._0_4_ = FUN_004309f0(_Str1 + 0xc,"data",&local_38,iVar1 + -0xc);
            if (local_34._0_4_ == 0) {
              GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",path);
              _free(_Str1);
            }
            else {
              pDVar6 = &local_34.nSamplesPerSec;
              for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
                *pDVar6 = 0;
                pDVar6 = pDVar6 + 1;
              }
              local_34.nSamplesPerSec = 0x24;
              local_34.nAvgBytesPerSec = 0x8088;
              local_34.nBlockAlign = (undefined2)local_38;
              local_34.wBitsPerSample = local_38._2_2_;
              HVar3 = (*((this->csoundmanager).m_pDS)->lpVtbl->CreateSoundBuffer)
                                ((this->csoundmanager).m_pDS,
                                 (LPCDSBUFFERDESC)&local_34.nSamplesPerSec,this->sound_buffers + idx
                                 ,(LPUNKNOWN)0x0);
              if (HVar3 < 0) {
                _free(_Str1);
              }
              else {
                HVar3 = (*this->sound_buffers[idx]->lpVtbl->Lock)
                                  (this->sound_buffers[idx],0,local_38,&local_48,&local_44,&local_3c
                                   ,&local_40,0);
                if (HVar3 < 0) {
                  _free(_Str1);
                }
                else {
                  puVar5 = (undefined4 *)local_34._0_4_;
                  puVar7 = local_48;
                  for (uVar4 = local_44 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *puVar7 = *puVar5;
                    puVar5 = puVar5 + 1;
                    puVar7 = puVar7 + 1;
                  }
                  for (uVar4 = local_44 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *(undefined *)puVar7 = *(undefined *)puVar5;
                    puVar5 = (undefined4 *)((int)puVar5 + 1);
                    puVar7 = (undefined4 *)((int)puVar7 + 1);
                  }
                  if (local_40 != 0) {
                    puVar5 = (undefined4 *)(local_34._0_4_ + local_44);
                    puVar7 = local_3c;
                    for (uVar4 = local_40 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                      *puVar7 = *puVar5;
                      puVar5 = puVar5 + 1;
                      puVar7 = puVar7 + 1;
                    }
                    for (uVar4 = local_40 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                      *(undefined *)puVar7 = *(undefined *)puVar5;
                      puVar5 = (undefined4 *)((int)puVar5 + 1);
                      puVar7 = (undefined4 *)((int)puVar7 + 1);
                    }
                  }
                  (*this->sound_buffers[idx]->lpVtbl->Unlock)
                            (this->sound_buffers[idx],local_48,local_44,local_3c,local_40);
                  _free(_Str1);
                }
              }
            }
          }
        }
        else {
          GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",path);
          _free(_Str1);
        }
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない %s\n",path);
        _free(_Str1);
      }
    }
  }
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}

