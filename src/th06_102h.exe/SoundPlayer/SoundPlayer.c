
undefined4 * __thiscall SoundPlayer::SoundPlayer(SoundPlayer *this)

{
  int iVar1;
  SoundPlayer *pSVar2;
  int local_8;
  
  pSVar2 = this;
  for (iVar1 = 0x18e; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pSVar2->directsound).directsound8 = (LPDIRECTSOUND8)0x0;
    pSVar2 = (SoundPlayer *)&pSVar2->field_0x4;
  }
  for (local_8 = 0; local_8 < 0x80; local_8 = local_8 + 1) {
    *(undefined4 *)(&this->field_0x408 + local_8 * 4) = 0xffffffff;
  }
  return &this->directsound;
}
