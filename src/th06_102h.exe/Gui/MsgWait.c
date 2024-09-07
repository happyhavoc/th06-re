
BOOL __thiscall th06::Gui::MsgWait(Gui *this)

{
  uint uVar1;
  
  if ((this->impl->msg).ignore_wait_counter == 0) {
    uVar1 = (uint)(-1 < (int)(this->impl->msg).current_msg_idx);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

