
ChainCallbackResult th06::Gui::OnUpdate(Gui *param_1)

{
  if ((char)g_GameManager.isTimeStopped == '\0') {
    UpdateStageElements(param_1);
    GuiImpl::RunMsg(param_1->impl);
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

