
undefined4 __thiscall SoundPlayer::Release(SoundPlayer *this)

{
  DirectSound8Player *this_00;
  int local_8;
  
  if (this->directsound8_uninit != (DirectSound8Player *)0x0) {
    for (local_8 = 0; local_8 < 0x80; local_8 = local_8 + 1) {
      if (*(int *)(&this->field_0x208 + local_8 * 4) != 0) {
        (**(code **)(**(int **)(&this->field_0x208 + local_8 * 4) + 8))
                  (*(undefined4 *)(&this->field_0x208 + local_8 * 4));
        *(undefined4 *)(&this->field_0x208 + local_8 * 4) = 0;
      }
      if (*(int *)(&this->field_0x8 + local_8 * 4) != 0) {
        (**(code **)(**(int **)(&this->field_0x8 + local_8 * 4) + 8))
                  (*(undefined4 *)(&this->field_0x8 + local_8 * 4));
        *(undefined4 *)(&this->field_0x8 + local_8 * 4) = 0;
      }
    }
    KillTimer((HWND)this->game_window,1);
    StopBGM(this);
    (this->directsound).directsound8 = (LPDIRECTSOUND8)0x0;
    (*this->soundbuffer->lpVtbl->Stop)(this->soundbuffer);
    if (this->soundbuffer != (LPDIRECTSOUNDBUFFER)0x0) {
      (*this->soundbuffer->lpVtbl->Release)(this->soundbuffer);
      this->soundbuffer = (LPDIRECTSOUNDBUFFER)0x0;
    }
    if (*(int *)&this->field_0x62c != 0) {
      if (*(undefined4 **)&this->field_0x62c != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)&this->field_0x62c)(1);
      }
      *(undefined4 *)&this->field_0x62c = 0;
    }
    if (this->directsound8_uninit != (DirectSound8Player *)0x0) {
      this_00 = this->directsound8_uninit;
      if (this_00 != (DirectSound8Player *)0x0) {
        DirectSound8Player::Release(this_00);
        _free(this_00);
      }
      this->directsound8_uninit = (DirectSound8Player *)0x0;
    }
  }
  return 0;
}

