
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 Supervisor::CalcCallback(Supervisor *param_1)

{
  int iVar1;
  
  if (g_SoundPlayer.streamingSound != (CStreamingSound *)0x0) {
    FUN_0043b4d0(g_SoundPlayer.streamingSound);
  }
  g_LastFrameInput = g_CurFrameInput;
  g_CurFrameInput = GetInput();
  DAT_0069d90c = 0;
  if (g_LastFrameInput == g_CurFrameInput) {
    if ((0x1d < g_NumOfFramesInputsWereHeld) &&
       (DAT_0069d90c = (ushort)((uint)g_NumOfFramesInputsWereHeld % 8 == 0),
       0x25 < g_NumOfFramesInputsWereHeld)) {
      g_NumOfFramesInputsWereHeld = 0x1e;
    }
    g_NumOfFramesInputsWereHeld = g_NumOfFramesInputsWereHeld + 1;
  }
  else {
    g_NumOfFramesInputsWereHeld = 0;
  }
  if (param_1->wantedState == param_1->curState) goto LAB_0042375b;
  param_1->wantedState2 = param_1->wantedState;
  iVar1 = param_1->wantedState;
  if (iVar1 == 0) goto LAB_00423454;
  if (iVar1 == 1) {
    iVar1 = param_1->curState;
    if (iVar1 == 2) {
      iVar1 = GameManager::RegisterChain();
      if (iVar1 != 0) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
    }
    else {
      if (iVar1 == 4) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
      if (iVar1 == 5) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_ERROR;
      }
      if (iVar1 == 6) {
        iVar1 = ResultScreen::RegisterChain(0);
        if (iVar1 != 0) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
      else if (iVar1 == 9) {
        iVar1 = MusicRoom::RegisterChain();
        if (iVar1 != 0) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
      else if (iVar1 == 10) {
        GameManager::Deinitialize();
        iVar1 = FUN_004107b0();
        if (iVar1 != 0) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
    }
  }
  else if (iVar1 == 2) {
    iVar1 = param_1->curState;
    if (iVar1 == 1) {
LAB_004235a0:
      GameManager::Deinitialize();
      param_1->curState = 0;
      FUN_0042ab30(0,0);
LAB_00423454:
      param_1->curState = 1;
      (*(g_Supervisor.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_Supervisor.d3dDevice,0);
      iVar1 = MainMenu::RegisterChain(0);
      if (iVar1 != 0) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
    }
    else if (iVar1 == 3) {
      GameManager::Deinitialize();
      iVar1 = GameManager::RegisterChain();
      if (iVar1 != 0) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
      if (param_1->curState == 1) goto LAB_004235a0;
      param_1->curState = 2;
    }
    else {
      if (iVar1 == 4) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
      if (iVar1 == 7) {
        GameManager::Deinitialize();
        iVar1 = ResultScreen::RegisterChain(1);
        if (iVar1 != 0) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
      else if (iVar1 == 8) {
        GameManager::Deinitialize();
        param_1->curState = 0;
        FUN_0042ab30(0,0);
        param_1->curState = 1;
        (*(g_Supervisor.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_Supervisor.d3dDevice,0);
        iVar1 = MainMenu::RegisterChain(1);
        if (iVar1 != 0) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
      else if (iVar1 == 10) {
        GameManager::Deinitialize();
        iVar1 = FUN_004107b0();
        if (iVar1 != 0) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
    }
  }
  else if (iVar1 == 6) {
    if (param_1->curState == 1) {
      param_1->curState = 0;
      goto LAB_00423454;
    }
    if (param_1->curState == 4) {
      return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
    }
  }
  else if (iVar1 == 7) {
    if (param_1->curState == 1) {
      param_1->curState = 0;
      FUN_0042ab30(0,0);
      goto LAB_00423454;
    }
    if (param_1->curState == 4) {
      FUN_0042ab30(0,0);
      return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
    }
  }
  else if (iVar1 == 9) {
    if (param_1->curState == 1) {
      param_1->curState = 0;
      goto LAB_00423454;
    }
    if (param_1->curState == 4) {
      return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
    }
  }
  else if (iVar1 == 10) {
    iVar1 = param_1->curState;
    if (iVar1 == 1) {
      param_1->curState = 0;
      goto LAB_00423454;
    }
    if (iVar1 == 4) {
      return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
    }
    if ((iVar1 == 7) && (iVar1 = ResultScreen::RegisterChain(1), iVar1 != 0)) {
      return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
    }
  }
  DAT_0069d90c = 0;
  g_LastFrameInput = 0;
  g_CurFrameInput = 0;
LAB_0042375b:
  param_1->wantedState = param_1->curState;
  param_1->calcCount = param_1->calcCount + 1;
  return 1;
}

