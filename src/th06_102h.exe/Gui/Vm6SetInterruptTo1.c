
void __thiscall Gui::Vm6SetInterruptTo1(Gui *this)

{
  (this->impl->vm6).pendingInterrupt = 1;
  return;
}

