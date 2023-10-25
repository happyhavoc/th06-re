
void * __thiscall ResultScreen::ResultScreen(ResultScreen *this)

{
  ResultScreenUnk3ab0 *local_58;
  int local_50;
  AnmVm *local_3c;
  int local_34;
  AnmVm *local_20;
  int local_18;
  
  local_18 = 0x26;
  local_20 = this->unk_40;
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(local_20);
    local_20 = local_20 + 1;
  }
  local_34 = 0x10;
  local_3c = this->unk_28a0;
  while (local_34 = local_34 + -1, -1 < local_34) {
    AnmVm::AnmVm(local_3c);
    local_3c = local_3c + 1;
  }
  AnmVm::AnmVm(&this->unk_39a0);
  local_50 = 0x14;
  local_58 = this->unk_3ab0;
  while (local_50 = local_50 + -1, -1 < local_50) {
    local_58->unk1 = 0;
    local_58->unk2 = (void *)0x0;
    local_58->unk3 = (void *)0x0;
    local_58 = local_58 + 1;
  }
  _memset(this,0,0x56b0);
  this->unk_10 = 1;
  return this;
}

