
ChainCallbackResult th06::ResultScreen::OnUpdate(ResultScreen *result_screen)

{
  int iVar1;
  ZunBool ZVar2;
  int local_14;
  int local_10;
  AnmVm *vm;
  int i;
  
  iVar1 = result_screen->resultScreenState;
  if (iVar1 < 9) {
    if (iVar1 == 8) {
      if ((result_screen->lastSpellcardSelected != result_screen->cursor) &&
         (result_screen->frameTimer == 0x14)) {
        result_screen->lastSpellcardSelected = result_screen->cursor;
        for (i = result_screen->lastSpellcardSelected * 10;
            (i < result_screen->lastSpellcardSelected * 10 + 10 && (i < 0x40)); i = i + 1) {
          if (g_GameManager.catk[i].num_successes == 0) {
            AnmManager::DrawVmTextFmt
                      (g_AnmManager,&result_screen->unk_28a0 + i % 10,(ZunColor)0xffffff,
                       (ZunColor)0x0,"？？？？？");
          }
          else {
            AnmManager::DrawVmTextFmt
                      (g_AnmManager,&result_screen->unk_28a0 + i % 10,(ZunColor)0xffffff,
                       (ZunColor)0x0,(char *)g_GameManager.catk[i].name);
          }
        }
      }
      if (0x1d < result_screen->frameTimer) {
        ZVar2 = MoveCursorHorizontally(result_screen,7);
        if (ZVar2 != 0) {
          result_screen->frameTimer = 0;
          vm = &result_screen->unk_40;
          for (i = 0; i < 38; i = i + 1) {
            vm->pendingInterrupt = (short)result_screen->diffPlayed + 3;
            vm = vm + 1;
          }
        }
        if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
          result_screen->resultScreenState = 0;
          result_screen->frameTimer = 1;
          vm = &result_screen->unk_40;
          for (i = 0; i < 0x26; i = i + 1) {
            vm->pendingInterrupt = 1;
            vm = vm + 1;
          }
          result_screen->previousCursor = result_screen->cursor;
          result_screen->cursor = result_screen->diffPlayed;
        }
      }
    }
    else {
      if (iVar1 == 0) {
        if (result_screen->frameTimer == 0) {
          vm = &result_screen->unk_40;
          for (i = 0; i < 0x26; i = i + 1) {
            vm->pendingInterrupt = 1;
            vm->flags = vm->flags | AnmVmFlags_3;
            if ((g_Supervisor.cfg.opts & 1) == 0) {
              (vm->color).color = (vm->color).color & 0xff000000;
            }
            else {
              vm->color = vm->color;
            }
            vm = vm + 1;
          }
          vm = &result_screen->field19_0x150;
          for (i = 0; i < 7; i = i + 1) {
            if (i == result_screen->cursor) {
              if ((g_Supervisor.cfg.opts & 1) == 0) {
                (vm->color).color = 0xff505050;
              }
              else {
                (vm->color).color = 0xffffffff;
              }
              (vm->offset).x = -4.0;
              (vm->offset).y = -4.0;
              (vm->offset).z = 0.0;
            }
            else {
              if ((g_Supervisor.cfg.opts & 1) == 0) {
                (vm->color).color = 0xb0000000;
              }
              else {
                (vm->color).color = 0xb0ffffff;
              }
              (vm->offset).x = 0.0;
              (vm->offset).y = 0.0;
              (vm->offset).z = 0.0;
            }
            vm = vm + 1;
          }
        }
        if (result_screen->frameTimer < 0x14) goto LAB_0042e3fb;
        result_screen->resultScreenState = result_screen->resultScreenState + 1;
        result_screen->frameTimer = 0;
      }
      else if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (0x3b < result_screen->frameTimer) {
            g_Supervisor.curState = 1;
            return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
          }
        }
        else if (2 < iVar1) {
          if (6 < iVar1) {
            if (iVar1 != 7) goto LAB_0042e3fb;
            if (((g_CurFrameInput & 4) == 0) && ((g_CurFrameInput & 0x100) == 0)) {
              result_screen->cheatCodeStep = 0;
            }
            else if (result_screen->cheatCodeStep < 5) {
              if (((g_CurFrameInput & 0x800) == 0) ||
                 ((g_CurFrameInput & 0x800) == (g_LastFrameInput & 0x800))) {
                if (((g_CurFrameInput & 0x160b) != 0) &&
                   ((g_CurFrameInput & 0x160b) != (g_LastFrameInput & 0x160b))) {
                  result_screen->cheatCodeStep = 0;
                }
              }
              else {
                result_screen->cheatCodeStep = result_screen->cheatCodeStep + 1;
              }
            }
            else if (result_screen->cheatCodeStep < 7) {
              if (((g_CurFrameInput & 0x200) == 0) ||
                 ((g_CurFrameInput & 0x200) == (g_LastFrameInput & 0x200))) {
                if (((g_CurFrameInput & 0x160b) != 0) &&
                   ((g_CurFrameInput & 0x160b) != (g_LastFrameInput & 0x160b))) {
                  result_screen->cheatCodeStep = 0;
                }
              }
              else {
                result_screen->cheatCodeStep = result_screen->cheatCodeStep + 1;
              }
            }
            else if (result_screen->cheatCodeStep < 10) {
              if (((g_CurFrameInput & 0x400) == 0) ||
                 ((g_CurFrameInput & 0x400) == (g_LastFrameInput & 0x400))) {
                if (((g_CurFrameInput & 0x160b) != 0) &&
                   ((g_CurFrameInput & 0x160b) != (g_LastFrameInput & 0x160b))) {
                  result_screen->cheatCodeStep = 0;
                }
              }
              else {
                result_screen->cheatCodeStep = result_screen->cheatCodeStep + 1;
              }
            }
            else {
              for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
                for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                  *(undefined *)(local_10 * 0x18 + 0x69ccdc + local_14) = 99;
                  *(undefined *)(local_10 * 0x18 + 0x69cce1 + local_14) = 99;
                }
              }
              result_screen->cheatCodeStep = 0;
              SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_1UP,0);
            }
          }
          if ((result_screen->charUsed != result_screen->cursor) &&
             (result_screen->frameTimer == 0x14)) {
            result_screen->charUsed = result_screen->cursor;
            AnmManager::DrawStringFormat2
                      (g_AnmManager,&result_screen->unk_28a0,(ZunColor)0xffffff,(ZunColor)0x0,
                       (&g_CharacterList)[result_screen->charUsed * 2]);
            AnmManager::DrawStringFormat2
                      (g_AnmManager,&result_screen->field57_0x29b0,(ZunColor)0xffffff,(ZunColor)0x0,
                       (&PTR_Hakurei_Reimu__Dream__004784dc)[result_screen->charUsed * 2]);
          }
          if (0x1d < result_screen->frameTimer) {
            ZVar2 = MoveCursorHorizontally(result_screen,2);
            if (ZVar2 != 0) {
              result_screen->frameTimer = 0;
              vm = &result_screen->unk_40;
              for (i = 0; i < 0x26; i = i + 1) {
                vm->pendingInterrupt = (short)result_screen->diffPlayed + 3;
                vm = vm + 1;
              }
            }
            if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))
               ) {
              SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
              result_screen->resultScreenState = 0;
              result_screen->frameTimer = 1;
              vm = &result_screen->unk_40;
              for (i = 0; i < 38; i = i + 1) {
                vm->pendingInterrupt = 1;
                vm = vm + 1;
              }
              result_screen->field5_0x14 = result_screen->cursor;
              result_screen->cursor = result_screen->diffPlayed;
            }
          }
        }
        goto LAB_0042e3fb;
      }
      MoveCursor(result_screen,7);
      vm = &result_screen->field19_0x150;
      for (i = 0; i < 7; i = i + 1) {
        if (i == result_screen->cursor) {
          if ((g_Supervisor.cfg.opts & 1) == 0) {
            (vm->color).color = 0xff505050;
          }
          else {
            (vm->color).color = 0xffffffff;
          }
          (vm->offset).x = -4.0;
          (vm->offset).y = -4.0;
          (vm->offset).z = 0.0;
        }
        else {
          if ((g_Supervisor.cfg.opts & 1) == 0) {
            (vm->color).color = 0xb0000000;
          }
          else {
            (vm->color).color = 0xb0ffffff;
          }
          (vm->offset).x = 0.0;
          (vm->offset).y = 0.0;
          (vm->offset).z = 0.0;
        }
        vm = vm + 1;
      }
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        vm = &result_screen->unk_40;
        iVar1 = result_screen->cursor;
        if (-1 < iVar1) {
          if (iVar1 < 5) {
            for (i = 0; i < 0x26; i = i + 1) {
              vm->pendingInterrupt = (short)result_screen->cursor + 3;
              vm = vm + 1;
            }
            result_screen->diffPlayed = result_screen->cursor;
            result_screen->resultScreenState = result_screen->cursor + 3;
            result_screen->field3_0xc = result_screen->resultScreenState;
            result_screen->frameTimer = 0;
            result_screen->cursor = result_screen->field5_0x14;
            result_screen->charUsed = -1;
            result_screen->lastSpellcardSelected = -1;
          }
          else if (iVar1 == 5) {
            for (i = 0; i < 0x26; i = i + 1) {
              vm->pendingInterrupt = (short)result_screen->cursor + 3;
              vm = vm + 1;
            }
            result_screen->diffPlayed = result_screen->cursor;
            result_screen->resultScreenState = 8;
            result_screen->field3_0xc = result_screen->resultScreenState;
            result_screen->frameTimer = 0;
            result_screen->charUsed = -1;
            result_screen->cursor = result_screen->previousCursor;
            result_screen->lastSpellcardSelected = -1;
          }
          else if (iVar1 == 6) {
            for (i = 0; i < 0x26; i = i + 1) {
              vm->pendingInterrupt = 2;
              vm = vm + 1;
            }
            result_screen->resultScreenState = 2;
            SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
          }
        }
      }
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        result_screen->cursor = 6;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
      }
    }
  }
  else if (iVar1 == 9) {
    HandleResultKeyboard(result_screen);
  }
  else if (9 < iVar1) {
    if (iVar1 < 0xf) {
      HandleReplaySaveKeyboard(result_screen);
    }
    else if (0xe < iVar1) {
      if (iVar1 < 0x11) {
        CheckConfirmButton(result_screen);
      }
      else if (iVar1 == 0x11) {
        g_Supervisor.curState = 1;
        return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
      }
    }
  }
LAB_0042e3fb:
  vm = &result_screen->unk_40;
  for (i = 0; i < 38; i = i + 1) {
    AnmManager::ExecuteScript(g_AnmManager,vm);
    vm = vm + 1;
  }
  result_screen->frameTimer = result_screen->frameTimer + 1;
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

