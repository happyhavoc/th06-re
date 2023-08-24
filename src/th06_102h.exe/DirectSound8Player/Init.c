
int __thiscall
DirectSound8Player::Init
          (DirectSound8Player *this,HWND param_1,DWORD param_2,undefined4 param_3,int param_4,
          undefined4 param_5)

{
  int iVar1;
  
  if (this->directsound8 != (LPDIRECTSOUND8)0x0) {
    (*this->directsound8->lpVtbl->Release)(this->directsound8);
    this->directsound8 = (LPDIRECTSOUND8)0x0;
  }
  iVar1 = DirectSoundCreate8((LPCGUID)0x0,&this->directsound8,(LPUNKNOWN)0x0);
  if ((-1 < iVar1) &&
     (iVar1 = (*this->directsound8->lpVtbl->SetCooperativeLevel)
                        (this->directsound8,(HWND)param_1,param_2), -1 < iVar1)) {
    CreateSoundBuffer(this,(short)param_3,param_4,(ushort)param_5);
    iVar1 = 0;
  }
  return iVar1;
}

