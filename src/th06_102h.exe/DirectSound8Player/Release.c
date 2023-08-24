
void __thiscall DirectSound8Player::Release(DirectSound8Player *this)

{
  if (this->directsound8 != (LPDIRECTSOUND8)0x0) {
    (*this->directsound8->lpVtbl->Release)(this->directsound8);
    this->directsound8 = (LPDIRECTSOUND8)0x0;
  }
  return;
}

