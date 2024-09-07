
ZunResult __thiscall th06::Gui::ActualAddedCallback(Gui *this)

{
  ZunResult loadAnm;
  AnmVm *vm;
  int iVar1;
  short local_14;
  int local_8;
  AnmManager *anm_mgr;
  GuiImpl *gui_impl;
  
  anm_mgr = g_AnmManager;
  if (g_Supervisor.curState == SUPERVISOR_STATE_GAMEMANAGER_REINIT) {
    gui_impl = this->impl;
    (gui_impl->stageFinishedScoreSprite).anmFileIndex = 0x619;
    AnmManager::SetAndExecuteScript
              ((AnmManager *)anm_mgr,&gui_impl->stageFinishedScoreSprite,anm_mgr->scripts[0x619]);
    (this->impl->stageFinishedScoreSprite).pendingInterrupt = 1;
  }
  else {
    gui_impl = this->impl;
    for (iVar1 = 0xb11; iVar1 != 0; iVar1 = iVar1 + -1) {
      gui_impl->vms[0].rotation.x = 0.0;
      gui_impl = (GuiImpl *)&gui_impl->vms[0].rotation.y;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0xd,"data/front.anm",0x600);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0xe,"data/loading.anm",0x619);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    (this->impl->stageFinishedScoreSprite).activeSpriteIndex = -1;
    if (g_GameManager.character == 0) {
      loadAnm = AnmManager::LoadAnm(g_AnmManager,0xf,"data/face00a.anm",0x4a0);
      if (loadAnm != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
      loadAnm = AnmManager::LoadAnm(g_AnmManager,0x10,"data/face00b.anm",0x4a2);
      if (loadAnm != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
      loadAnm = AnmManager::LoadAnm(g_AnmManager,0x11,"data/face00c.anm",0x4a4);
      if (loadAnm != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
    }
    else if (g_GameManager.character == 1) {
      loadAnm = AnmManager::LoadAnm(g_AnmManager,0xf,"data/face01a.anm",0x4a0);
      if (loadAnm != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
      loadAnm = AnmManager::LoadAnm(g_AnmManager,0x10,"data/face01b.anm",0x4a2);
      if (loadAnm != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
      loadAnm = AnmManager::LoadAnm(g_AnmManager,0x11,"data/face01c.anm",0x4a4);
      if (loadAnm != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
    }
  }
                    /* Clearly you know that switch cases exist zun.. */
  if (g_GameManager.current_stage == 1) {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face03a.anm",0x4a8);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face03b.anm",0x4aa);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = LoadMsg(this,"data/msg1.dat");
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  else if (g_GameManager.current_stage == 2) {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face05a.anm",0x4a8);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = LoadMsg(this,"data/msg2.dat");
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  else if (g_GameManager.current_stage == 3) {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face06a.anm",0x4a8);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face06b.anm",0x4aa);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = LoadMsg(this,"data/msg3.dat");
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  else if (g_GameManager.current_stage == 4) {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face08a.anm",0x4a8);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face08b.anm",0x4aa);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = LoadMsg(this,"data/msg4.dat");
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  else if (g_GameManager.current_stage == 5) {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face09a.anm",0x4a8);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face09b.anm",0x4aa);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = LoadMsg(this,"data/msg5.dat");
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  else if (g_GameManager.current_stage == 6) {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face09b.anm",0x4a8);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face10a.anm",0x4aa);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x14,"data/face10b.anm",0x4ab);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = LoadMsg(this,"data/msg6.dat");
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  else {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face08a.anm",0x4a8);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face12a.anm",0x4aa);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x14,"data/face12b.anm",0x4ab);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = LoadMsg(this,"data/msg7.dat");
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  if (g_Supervisor.curState != 3) {
    for (local_8 = 0; anm_mgr = g_AnmManager, local_8 < 0x1a; local_8 = local_8 + 1) {
      local_14 = (short)local_8 + 0x600;
      vm = this->impl->vms + local_8;
      vm->anmFileIndex = local_14;
      AnmManager::SetAndExecuteScript((AnmManager *)anm_mgr,vm,anm_mgr->scripts[local_8 + 0x600]);
    }
  }
  this->boss_present = 0;
  this->impl->bossHealthBarState = 0;
  this->boss_health_bar = 0.0;
  this->boss_health_bar2 = 0.0;
  anm_mgr = g_AnmManager;
  gui_impl = this->impl;
  (gui_impl->playerSpellcardPortrait).anmFileIndex = 0x4a1;
  AnmManager::SetAndExecuteScript
            ((AnmManager *)anm_mgr,&gui_impl->playerSpellcardPortrait,anm_mgr->scripts[0x4a1]);
  anm_mgr = g_AnmManager;
  gui_impl = this->impl;
  (gui_impl->enemySpellcardPortrait).anmFileIndex = 0x4a3;
  AnmManager::SetAndExecuteScript
            ((AnmManager *)anm_mgr,&gui_impl->enemySpellcardPortrait,anm_mgr->scripts[0x4a3]);
  anm_mgr = g_AnmManager;
  gui_impl = this->impl;
  (gui_impl->bombSpellcardName).anmFileIndex = 0x706;
  AnmManager::SetAndExecuteScript
            ((AnmManager *)anm_mgr,&gui_impl->bombSpellcardName,anm_mgr->scripts[0x706]);
  anm_mgr = g_AnmManager;
  gui_impl = this->impl;
  (gui_impl->enemySpellcardName).anmFileIndex = 0x707;
  AnmManager::SetAndExecuteScript
            ((AnmManager *)anm_mgr,&gui_impl->enemySpellcardName,anm_mgr->scripts[0x707]);
  anm_mgr = g_AnmManager;
  gui_impl = this->impl;
  (gui_impl->bombSpellcardBackground).anmFileIndex = 0x617;
  AnmManager::SetAndExecuteScript
            ((AnmManager *)anm_mgr,&gui_impl->bombSpellcardBackground,anm_mgr->scripts[0x617]);
  anm_mgr = g_AnmManager;
  gui_impl = this->impl;
  (gui_impl->enemySpellcardBackground).anmFileIndex = 0x618;
  AnmManager::SetAndExecuteScript
            ((AnmManager *)anm_mgr,&gui_impl->enemySpellcardBackground,anm_mgr->scripts[0x618]);
  (this->impl->playerSpellcardPortrait).currentInstruction = (AnmRawInstr *)0x0;
  (this->impl->bombSpellcardName).currentInstruction = (AnmRawInstr *)0x0;
  (this->impl->enemySpellcardPortrait).currentInstruction = (AnmRawInstr *)0x0;
  (this->impl->enemySpellcardName).currentInstruction = (AnmRawInstr *)0x0;
  (this->impl->playerSpellcardPortrait).flags =
       (this->impl->playerSpellcardPortrait).flags & ~AnmVmFlags_1;
  (this->impl->bombSpellcardName).flags = (this->impl->bombSpellcardName).flags & ~AnmVmFlags_1;
  (this->impl->enemySpellcardPortrait).flags =
       (this->impl->enemySpellcardPortrait).flags & ~AnmVmFlags_1;
  (this->impl->enemySpellcardName).flags = (this->impl->enemySpellcardName).flags & ~AnmVmFlags_1;
  (this->impl->bombSpellcardName).fontWidth = '\x0f';
  (this->impl->bombSpellcardName).fontHeight = '\x0f';
  (this->impl->enemySpellcardName).fontWidth = '\x0f';
  (this->impl->enemySpellcardName).fontHeight = '\x0f';
  anm_mgr = g_AnmManager;
  gui_impl = this->impl;
  (gui_impl->stageNameSprite).anmFileIndex = 0x700;
  AnmManager::SetAndExecuteScript
            ((AnmManager *)anm_mgr,&gui_impl->stageNameSprite,anm_mgr->scripts[0x700]);
  anm_mgr = g_AnmManager;
  gui_impl = this->impl;
  (gui_impl->songNameSprite).anmFileIndex = 0x701;
  AnmManager::SetAndExecuteScript
            ((AnmManager *)anm_mgr,&gui_impl->songNameSprite,anm_mgr->scripts[0x701]);
  AnmManager::DrawStringFormat2
            (g_AnmManager,&this->impl->stageNameSprite,(ZunColor)0xe0ffff,(ZunColor)0x0,
             (g_Stage.stdData)->stageName);
  (this->impl->songNameSprite).fontWidth = '\x10';
  (this->impl->songNameSprite).fontHeight = '\x10';
  AnmManager::DrawStringFormat
            (g_AnmManager,&this->impl->songNameSprite,(ZunColor)0xe0ffff,(ZunColor)0x0,"♪%s",
             (g_Stage.stdData)->song1Name);
  (this->impl->msg).current_msg_idx = 0xffffffff;
  this->impl->finishedStage = 0;
  (this->impl->bonusScore).isShown = 0;
  (this->impl->fullPowerMode).isShown = 0;
  (this->impl->spellCardBonus).isShown = 0;
  this->flags = this->flags & 0xfffffffc | 2;
  this->flags = this->flags & 0xfffffff3 | 8;
  this->flags = this->flags & 0xffffff3f | 0x80;
  this->flags = this->flags & 0xfffffcff | 0x200;
  this->flags = this->flags & 0xffffffcf | 0x20;
  return ZUN_SUCCESS;
}

