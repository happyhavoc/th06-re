
BOOL __thiscall th06::Gui::HasCurrentMsgIdx(Gui *this)

{
  return (uint)(-1 < (int)(this->impl->msg).current_msg_idx);
}

