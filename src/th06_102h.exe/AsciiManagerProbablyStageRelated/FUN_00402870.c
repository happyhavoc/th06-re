
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall
AsciiManagerProbablyStageRelated::FUN_00402870(AsciiManagerProbablyStageRelated *this)

{
  AnmManager *pAVar1;
  short local_48;
  short local_3c;
  int local_8;
  
  if (DAT_0069d4c3 != '\0') {
    DAT_0069bca0 = DAT_0069bca4;
    DAT_0069d4c0 = 0;
    g_GameContext.unkInput2 = 7;
    return 1;
  }
  if (DAT_0069bcbc != 0) {
    DAT_0069bca0 = DAT_0069bca4;
    DAT_0069d4c0 = 0;
    g_GameContext.unkInput2 = 8;
    return 1;
  }
  if ((2 < DAT_0069d4b8) || (3 < DAT_0069bcb0)) {
    DAT_0069bca0 = DAT_0069bca4;
    DAT_0069d4c0 = 0;
    g_GameContext.unkInput2 = 7;
    return 1;
  }
  switch(this->field0_0x0) {
  case 0:
    if (this->field1_0x4 == 0) {
      for (local_8 = 0; pAVar1 = g_AnmManager, local_8 < 4; local_8 = local_8 + 1) {
        if (local_8 < 2) {
          local_3c = (short)local_8 + 8;
          this->vms0[local_8].anmFileIndex = local_3c;
          AnmManager::SetBeginingOfScript(pAVar1,this->vms0 + local_8,pAVar1->scripts[local_8 + 8]);
        }
        else {
          local_48 = (short)local_8 + 4;
          this->vms0[local_8].anmFileIndex = local_48;
          AnmManager::SetBeginingOfScript(pAVar1,this->vms0 + local_8,pAVar1->scripts[local_8 + 4]);
        }
        this->vms0[local_8].pendingInterrupt = 1;
      }
      if (g_GameContext.lockableBackbuffer != 0) {
        g_AnmManager->vertexBufferContents[3].position.z = 4.203895e-45;
        pAVar1->vertexBufferContents[3].diffuseColor = 0x20;
        pAVar1->vertexBufferContents[3].textureUV.x = 2.242078e-44;
        pAVar1->vertexBufferContents[3].textureUV.y = 5.380986e-43;
        pAVar1->heightMaybe = 0x1c0;
        pAVar1 = g_AnmManager;
        (this->vm1).anmFileIndex = 0x718;
        AnmManager::SetBeginingOfScript(pAVar1,&this->vm1,pAVar1->scripts[0x718]);
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
    this->vms0[2].scaleX = 1.7;
    this->vms0[2].scaleY = 1.7;
    this->vms0[3].scaleX = 1.5;
    this->vms0[3].scaleY = 1.5;
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
    this->vms0[2].scaleX = 1.5;
    this->vms0[2].scaleY = 1.5;
    this->vms0[3].scaleX = 1.7;
    this->vms0[3].scaleY = 1.7;
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
      DAT_0069d4c0 = 0;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        this->vms0[local_8].flags = this->vms0[local_8].flags & 0xfffffffe;
      }
      DAT_0069d4b8 = DAT_0069d4b8 + 1;
      DAT_0069bc30 = DAT_0069bc30 & 0xfffffc00 | 0x2aa;
      DAT_0069bca0 = (uint)DAT_0069d4b8;
      DAT_0069bca4 = (uint)DAT_0069d4b8;
      _DAT_0069bca8 = 0;
      DAT_0069bcb4 = 0;
      _DAT_0069d4b0 = 0;
      DAT_0069d4b4 = 0;
      DAT_0069d4ba = g_GameContext.lifeCount;
      DAT_0069d4bb = g_GameContext.bombCount;
      DAT_0069d4bc = 0;
      return 0;
    }
    break;
  case 4:
    if (0x13 < this->field1_0x4) {
      this->field0_0x0 = 0;
      this->field1_0x4 = 0;
      DAT_0069d4c0 = 0;
      g_GameContext.unkInput2 = 7;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        this->vms0[local_8].flags = this->vms0[local_8].flags & 0xfffffffe;
      }
      DAT_0069bca0 = DAT_0069bca4;
      return 0;
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    AnmManager::FUN_00433960(g_AnmManager,this->vms0 + local_8);
  }
  if (g_GameContext.lockableBackbuffer != 0) {
    AnmManager::FUN_00433960(g_AnmManager,&this->vm1);
  }
  this->field1_0x4 = this->field1_0x4 + 1;
  return 0;
}

