
int __fastcall
AsciiManagerProbablyStageRelated::FUN_00402870(AsciiManagerProbablyStageRelated *this)

{
  AnmManager *pAVar1;
  short local_48;
  short local_3c;
  int local_8;
  
  if (g_GameManager._6179_1_ != '\0') {
    g_GameManager.field0_0x0 = g_GameManager.score;
    g_GameManager.field22_0x1820 = 0;
    g_Supervisor.curState = 7;
    return 1;
  }
  if (g_GameManager.field6_0x18._4_4_ != 0) {
    g_GameManager.field0_0x0 = g_GameManager.score;
    g_GameManager.field22_0x1820 = 0;
    g_Supervisor.curState = 8;
    return 1;
  }
  if ((2 < g_GameManager.num_retries) || (3 < (int)g_GameManager.difficulty)) {
    g_GameManager.field0_0x0 = g_GameManager.score;
    g_GameManager.field22_0x1820 = 0;
    g_Supervisor.curState = 7;
    return 1;
  }
  switch(this->field0_0x0) {
  case 0:
    if (this->field1_0x4 == 0) {
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
        g_AnmManager->vertexBufferContents[3].position.z = 4.203895e-45;
        pAVar1->vertexBufferContents[3].diffuseColor = 0x20;
        pAVar1->vertexBufferContents[3].textureUV.x = 2.242078e-44;
        pAVar1->vertexBufferContents[3].textureUV.y = 5.380986e-43;
        pAVar1->heightMaybe = 0x1c0;
        pAVar1 = g_AnmManager;
        (this->vm1).anmFileIndex = 0x718;
        AnmManager::SetAndExecuteScript(pAVar1,&this->vm1,pAVar1->scripts[0x718]);
        (this->vm1).pos.x = 32.0;
        (this->vm1).pos.y = 16.0;
        (this->vm1).pos.z = 0.0;
      }
    }
    if (8 < this->field1_0x4) break;
    this->field0_0x0 = this->field0_0x0 + 2;
    this->field1_0x4 = 0;
  case 1:
    this->vms0[2].color = 0xffff8080;
    this->vms0[3].color = 0x80808080;
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
    if (3 < this->field1_0x4) {
      if ((((g_CurFrameInput & 0x10) != 0) &&
          ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10))) ||
         (((g_CurFrameInput & 0x20) != 0 && ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20)))
         )) {
        this->field0_0x0 = 2;
      }
      if (((g_CurFrameInput & 1) != 0) && ((g_CurFrameInput & 1) != (g_LastFrameInput & 1))) {
        for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 2;
        }
        this->field0_0x0 = 3;
        (this->vm1).pendingInterrupt = 1;
        this->field1_0x4 = 0;
      }
    }
    break;
  case 2:
    this->vms0[3].color = 0xffff8080;
    this->vms0[2].color = 0x80808080;
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
    if (0x1d < this->field1_0x4) {
      if ((((g_CurFrameInput & 0x10) != 0) &&
          ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10))) ||
         (((g_CurFrameInput & 0x20) != 0 && ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20)))
         )) {
        this->field0_0x0 = 1;
      }
      if (((g_CurFrameInput & 1) != 0) && ((g_CurFrameInput & 1) != (g_LastFrameInput & 1))) {
        for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 2;
        }
        this->field0_0x0 = 4;
        this->field1_0x4 = 0;
      }
    }
    break;
  case 3:
    if (0x1d < this->field1_0x4) {
      this->field0_0x0 = 0;
      this->field1_0x4 = 0;
      g_GameManager.field22_0x1820 = 0;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        this->vms0[local_8].flags = this->vms0[local_8].flags & 0xfffffffe;
      }
      g_GameManager.num_retries = g_GameManager.num_retries + 1;
      DAT_0069bc30 = DAT_0069bc30 & 0xfffffc00 | 0x2aa;
      g_GameManager.field0_0x0 = (uint)g_GameManager.num_retries;
      g_GameManager.score = (uint)g_GameManager.num_retries;
      g_GameManager.field2_0x8 = 0;
      g_GameManager.graze_in_stage = 0;
      g_GameManager.current_power = 0;
      g_GameManager.point_items_collected_in_stage = 0;
      g_GameManager.lives_remaining = g_Supervisor.lifeCount;
      g_GameManager.bombs_remaining = g_Supervisor.bombCount;
      g_GameManager._6172_1_ = 0;
      return 0;
    }
    break;
  case 4:
    if (0x13 < this->field1_0x4) {
      this->field0_0x0 = 0;
      this->field1_0x4 = 0;
      g_GameManager.field22_0x1820 = 0;
      g_Supervisor.curState = 7;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        this->vms0[local_8].flags = this->vms0[local_8].flags & 0xfffffffe;
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
  this->field1_0x4 = this->field1_0x4 + 1;
  return 0;
}

