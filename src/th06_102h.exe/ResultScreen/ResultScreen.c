
void * __thiscall th06::ResultScreen::ResultScreen(ResultScreen *this)

{
  ScoreListNode *local_58;
  int local_50;
  AnmVm *vm1;
  int local_34;
  AnmVm *vm2;
  int local_18;
  
  local_18 = 0x26;
                    /* memset */
  vm2 = &this->unk_40;
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(vm2);
    vm2 = vm2 + 1;
  }
  local_34 = 0x10;
                    /* memset */
  vm1 = &this->unk_28a0;
  while (local_34 = local_34 + -1, -1 < local_34) {
    AnmVm::AnmVm(vm1);
    vm1 = vm1 + 1;
  }
  AnmVm::AnmVm(&this->unk_39a0);
  local_50 = 0x14;
  local_58 = this->scores;
  while (local_50 = local_50 + -1, -1 < local_50) {
    local_58->prev = (ScoreListNode *)0x0;
    local_58->next = (ScoreListNode *)0x0;
    local_58->data = (Hscr *)0x0;
    local_58 = local_58 + 1;
  }
                    /* ?? doesn't this make everything above pointless, it fills the entirety of
                       this with 0. */
  _memset(this,0,0x56b0);
  this->cursor = 1;
  return this;
}

