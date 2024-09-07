
void __thiscall th06::Gui::FreeMsgFile(Gui *this)

{
  if ((this->impl->msg).msg_file != (MsgRawHeader *)0x0) {
    _free((this->impl->msg).msg_file);
    (this->impl->msg).msg_file = (MsgRawHeader *)0x0;
  }
  return;
}

