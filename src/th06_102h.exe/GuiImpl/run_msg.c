
undefined4 __thiscall GuiImpl::run_msg(GuiImpl *this)

{
  undefined4 uVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  int unaff_ESI;
  short local_34;
  short local_20;
  short local_14;
  AnmVm *pAVar1;
  AnmManager *pAVar4;
  void *pvVar3;
  short sVar2;
  
                    /* This is the MSG VM execute function
                        */
  if ((int)(this->msg).current_msg_idx < 0) {
    uVar5 = 0xffffffff;
  }
  else {
    if ((this->msg).ignore_wait_counter != 0) {
      (this->msg).ignore_wait_counter = (this->msg).ignore_wait_counter - 1;
    }
    if (((this->msg).dialogue_skippable != 0) && ((g_CurFrameInput & 0x100) != 0)) {
                    /* WARNING: Load size is inaccurate */
      (this->msg).timer.current = (uint)*(this->msg).current_instr;
      (this->msg).timer.subFrame = 0.0;
      (this->msg).timer.previous = -999;
    }
                    /* WARNING: Load size is inaccurate */
    while (pAVar4 = g_AnmManager, (int)(uint)*(this->msg).current_instr <= (this->msg).timer.current
          ) {
      switch(*(undefined *)((int)(this->msg).current_instr + 2)) {
      case 0:
        (this->msg).current_msg_idx = 0xffffffff;
        return 0xffffffff;
      case 1:
        pvVar3 = (this->msg).current_instr;
        psVar7 = (short *)((int)pvVar3 + 4);
        uVar6 = -(uint)(*psVar7 != 0) & 2;
        sVar2 = *(short *)((int)pvVar3 + 6);
        local_14 = sVar2 + (short)uVar6 + 0x4a0;
        pAVar1 = (this->msg).portraits + *psVar7;
        pAVar1->anmFileIndex = local_14;
        AnmManager::SetAndExecuteScript(pAVar4,pAVar1,pAVar4->scripts[uVar6 + sVar2 + 0x4a0]);
        break;
      case 2:
        pvVar3 = (this->msg).current_instr;
        psVar7 = (short *)((int)pvVar3 + 4);
        AnmManager::SetActiveSprite
                  (g_AnmManager,(this->msg).portraits + *psVar7,
                   (int)*(short *)((int)pvVar3 + 6) + (-(uint)(*psVar7 != 0) & 8) + 0x4a0);
        break;
      case 3:
        pvVar3 = (this->msg).current_instr;
        psVar7 = (short *)((int)pvVar3 + 4);
        if ((*(short *)((int)pvVar3 + 6) == 0) && (-1 < (this->msg).dialogue_lines[1].anmFileIndex))
        {
          AnmManager::FUN_00434b60
                    (g_AnmManager,(this->msg).dialogue_lines + 1,(this->msg).text_colors_A[*psVar7],
                     (this->msg).text_colors_B[*psVar7]," ",unaff_ESI);
        }
        pAVar4 = g_AnmManager;
        sVar2 = *(short *)((int)pvVar3 + 6);
        local_20 = sVar2 + 0x702;
        pAVar1 = (this->msg).dialogue_lines + *(short *)((int)pvVar3 + 6);
        pAVar1->anmFileIndex = local_20;
        AnmManager::SetAndExecuteScript(pAVar4,pAVar1,pAVar4->scripts[sVar2 + 0x702]);
        (this->msg).dialogue_lines[*(short *)((int)pvVar3 + 6)].fontHeight =
             *(uint8_t *)&(this->msg).font_size;
        (this->msg).dialogue_lines[*(short *)((int)pvVar3 + 6)].fontWidth =
             (this->msg).dialogue_lines[*(short *)((int)pvVar3 + 6)].fontHeight;
        AnmManager::FUN_00434b60
                  (g_AnmManager,(this->msg).dialogue_lines + *(short *)((int)pvVar3 + 6),
                   (this->msg).text_colors_A[*psVar7],(this->msg).text_colors_B[*psVar7],
                   (char *)((int)pvVar3 + 8),unaff_ESI);
        (this->msg).frames_elapsed_during_pause = 0;
        break;
      case 4:
        if (((((this->msg).dialogue_skippable == 0) || ((g_CurFrameInput & 0x100) == 0)) &&
            (((g_CurFrameInput & 1) == 0 ||
             (((g_CurFrameInput & 1) == (g_LastFrameInput & 1) ||
              ((this->msg).frames_elapsed_during_pause < 8)))))) &&
           ((this->msg).frames_elapsed_during_pause < *(int *)((int)(this->msg).current_instr + 4)))
        {
          (this->msg).frames_elapsed_during_pause = (this->msg).frames_elapsed_during_pause + 1;
          goto LAB_00418fe0;
        }
        break;
      case 5:
        pvVar3 = (this->msg).current_instr;
        psVar7 = (short *)((int)pvVar3 + 4);
        if (*psVar7 < 2) {
          (this->msg).portraits[*psVar7].pendingInterrupt = (ushort)*(byte *)((int)pvVar3 + 6);
        }
        else {
          (this->msg).portraits[*psVar7].pendingInterrupt = (ushort)*(byte *)((int)pvVar3 + 6);
        }
        break;
      case 6:
        (this->msg).ignore_wait_counter = (this->msg).ignore_wait_counter + 1;
        break;
      case 7:
        (this->vm2).anmFileIndex = 0x701;
        AnmManager::SetAndExecuteScript(pAVar4,&this->vm2,pAVar4->scripts[0x701]);
        (this->vm2).fontWidth = '\x10';
        (this->vm2).fontHeight = '\x10';
        AnmManager::FUN_00434c40(g_AnmManager,&this->vm2,0xe0ffff,0,"♪%s");
        iVar8 = PlayMidiFile(*(int *)((int)(this->msg).current_instr + 4));
        if (iVar8 != 0) {
          Supervisor::PlayAudio
                    (&g_Supervisor,
                     (char *)(g_Stage.stdData +
                             *(int *)((int)(this->msg).current_instr + 4) * 0x80 + 0x290));
        }
        break;
      case 8:
        pvVar3 = (this->msg).current_instr;
        sVar2 = *(short *)((int)pvVar3 + 6);
        local_34 = sVar2 + 0x704;
        pAVar1 = (this->msg).intro_lines + *(short *)((int)pvVar3 + 6);
        pAVar1->anmFileIndex = local_34;
        AnmManager::SetAndExecuteScript(pAVar4,pAVar1,pAVar4->scripts[sVar2 + 0x704]);
        AnmManager::FUN_00434c40
                  (g_AnmManager,(this->msg).intro_lines + *(short *)((int)pvVar3 + 6),
                   (this->msg).text_colors_A[*(short *)((int)pvVar3 + 4)],
                   (this->msg).text_colors_B[*(short *)((int)pvVar3 + 4)],(char *)((int)pvVar3 + 8))
        ;
        (this->msg).frames_elapsed_during_pause = 0;
        break;
      case 9:
        this->finishedStage = 1;
        pAVar4 = g_AnmManager;
        if (g_GameManager.current_stage < 6) {
          (this->vm9).anmFileIndex = 0x619;
          AnmManager::SetAndExecuteScript(pAVar4,&this->vm9,pAVar4->scripts[0x619]);
        }
        else {
          g_GameManager.extra_lives = 0xff;
        }
        break;
      case 10:
        goto LAB_00418fe0;
      case 0xb:
        g_GameManager.gui_score = g_GameManager.score;
        if (g_GameManager.is_in_practice_mode == 0) {
          if ((g_GameManager.current_stage < 5) ||
             ((g_GameManager.difficulty != EASY && (g_GameManager.current_stage == 5)))) {
            g_Supervisor.curState = 3;
          }
          else if (g_GameManager.is_in_replay == 0) {
            if (g_GameManager.difficulty == EXTRA) {
              g_GameManager.is_game_completed = 1;
              g_Supervisor.curState = 7;
            }
            else {
              g_Supervisor.curState = 10;
            }
          }
          else {
            g_Supervisor.curState = 8;
          }
        }
        else {
          g_Supervisor.curState = 7;
        }
        goto LAB_00418fe0;
      case 0xc:
        Supervisor::fadeOutMusic(&g_Supervisor,4.0);
        break;
      case 0xd:
        (this->msg).dialogue_skippable = *(byte *)((int)(this->msg).current_instr + 4);
      }
      (this->msg).current_instr =
           (void *)((int)(this->msg).current_instr +
                   *(byte *)((int)(this->msg).current_instr + 3) + 4);
    }
    ZunTimer::nextTick(&(this->msg).timer);
LAB_00418fe0:
    AnmManager::ExecuteScript(g_AnmManager,(this->msg).portraits);
    AnmManager::ExecuteScript(g_AnmManager,(this->msg).portraits + 1);
    AnmManager::ExecuteScript(g_AnmManager,(this->msg).dialogue_lines);
    AnmManager::ExecuteScript(g_AnmManager,(this->msg).dialogue_lines + 1);
    AnmManager::ExecuteScript(g_AnmManager,(this->msg).intro_lines);
    AnmManager::ExecuteScript(g_AnmManager,(this->msg).intro_lines + 1);
    if ((((this->msg).timer.current < 0x3c) && ((this->msg).dialogue_skippable != 0)) &&
       ((g_CurFrameInput & 0x100) != 0)) {
      (this->msg).timer.current = 0x3c;
      (this->msg).timer.subFrame = 0.0;
      (this->msg).timer.previous = -999;
    }
    uVar5 = 0;
  }
  return uVar5;
}

