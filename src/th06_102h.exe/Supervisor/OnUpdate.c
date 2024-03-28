
ChainCallbackResult Supervisor::OnUpdate(Supervisor *supervisor)

{
  ZunResult ZVar1;
  int state;
  
  if (g_SoundPlayer.streamingSound != (CStreamingSound *)0x0) {
    CStreamingSound::UpdateFadeOut(g_SoundPlayer.streamingSound);
  }
  g_LastFrameInput = g_CurFrameInput;
  g_CurFrameInput = GetInput();
  g_IsEigthFrameOfHeldInput = 0;
  if (g_LastFrameInput == g_CurFrameInput) {
    if ((0x1d < g_NumOfFramesInputsWereHeld) &&
       (g_IsEigthFrameOfHeldInput = (ushort)((uint)g_NumOfFramesInputsWereHeld % 8 == 0),
       0x25 < g_NumOfFramesInputsWereHeld)) {
      g_NumOfFramesInputsWereHeld = 0x1e;
    }
    g_NumOfFramesInputsWereHeld = g_NumOfFramesInputsWereHeld + 1;
  }
  else {
    g_NumOfFramesInputsWereHeld = 0;
  }
  if (supervisor->wantedState == supervisor->curState) goto LAB_0042375b;
  supervisor->wantedState2 = supervisor->wantedState;
  state = supervisor->wantedState;
  if (state == 0) goto LAB_00423454;
  if (state == 1) {
    state = supervisor->curState;
    if (state == 2) {
      ZVar1 = GameManager::RegisterChain();
      if (ZVar1 != ZUN_SUCCESS) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
    }
    else {
      if (state == 4) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
      if (state == 5) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_ERROR;
      }
      if (state == 6) {
        ZVar1 = ResultScreen::RegisterChain(0);
        if (ZVar1 != ZUN_SUCCESS) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
      else if (state == 9) {
        ZVar1 = MusicRoom::RegisterChain();
        if (ZVar1 != ZUN_SUCCESS) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
      else if (state == 10) {
        GameManager::CutChain();
        ZVar1 = Ending::RegisterChain();
        if (ZVar1 != ZUN_SUCCESS) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
    }
  }
  else if (state == 2) {
    state = supervisor->curState;
    if (state == 1) {
LAB_004235a0:
      GameManager::CutChain();
      supervisor->curState = 0;
      SaveReplay((char *)0x0,(char *)0x0);
LAB_00423454:
      supervisor->curState = 1;
      (*(g_Supervisor.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_Supervisor.d3dDevice,0);
      ZVar1 = MainMenu::RegisterChain(0);
      if (ZVar1 != ZUN_SUCCESS) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
    }
    else if (state == 3) {
      GameManager::CutChain();
      ZVar1 = GameManager::RegisterChain();
      if (ZVar1 != ZUN_SUCCESS) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
      if (supervisor->curState == 1) goto LAB_004235a0;
      supervisor->curState = 2;
    }
    else {
      if (state == 4) {
        return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
      }
      if (state == 7) {
        GameManager::CutChain();
        ZVar1 = ResultScreen::RegisterChain(1);
        if (ZVar1 != ZUN_SUCCESS) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
      else if (state == 8) {
        GameManager::CutChain();
        supervisor->curState = 0;
        SaveReplay((char *)0x0,(char *)0x0);
        supervisor->curState = 1;
        (*(g_Supervisor.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_Supervisor.d3dDevice,0);
        ZVar1 = MainMenu::RegisterChain(1);
        if (ZVar1 != ZUN_SUCCESS) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
      else if (state == 10) {
        GameManager::CutChain();
        ZVar1 = Ending::RegisterChain();
        if (ZVar1 != ZUN_SUCCESS) {
          return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
        }
      }
    }
  }
  else if (state == 6) {
    if (supervisor->curState == 1) {
      supervisor->curState = 0;
      goto LAB_00423454;
    }
    if (supervisor->curState == 4) {
      return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
    }
  }
  else if (state == 7) {
    if (supervisor->curState == 1) {
      supervisor->curState = 0;
      SaveReplay((char *)0x0,(char *)0x0);
      goto LAB_00423454;
    }
    if (supervisor->curState == 4) {
      SaveReplay((char *)0x0,(char *)0x0);
      return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
    }
  }
  else if (state == 9) {
    if (supervisor->curState == 1) {
      supervisor->curState = 0;
      goto LAB_00423454;
    }
    if (supervisor->curState == 4) {
      return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
    }
  }
  else if (state == 10) {
    state = supervisor->curState;
    if (state == 1) {
      supervisor->curState = 0;
      goto LAB_00423454;
    }
    if (state == 4) {
      return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
    }
    if ((state == 7) && (ZVar1 = ResultScreen::RegisterChain(1), ZVar1 != ZUN_SUCCESS)) {
      return CHAIN_CALLBACK_RESULT_EXIT_GAME_SUCCESS;
    }
  }
  g_IsEigthFrameOfHeldInput = 0;
  g_LastFrameInput = 0;
  g_CurFrameInput = 0;
LAB_0042375b:
  supervisor->wantedState = supervisor->curState;
  supervisor->calcCount = supervisor->calcCount + 1;
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

