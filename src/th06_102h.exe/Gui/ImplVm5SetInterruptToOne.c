
void __thiscall Gui::ImplVm5SetInterruptToOne(Gui *this)

{
  (this->impl->vm5).pendingInterrupt = 1;
  return;
}

