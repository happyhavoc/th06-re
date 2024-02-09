
int __thiscall StageMenu::OnUpdateGameMenu(StageMenu *this)

{
  AnmManager *pAVar1;
  short local_6c;
  int local_8;
  
  if (((g_CurFrameInput & MENU) != 0) && ((g_CurFrameInput & MENU) != (g_LastFrameInput & MENU))) {
    this->curState = 3;
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if ((this->vms0[local_8].flags & 1) != 0) {
        this->vms0[local_8].pendingInterrupt = 2;
      }
    }
    this->numFrames = 0;
    (this->vm1).pendingInterrupt = 1;
  }
  if (((g_CurFrameInput & 0x200) != 0) && ((g_CurFrameInput & 0x200) != (g_LastFrameInput & 0x200)))
  {
    this->curState = 6;
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if ((this->vms0[local_8].flags & 1) != 0) {
        this->vms0[local_8].pendingInterrupt = 2;
      }
    }
    this->numFrames = 0;
  }
  switch(this->curState) {
  case 0:
    for (local_8 = 0; pAVar1 = g_AnmManager, local_8 < 6; local_8 = local_8 + 1) {
      local_6c = (short)local_8 + 2;
      this->vms0[local_8].anmFileIndex = local_6c;
      AnmManager::SetAndExecuteScript(pAVar1,this->vms0 + local_8,pAVar1->scripts[local_8 + 2]);
    }
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      this->vms0[local_8].pendingInterrupt = 1;
    }
    this->curState = this->curState + 1;
    this->numFrames = 0;
    pAVar1 = g_AnmManager;
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
  case 1:
    this->vms0[1].color.color = 0xffff8080;
    this->vms0[2].color.color = 0x80808080;
    this->vms0[1].scaleY = 1.7;
    this->vms0[1].scaleX = 1.7;
    this->vms0[2].scaleY = 1.5;
    this->vms0[2].scaleX = 1.5;
    this->vms0[1].pos2.x = -4.0;
    this->vms0[1].pos2.y = -4.0;
    this->vms0[1].pos2.z = 0.0;
    this->vms0[2].pos2.x = 0.0;
    this->vms0[2].pos2.y = 0.0;
    this->vms0[2].pos2.z = 0.0;
    if (3 < this->numFrames) {
      if ((((g_CurFrameInput & UP) != 0) && ((g_CurFrameInput & UP) != (g_LastFrameInput & UP))) ||
         (((g_CurFrameInput & DOWN) != 0 && ((g_CurFrameInput & DOWN) != (g_LastFrameInput & DOWN)))
         )) {
        this->curState = 2;
      }
      if (((g_CurFrameInput & 1) != 0) && ((g_CurFrameInput & 1) != (g_LastFrameInput & 1))) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 2;
        }
        this->curState = 3;
        this->numFrames = 0;
        (this->vm1).pendingInterrupt = 1;
      }
    }
    break;
  case 2:
    this->vms0[1].color.color = 0x80808080;
    this->vms0[2].color.color = 0xffff8080;
    this->vms0[1].scaleY = 1.5;
    this->vms0[1].scaleX = 1.5;
    this->vms0[2].scaleY = 1.7;
    this->vms0[2].scaleX = 1.7;
    this->vms0[1].pos2.x = 0.0;
    this->vms0[1].pos2.y = 0.0;
    this->vms0[1].pos2.z = 0.0;
    this->vms0[2].pos2.x = -4.0;
    this->vms0[2].pos2.y = -4.0;
    this->vms0[2].pos2.z = 0.0;
    if (3 < this->numFrames) {
      if ((((g_CurFrameInput & 0x10) != 0) &&
          ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10))) ||
         (((g_CurFrameInput & 0x20) != 0 && ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20)))
         )) {
        this->curState = 1;
      }
      if (((g_CurFrameInput & 1) != 0) && ((g_CurFrameInput & 1) != (g_LastFrameInput & 1))) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 2;
        }
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 1;
        }
        this->curState = 5;
        this->numFrames = 0;
      }
    }
    break;
  case 3:
                    /* Close menu, wait 19 frames for the animation? */
    if (0x13 < this->numFrames) {
      this->curState = 0;
      g_GameManager.is_in_game_menu = 0;
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        this->vms0[local_8].flags = this->vms0[local_8].flags & 0xfffffffe;
      }
    }
    break;
  case 4:
    this->vms0[4].color.color = 0xffff8080;
    this->vms0[5].color.color = 0x80808080;
    this->vms0[4].scaleY = 1.7;
    this->vms0[4].scaleX = 1.7;
    this->vms0[5].scaleY = 1.5;
    this->vms0[5].scaleX = 1.5;
    this->vms0[4].pos2.x = -4.0;
    this->vms0[4].pos2.y = -4.0;
    this->vms0[4].pos2.z = 0.0;
    this->vms0[5].pos2.x = 0.0;
    this->vms0[5].pos2.y = 0.0;
    this->vms0[5].pos2.z = 0.0;
    if (3 < this->numFrames) {
      if ((((g_CurFrameInput & UP) != 0) && ((g_CurFrameInput & UP) != (g_LastFrameInput & 0x10)))
         || (((g_CurFrameInput & DOWN) != 0 &&
             ((g_CurFrameInput & DOWN) != (g_LastFrameInput & 0x20))))) {
        this->curState = 5;
      }
      if (((g_CurFrameInput & SHOOT) != 0) && ((g_CurFrameInput & SHOOT) != (g_LastFrameInput & 1)))
      {
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 2;
        }
        this->curState = 6;
        this->numFrames = 0;
      }
    }
    break;
  case 5:
    this->vms0[4].color.color = 0x80808080;
    this->vms0[5].color.color = 0xffff8080;
    this->vms0[4].scaleY = 1.5;
    this->vms0[4].scaleX = 1.5;
    this->vms0[5].scaleY = 1.7;
    this->vms0[5].scaleX = 1.7;
    this->vms0[4].pos2.x = 0.0;
    this->vms0[4].pos2.y = 0.0;
    this->vms0[4].pos2.z = 0.0;
    this->vms0[5].pos2.x = -4.0;
    this->vms0[5].pos2.y = -4.0;
    this->vms0[5].pos2.z = 0.0;
    if (3 < this->numFrames) {
      if ((((g_CurFrameInput & 0x10) != 0) &&
          ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10))) ||
         (((g_CurFrameInput & 0x20) != 0 && ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20)))
         )) {
        this->curState = 4;
      }
      if (((g_CurFrameInput & 1) != 0) && ((g_CurFrameInput & 1) != (g_LastFrameInput & 1))) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 1;
        }
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 2;
        }
        this->curState = 2;
        this->numFrames = 0;
      }
    }
    break;
  case 6:
    if (0x13 < this->numFrames) {
      this->curState = 0;
      g_GameManager.is_in_game_menu = 0;
      g_Supervisor.curState = 1;
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        this->vms0[local_8].flags = this->vms0[local_8].flags & 0xfffffffe;
      }
    }
  }
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    AnmManager::ExecuteScript(g_AnmManager,this->vms0 + local_8);
  }
  if (g_Supervisor.lockableBackbuffer != 0) {
    AnmManager::ExecuteScript(g_AnmManager,&this->vm1);
  }
  this->numFrames = this->numFrames + 1;
  return 0;
}

