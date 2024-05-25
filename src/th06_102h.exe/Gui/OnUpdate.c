
ChainCallbackResult Gui::OnUpdate(Gui *param_1)

{
  if ((char)g_GameManager.isTimeStopped == '\0') {
    calculateStageScore(param_1);
    GuiImpl::run_msg(param_1->impl);
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

