
int __thiscall StageMenu::OnUpdateRetryMenu(StageMenu *this)

{
  AnmManager *pAVar1;
  short local_48;
  short local_3c;
  int local_8;
  
  if (g_GameManager.field30_0x1823 != 0) {
    g_GameManager.field0_0x0 = g_GameManager.score;
    g_GameManager.is_in_retry_menu = 0;
    g_Supervisor.curState = 7;
    return 1;
  }
  if (g_GameManager.field7_0x1c != 0) {
    g_GameManager.field0_0x0 = g_GameManager.score;
    g_GameManager.is_in_retry_menu = 0;
    g_Supervisor.curState = 8;
    return 1;
  }
  if ((2 < g_GameManager.num_retries) || (3 < (int)g_GameManager.difficulty)) {
    g_GameManager.field0_0x0 = g_GameManager.score;
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
          this->vms0[local_8].anmFileIndex = local_3c;
          AnmManager::SetAndExecuteScript(pAVar1,this->vms0 + local_8,pAVar1->scripts[local_8 + 8]);
        }
        else {
          local_48 = (short)local_8 + 4;
          this->vms0[local_8].anmFileIndex = local_48;
          AnmManager::SetAndExecuteScript(pAVar1,this->vms0 + local_8,pAVar1->scripts[local_8 + 4]);
        }
        this->vms0[local_8].pendingInterrupt = 1;
      }
      if (g_Supervisor.lockableBackbuffer != 0) {
        g_AnmManager->screenshot_textureId = 3;
        pAVar1->screenshot_left = 0x20;
        pAVar1->screenshot_top = 0x10;
        pAVar1->screenshot_width = 0x180;
        pAVar1->screenshot_height = 0x1c0;
        pAVar1 = g_AnmManager;
        (this->vm1).anmFileIndex = 0x718;
        AnmManager::SetAndExecuteScript(pAVar1,&this->vm1,pAVar1->scripts[0x718]);
        (this->vm1).pos.x = 32.0;
        (this->vm1).pos.y = 16.0;
        (this->vm1).pos.z = 0.0;
      }
    }
    if (8 < this->numFrames) break;
    this->curState = this->curState + 2;
    this->numFrames = 0;
  case 1:
    this->vms0[2].color.color = 0xffff8080;
    this->vms0[3].color.color = 0x80808080;
    this->vms0[2].scaleY = 1.7;
    this->vms0[2].scaleX = 1.7;
    this->vms0[3].scaleY = 1.5;
    this->vms0[3].scaleX = 1.5;
    this->vms0[2].pos2.x = -4.0;
    this->vms0[2].pos2.y = -4.0;
    this->vms0[2].pos2.z = 0.0;
    this->vms0[3].pos2.x = 0.0;
    this->vms0[3].pos2.y = 0.0;
    this->vms0[3].pos2.z = 0.0;
    if (3 < this->numFrames) {
      if ((((g_CurFrameInput & UP) != 0) && ((g_CurFrameInput & UP) != (g_LastFrameInput & UP))) ||
         (((g_CurFrameInput & DOWN) != 0 && ((g_CurFrameInput & DOWN) != (g_LastFrameInput & DOWN)))
         )) {
        this->curState = 2;
      }
      if (((g_CurFrameInput & SHOOT) != 0) &&
         ((g_CurFrameInput & SHOOT) != (g_LastFrameInput & SHOOT))) {
        for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 2;
        }
        this->curState = 3;
        (this->vm1).pendingInterrupt = 1;
        this->numFrames = 0;
      }
    }
    break;
  case 2:
    this->vms0[3].color.color = 0xffff8080;
    this->vms0[2].color.color = 0x80808080;
    this->vms0[2].scaleY = 1.5;
    this->vms0[2].scaleX = 1.5;
    this->vms0[3].scaleY = 1.7;
    this->vms0[3].scaleX = 1.7;
    this->vms0[3].pos2.x = -4.0;
    this->vms0[3].pos2.y = -4.0;
    this->vms0[3].pos2.z = 0.0;
    this->vms0[2].pos2.x = 0.0;
    this->vms0[2].pos2.y = 0.0;
    this->vms0[2].pos2.z = 0.0;
    if (0x1d < this->numFrames) {
      if ((((g_CurFrameInput & 0x10) != 0) &&
          ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10))) ||
         (((g_CurFrameInput & 0x20) != 0 && ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20)))
         )) {
        this->curState = 1;
      }
      if (((g_CurFrameInput & 1) != 0) && ((g_CurFrameInput & 1) != (g_LastFrameInput & 1))) {
        for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 2;
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
        *(uint *)&this->vms0[local_8].flags = *(uint *)&this->vms0[local_8].flags & 0xfffffffe;
      }
      g_GameManager.num_retries = g_GameManager.num_retries + 1;
      g_Gui.flags = g_Gui.flags & 0xfffffc00 | 0x2aa;
      g_GameManager.field0_0x0 = (uint)g_GameManager.num_retries;
      g_GameManager.score = (uint)g_GameManager.num_retries;
      g_GameManager.field2_0x8 = 0;
      g_GameManager.graze_in_stage = 0;
      g_GameManager.current_power = 0;
      g_GameManager.point_items_collected_in_stage = 0;
      g_GameManager.lives_remaining = g_Supervisor.lifeCount;
      g_GameManager.bombs_remaining = g_Supervisor.bombCount;
      g_GameManager.field23_0x181c = 0;
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
        *(uint *)&this->vms0[local_8].flags = *(uint *)&this->vms0[local_8].flags & 0xfffffffe;
      }
      g_GameManager.field0_0x0 = g_GameManager.score;
      return 0;
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    AnmManager::ExecuteScript(g_AnmManager,this->vms0 + local_8);
  }
  if (g_Supervisor.lockableBackbuffer != 0) {
    AnmManager::ExecuteScript(g_AnmManager,&this->vm1);
  }
  this->numFrames = this->numFrames + 1;
  return 0;
}

