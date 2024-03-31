
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 Gui::OnUpdate(Gui *param_1)

{
  if ((char)g_GameManager.unk_0x2c == '\0') {
    calculateStageScore(param_1);
    GuiImpl::run_msg(param_1->impl);
  }
  return 1;
}

