
void __thiscall Gui::MsgRead(Gui *this,int param_1)

{
  GuiImpl::MsgRead(this->impl,param_1);
  g_Supervisor.unk198 = 3;
  return;
}

