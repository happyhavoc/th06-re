
byte __thiscall Gui::IsDialogueSkippable(Gui *this)

{
  return (this->impl->msg).dialogue_skippable;
}

