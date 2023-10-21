
void __thiscall SoundPlayer::FUN_004306e0(SoundPlayer *this,int idx,char *param_2)

{
  int iVar1;
  int iVar2;
  HRESULT HVar3;
  uint uVar4;
  undefined4 *puVar5;
  DSBUFFERDESC *pDVar6;
  undefined4 *puVar7;
  uint unaff_retaddr;
  tWAVEFORMATEX local_60;
  byte *local_4c;
  undefined4 *local_48;
  uint local_44;
  uint local_40;
  undefined4 *local_3c;
  DWORD local_38;
  undefined4 *local_34;
  DSBUFFERDESC local_30;
  uint local_c;
  byte *local_8;
  
  local_c = __security_cookie ^ unaff_retaddr;
  if (this->directsound8_uninit != (DirectSound8Player *)0x0) {
    if (this->sound_buffers[idx] != (LPDIRECTSOUNDBUFFER)0x0) {
      (*this->sound_buffers[idx]->lpVtbl->Release)(this->sound_buffers[idx]);
      this->sound_buffers[idx] = (LPDIRECTSOUNDBUFFER)0x0;
    }
    local_4c = FileSystem::OpenPath(param_2,0);
    local_8 = local_4c;
    if (local_4c != (byte *)0x0) {
      iVar1 = _strncmp((char *)local_4c,"RIFF",4);
      if (iVar1 == 0) {
        iVar1 = *(int *)(local_8 + 4);
        local_8 = local_8 + 8;
        iVar2 = _strncmp((char *)local_8,"WAVE",4);
        if (iVar2 == 0) {
          local_8 = local_8 + 4;
          local_34 = (undefined4 *)FUN_004309f0(local_8,&DAT_0046c0ec,&local_38,iVar1 + -0xc);
          if (local_34 == (undefined4 *)0x0) {
            GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",param_2);
            _free(local_4c);
          }
          else {
            local_60._0_4_ = *local_34;
            local_60.nSamplesPerSec = local_34[1];
            local_60.nAvgBytesPerSec = local_34[2];
            local_60._12_4_ = local_34[3];
            local_60.cbSize = *(WORD *)(local_34 + 4);
            local_34 = (undefined4 *)FUN_004309f0(local_8,&DAT_0046c0e4,&local_38,iVar1 + -0xc);
            if (local_34 == (undefined4 *)0x0) {
              GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",param_2);
              _free(local_4c);
            }
            else {
              pDVar6 = &local_30;
              for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
                pDVar6->dwSize = 0;
                pDVar6 = (DSBUFFERDESC *)&pDVar6->dwFlags;
              }
              local_30.dwSize = 0x24;
              local_30.dwFlags = 0x8088;
              local_30.dwBufferBytes = local_38;
              local_30.lpwfxFormat = &local_60;
              HVar3 = (*((this->directsound).directsound8)->lpVtbl->CreateSoundBuffer)
                                ((this->directsound).directsound8,&local_30,
                                 this->sound_buffers + idx,(LPUNKNOWN)0x0);
              if (HVar3 < 0) {
                _free(local_4c);
              }
              else {
                HVar3 = (*this->sound_buffers[idx]->lpVtbl->Lock)
                                  (this->sound_buffers[idx],0,local_38,&local_48,&local_44,&local_3c
                                   ,&local_40,0);
                if (HVar3 < 0) {
                  _free(local_4c);
                }
                else {
                  puVar5 = local_34;
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
                    puVar5 = (undefined4 *)((int)local_34 + local_44);
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
                  _free(local_4c);
                }
              }
            }
          }
        }
        else {
          GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない? %s\n",param_2);
          _free(local_4c);
        }
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"Wav ファイルじゃない %s\n",param_2);
        _free(local_4c);
      }
    }
  }
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}

