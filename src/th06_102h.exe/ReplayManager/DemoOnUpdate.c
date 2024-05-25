
ChainCallbackResult ReplayManager::DemoOnUpdate(ReplayManager *param_1)

{
  byte bVar1;
  BOOL BVar2;
  undefined3 extraout_var;
  
  if ((((g_GameManager.is_in_menu != 0) && (BVar2 = Gui::HasCurrentMsgIdx(&g_Gui), BVar2 != 0)) &&
      (bVar1 = Gui::IsDialogueSkippable(&g_Gui), CONCAT31(extraout_var,bVar1) != 0)) &&
     ((int)param_1->frame_id % 3 != 2)) {
    return CHAIN_CALLBACK_RESULT_RESTART_FROM_FIRST_JOB;
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

