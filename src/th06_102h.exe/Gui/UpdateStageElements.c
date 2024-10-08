
void __thiscall th06::Gui::UpdateStageElements(Gui *this)

{
  int iVar1;
  uint stage_score;
  int local_8;
  GuiImpl *fVar2;
  AnmManager *this_00;
  
  for (local_8 = 0; this_00 = g_AnmManager, local_8 < 0x1a; local_8 = local_8 + 1) {
    if ((local_8 == 0x13) && ((int)(this->impl->msg).current_msg_idx < 0)) {
      if (this->boss_present == 0) {
        if (this->impl->bossHealthBarState != 0) {
          if (this->impl->bossHealthBarState < 3) {
            fVar2 = this->impl;
            fVar2->vms[0x13].anmFileIndex = 0x614;
            AnmManager::SetAndExecuteScript(this_00,fVar2->vms + 0x13,this_00->scripts[0x614]);
            this->impl->bossHealthBarState = 3;
          }
          if (this->bossUIOpacity == 0) {
            this->bossUIOpacity = 0;
          }
          else {
            this->bossUIOpacity = this->bossUIOpacity - 4;
          }
          iVar1 = AnmManager::ExecuteScript(g_AnmManager,this->impl->vms + 0x13);
          if (iVar1 != 0) {
            this->impl->bossHealthBarState = 0;
            this->boss_health_bar2 = 0.0;
            this->bossUIOpacity = 0;
          }
        }
      }
      else if (this->impl->bossHealthBarState == 0) {
        fVar2 = this->impl;
        fVar2->vms[0x13].anmFileIndex = 0x613;
        AnmManager::SetAndExecuteScript(this_00,fVar2->vms + 0x13,this_00->scripts[0x613]);
        this->impl->bossHealthBarState = 1;
        this->bossUIOpacity = 0;
      }
      else {
        iVar1 = AnmManager::ExecuteScript(g_AnmManager,this->impl->vms + 0x13);
        if (iVar1 != 0) {
          this->impl->bossHealthBarState = 2;
        }
        if (this->bossUIOpacity < 0xfc) {
          this->bossUIOpacity = this->bossUIOpacity + 4;
        }
        else {
          this->bossUIOpacity = 0xff;
        }
      }
      if (1 < this->impl->bossHealthBarState) {
        if (this->boss_health_bar <= this->boss_health_bar2) {
          if ((this->boss_health_bar < this->boss_health_bar2 !=
               (NAN(this->boss_health_bar) || NAN(this->boss_health_bar2))) &&
             (this->boss_health_bar2 = this->boss_health_bar2 - 0.02,
             this->boss_health_bar2 < this->boss_health_bar)) {
            this->boss_health_bar2 = this->boss_health_bar;
          }
        }
        else {
          this->boss_health_bar2 = this->boss_health_bar2 + 0.01;
          if (this->boss_health_bar < this->boss_health_bar2 !=
              (NAN(this->boss_health_bar) || NAN(this->boss_health_bar2))) {
            this->boss_health_bar2 = this->boss_health_bar;
          }
        }
      }
    }
    else {
      AnmManager::ExecuteScript(g_AnmManager,this->impl->vms + local_8);
    }
  }
  AnmManager::ExecuteScript(g_AnmManager,&this->impl->stageNameSprite);
  AnmManager::ExecuteScript(g_AnmManager,&this->impl->songNameSprite);
  AnmManager::ExecuteScript(g_AnmManager,&this->impl->playerSpellcardPortrait);
  AnmManager::ExecuteScript(g_AnmManager,&this->impl->bombSpellcardName);
  AnmManager::ExecuteScript(g_AnmManager,&this->impl->enemySpellcardPortrait);
  AnmManager::ExecuteScript(g_AnmManager,&this->impl->enemySpellcardName);
  if ((-1 < (this->impl->stageFinishedScoreSprite).activeSpriteIndex) &&
     (iVar1 = AnmManager::ExecuteScript(g_AnmManager,&this->impl->stageFinishedScoreSprite),
     iVar1 != 0)) {
    (this->impl->stageFinishedScoreSprite).activeSpriteIndex = -1;
  }
  if ((this->impl->bonusScore).isShown != 0) {
    if ((this->impl->bonusScore).timer.current < 0x1e) {
      (this->impl->bonusScore).pos.x =
           (((float)(this->impl->bonusScore).timer.current + (this->impl->bonusScore).timer.subFrame
            ) * -312.0) / 30.0 + 416.0;
    }
    else {
      (this->impl->bonusScore).pos.x = 104.0;
    }
    if (0xf9 < (this->impl->bonusScore).timer.current) {
      (this->impl->bonusScore).isShown = 0;
    }
    ZunTimer::NextTick(&(this->impl->bonusScore).timer);
  }
  if ((this->impl->fullPowerMode).isShown != 0) {
    if ((this->impl->fullPowerMode).timer.current < 0x1e) {
      (this->impl->fullPowerMode).pos.x =
           (((float)(this->impl->fullPowerMode).timer.current +
            (this->impl->fullPowerMode).timer.subFrame) * -312.0) / 30.0 + 416.0;
    }
    else {
      (this->impl->fullPowerMode).pos.x = 104.0;
    }
    if (0xb3 < (this->impl->fullPowerMode).timer.current) {
      (this->impl->fullPowerMode).isShown = 0;
    }
    ZunTimer::NextTick(&(this->impl->fullPowerMode).timer);
  }
  if ((this->impl->spellCardBonus).isShown != 0) {
    if (0x117 < (this->impl->spellCardBonus).timer.current) {
      (this->impl->spellCardBonus).isShown = 0;
    }
    ZunTimer::NextTick(&(this->impl->spellCardBonus).timer);
  }
  if (this->impl->finishedStage == 1) {
    stage_score = (g_GameManager.current_stage * 1000 + g_GameManager.graze_in_stage * 10 +
                  (uint)g_GameManager.current_power * 100) *
                  (uint)g_GameManager.point_items_collected_in_stage;
    if (5 < g_GameManager.current_stage) {
      stage_score = stage_score + (char)g_GameManager.lives_remaining * 3000000 +
                    (char)g_GameManager.bombs_remaining * 1000000;
    }
    if (g_GameManager.difficulty == EASY) {
      stage_score = (int)stage_score / 2 - ((int)stage_score / 2) % 10;
    }
    else if (g_GameManager.difficulty == HARD) {
      iVar1 = (int)(stage_score * 0xc) / 10;
      stage_score = iVar1 - iVar1 % 10;
    }
    else if (g_GameManager.difficulty == LUNATIC) {
      iVar1 = (int)(stage_score * 0xf) / 10;
      stage_score = iVar1 - iVar1 % 10;
    }
    else if (g_GameManager.difficulty == EXTRA) {
      stage_score = stage_score * 2 - (int)(stage_score * 2) % 10;
    }
    if (g_Supervisor.defaultConfig.lifeCount == 3) {
      iVar1 = (int)(stage_score * 5) / 10;
      stage_score = iVar1 - iVar1 % 10;
    }
    else if (g_Supervisor.defaultConfig.lifeCount == 4) {
      iVar1 = (int)(stage_score << 1) / 10;
      stage_score = iVar1 - iVar1 % 10;
    }
    this->impl->stage_score = stage_score;
    g_GameManager.score = g_GameManager.score + stage_score;
    this->impl->finishedStage = this->impl->finishedStage + 1;
  }
  return;
}

