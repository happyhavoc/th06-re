
ChainCallbackResult Supervisor::OnUpdate(Supervisor *param_1)

{
  ZunResult ZVar1;
  int iVar2;
  
  if (g_SoundPlayer.streamingSound != (CStreamingSound *)0x0) {
    CStreamingSound::UpdateFadeOut(g_SoundPlayer.streamingSound);
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
  iVar2 = param_1->wantedState;
  if (iVar2 == 0) goto LAB_00423454;
  if (iVar2 == 1) {
    iVar2 = param_1->curState;
    if (iVar2 == 2) {
      ZVar1 = GameManager::RegisterChain();
      if (ZVar1 != ZUN_SUCCESS) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
    }
    else {
      if (iVar2 == 4) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
      if (iVar2 == 5) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_ERROR;
      }
      if (iVar2 == 6) {
        iVar2 = ResultScreen::RegisterChain(0);
        if (iVar2 != 0) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
      else if (iVar2 == 9) {
        ZVar1 = MusicRoom::RegisterChain();
        if (ZVar1 != ZUN_SUCCESS) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
      else if (iVar2 == 10) {
        GameManager::CutChain();
        iVar2 = Ending::RegisterChain();
        if (iVar2 != 0) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
    }
  }
  else if (iVar2 == 2) {
    iVar2 = param_1->curState;
    if (iVar2 == 1) {
LAB_004235a0:
      GameManager::CutChain();
      param_1->curState = 0;
      FUN_0042ab30(0,0);
LAB_00423454:
      param_1->curState = 1;
      (*(g_Supervisor.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_Supervisor.d3dDevice,0);
      ZVar1 = MainMenu::RegisterChain(0);
      if (ZVar1 != ZUN_SUCCESS) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
    }
    else if (iVar2 == 3) {
      GameManager::CutChain();
      ZVar1 = GameManager::RegisterChain();
      if (ZVar1 != ZUN_SUCCESS) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
      if (param_1->curState == 1) goto LAB_004235a0;
      param_1->curState = 2;
    }
    else {
      if (iVar2 == 4) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
      if (iVar2 == 7) {
        GameManager::CutChain();
        iVar2 = ResultScreen::RegisterChain(1);
        if (iVar2 != 0) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
      else if (iVar2 == 8) {
        GameManager::CutChain();
        param_1->curState = 0;
        FUN_0042ab30(0,0);
        param_1->curState = 1;
        (*(g_Supervisor.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_Supervisor.d3dDevice,0);
        ZVar1 = MainMenu::RegisterChain(1);
        if (ZVar1 != ZUN_SUCCESS) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
      else if (iVar2 == 10) {
        GameManager::CutChain();
        iVar2 = Ending::RegisterChain();
        if (iVar2 != 0) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
    }
  }
  else if (iVar2 == 6) {
    if (param_1->curState == 1) {
      param_1->curState = 0;
      goto LAB_00423454;
    }
    if (param_1->curState == 4) {
      return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
    }
  }
  else if (iVar2 == 7) {
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
  else if (iVar2 == 9) {
    if (param_1->curState == 1) {
      param_1->curState = 0;
      goto LAB_00423454;
    }
    if (param_1->curState == 4) {
      return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
    }
  }
  else if (iVar2 == 10) {
    iVar2 = param_1->curState;
    if (iVar2 == 1) {
      param_1->curState = 0;
      goto LAB_00423454;
    }
    if (iVar2 == 4) {
      return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
    }
    if ((iVar2 == 7) && (iVar2 = ResultScreen::RegisterChain(1), iVar2 != 0)) {
      return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
    }
  }
  DAT_0069d90c = 0;
  g_LastFrameInput = 0;
  g_CurFrameInput = 0;
LAB_0042375b:
  param_1->wantedState = param_1->curState;
  param_1->calcCount = param_1->calcCount + 1;
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

