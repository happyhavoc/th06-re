
int __thiscall th06::StageMenu::OnUpdateRetryMenu(StageMenu *this)

{
  AnmManager *pAVar1;
  short local_48;
  short local_3c;
  int local_8;
  
  if (g_GameManager.is_in_practice_mode != 0) {
    g_GameManager.gui_score = g_GameManager.score;
    g_GameManager.is_in_retry_menu = 0;
    g_Supervisor.curState = 7;
    return 1;
  }
  if (g_GameManager.is_in_replay != 0) {
    g_GameManager.gui_score = g_GameManager.score;
    g_GameManager.is_in_retry_menu = 0;
    g_Supervisor.curState = 8;
    return 1;
  }
  if ((2 < g_GameManager.num_retries) || (3 < (int)g_GameManager.difficulty)) {
    g_GameManager.gui_score = g_GameManager.score;
    g_GameManager.is_in_retry_menu = 0;
    g_Supervisor.curState = 7;
    return 1;
  }
  switch(this->curState) {
  case 0:
    if (this->numFrames == 0) {
      for (local_8 = 0; pAVar1 = g_AnmManager, local_8 < 4; local_8 = local_8 + 1) {
        if (local_8 < 2) {
          local_3c = (short)local_8 + 8;
          this->menuSprites[local_8].anmFileIndex = local_3c;
          AnmManager::SetAndExecuteScript
                    (pAVar1,this->menuSprites + local_8,pAVar1->scripts[local_8 + 8]);
        }
        else {
          local_48 = (short)local_8 + 4;
          this->menuSprites[local_8].anmFileIndex = local_48;
          AnmManager::SetAndExecuteScript
                    (pAVar1,this->menuSprites + local_8,pAVar1->scripts[local_8 + 4]);
        }
        this->menuSprites[local_8].pendingInterrupt = 1;
      }
      if (g_Supervisor.lockableBackbuffer != 0) {
        g_AnmManager->screenshot_textureId = 3;
        pAVar1->screenshot_left = 0x20;
        pAVar1->screenshot_top = 0x10;
        pAVar1->screenshot_width = 0x180;
        pAVar1->screenshot_height = 0x1c0;
        pAVar1 = g_AnmManager;
        (this->menuBackground).anmFileIndex = 0x718;
        AnmManager::SetAndExecuteScript(pAVar1,&this->menuBackground,pAVar1->scripts[0x718]);
        (this->menuBackground).pos.x = 32.0;
        (this->menuBackground).pos.y = 16.0;
        (this->menuBackground).pos.z = 0.0;
      }
    }
    if (8 < this->numFrames) break;
    this->curState = this->curState + 2;
    this->numFrames = 0;
  case 1:
    this->menuSprites[2].color.color = 0xffff8080;
    this->menuSprites[3].color.color = 0x80808080;
    this->menuSprites[2].scaleY = 1.7;
    this->menuSprites[2].scaleX = 1.7;
    this->menuSprites[3].scaleY = 1.5;
    this->menuSprites[3].scaleX = 1.5;
    this->menuSprites[2].offset.x = -4.0;
    this->menuSprites[2].offset.y = -4.0;
    this->menuSprites[2].offset.z = 0.0;
    this->menuSprites[3].offset.x = 0.0;
    this->menuSprites[3].offset.y = 0.0;
    this->menuSprites[3].offset.z = 0.0;
    if (3 < this->numFrames) {
      if ((((g_CurFrameInput & KEY_UP) != 0) &&
          ((g_CurFrameInput & KEY_UP) != (g_LastFrameInput & KEY_UP))) ||
         (((g_CurFrameInput & KEY_DOWN) != 0 &&
          ((g_CurFrameInput & KEY_DOWN) != (g_LastFrameInput & KEY_DOWN))))) {
        this->curState = 2;
      }
      if (((g_CurFrameInput & KEY_SHOOT) != 0) &&
         ((g_CurFrameInput & KEY_SHOOT) != (g_LastFrameInput & KEY_SHOOT))) {
        for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
          this->menuSprites[local_8].pendingInterrupt = 2;
        }
        this->curState = 3;
        (this->menuBackground).pendingInterrupt = 1;
        this->numFrames = 0;
      }
    }
    break;
  case 2:
    this->menuSprites[3].color.color = 0xffff8080;
    this->menuSprites[2].color.color = 0x80808080;
    this->menuSprites[2].scaleY = 1.5;
    this->menuSprites[2].scaleX = 1.5;
    this->menuSprites[3].scaleY = 1.7;
    this->menuSprites[3].scaleX = 1.7;
    this->menuSprites[3].offset.x = -4.0;
    this->menuSprites[3].offset.y = -4.0;
    this->menuSprites[3].offset.z = 0.0;
    this->menuSprites[2].offset.x = 0.0;
    this->menuSprites[2].offset.y = 0.0;
    this->menuSprites[2].offset.z = 0.0;
    if (0x1d < this->numFrames) {
      if ((((g_CurFrameInput & 0x10) != 0) &&
          ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10))) ||
         (((g_CurFrameInput & 0x20) != 0 && ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20)))
         )) {
        this->curState = 1;
      }
      if (((g_CurFrameInput & 1) != 0) && ((g_CurFrameInput & 1) != (g_LastFrameInput & 1))) {
        for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
          this->menuSprites[local_8].pendingInterrupt = 2;
        }
        this->curState = 4;
        this->numFrames = 0;
      }
    }
    break;
  case 3:
    if (0x1d < this->numFrames) {
      this->curState = 0;
      this->numFrames = 0;
      g_GameManager.is_in_retry_menu = 0;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        this->menuSprites[local_8].flags = this->menuSprites[local_8].flags & ~AnmVmFlags_1;
      }
      g_GameManager.num_retries = g_GameManager.num_retries + 1;
      g_Gui.flags = g_Gui.flags & 0xfffffc00 | 0x2aa;
      g_GameManager.gui_score = (uint)g_GameManager.num_retries;
      g_GameManager.score = (uint)g_GameManager.num_retries;
      g_GameManager.score_increment = 0;
      g_GameManager.graze_in_stage = 0;
      g_GameManager.current_power = 0;
      g_GameManager.point_items_collected_in_stage = 0;
      g_GameManager.lives_remaining = g_Supervisor.defaultConfig.lifeCount;
      g_GameManager.bombs_remaining = g_Supervisor.defaultConfig.bombCount;
      g_GameManager.extra_lives = 0;
      return 0;
    }
    break;
  case 4:
    if (0x13 < this->numFrames) {
      this->curState = 0;
      this->numFrames = 0;
      g_GameManager.is_in_retry_menu = 0;
      g_Supervisor.curState = 7;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        this->menuSprites[local_8].flags = this->menuSprites[local_8].flags & ~AnmVmFlags_1;
      }
      g_GameManager.gui_score = g_GameManager.score;
      return 0;
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    AnmManager::ExecuteScript(g_AnmManager,this->menuSprites + local_8);
  }
  if (g_Supervisor.lockableBackbuffer != 0) {
    AnmManager::ExecuteScript(g_AnmManager,&this->menuBackground);
  }
  this->numFrames = this->numFrames + 1;
  return 0;
}

