
ChainCallbackResult ReplayManager::DemoOnUpdate(ReplayManager *param_1)

{
  BOOL BVar1;
  int iVar2;
  
  if ((((g_GameManager.is_in_menu != 0) && (BVar1 = Gui::HasCurrentMsgIdx(&g_Gui), BVar1 != 0)) &&
      (iVar2 = Gui::is_dialogue_skippable(&g_Gui), iVar2 != 0)) && ((int)param_1->frame_id % 3 != 2)
     ) {
    return CHAIN_CALLBACK_RESULT_RESTART_FROM_FIRST_JOB;
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

