
bool __thiscall Gui::FUN_00419572(Gui *this)

{
  bool bVar1;
  
  if ((this->impl->msg).ignore_wait_counter == 0) {
    bVar1 = -1 < (int)(this->impl->msg).current_msg_idx;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

