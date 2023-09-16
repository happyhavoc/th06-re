
int __fastcall
AsciiManagerProbablyStageRelated::FUN_00401b80(AsciiManagerProbablyStageRelated *this)

{
  AnmManager *pAVar1;
  short local_6c;
  int local_8;
  
  if (((DAT_0069d904 & MENU) != 0) && ((DAT_0069d904 & 8) != (DAT_0069d908 & 8))) {
    this->field0_0x0 = 3;
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if ((this->vms0[local_8].flags & 1) != 0) {
        this->vms0[local_8].pendingInterrupt = 2;
      }
    }
    this->field1_0x4 = 0;
    (this->vm1).pendingInterrupt = 1;
  }
  if (((DAT_0069d904 & 0x200) != 0) && ((DAT_0069d904 & 0x200) != (DAT_0069d908 & 0x200))) {
    this->field0_0x0 = 6;
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if ((this->vms0[local_8].flags & 1) != 0) {
        this->vms0[local_8].pendingInterrupt = 2;
      }
    }
    this->field1_0x4 = 0;
  }
  switch(this->field0_0x0) {
  case 0:
    for (local_8 = 0; pAVar1 = g_AnmManager, local_8 < 6; local_8 = local_8 + 1) {
      local_6c = (short)local_8 + 2;
      this->vms0[local_8].anmFileIndex = local_6c;
      AnmManager::SetBeginingOfScript(pAVar1,this->vms0 + local_8,pAVar1->scripts[local_8 + 2]);
    }
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      this->vms0[local_8].pendingInterrupt = 1;
    }
    this->field0_0x0 = this->field0_0x0 + 1;
    this->field1_0x4 = 0;
    pAVar1 = g_AnmManager;
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
  case 1:
    this->vms0[1].color = 0xffff8080;
    this->vms0[2].color = 0x80808080;
    this->vms0[1].scaleX = 1.7;
    this->vms0[1].scaleY = 1.7;
    this->vms0[2].scaleX = 1.5;
    this->vms0[2].scaleY = 1.5;
    this->vms0[1].pos2.x = -4.0;
    this->vms0[1].pos2.y = -4.0;
    this->vms0[1].pos2.z = 0.0;
    this->vms0[2].pos2.x = 0.0;
    this->vms0[2].pos2.y = 0.0;
    this->vms0[2].pos2.z = 0.0;
    if (3 < this->field1_0x4) {
      if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
         (((DAT_0069d904 & 0x20) != 0 && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))))) {
        this->field0_0x0 = 2;
      }
      if (((DAT_0069d904 & 1) != 0) && ((DAT_0069d904 & 1) != (DAT_0069d908 & 1))) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 2;
        }
        this->field0_0x0 = 3;
        this->field1_0x4 = 0;
        (this->vm1).pendingInterrupt = 1;
      }
    }
    break;
  case 2:
    this->vms0[1].color = 0x80808080;
    this->vms0[2].color = 0xffff8080;
    this->vms0[1].scaleX = 1.5;
    this->vms0[1].scaleY = 1.5;
    this->vms0[2].scaleX = 1.7;
    this->vms0[2].scaleY = 1.7;
    this->vms0[1].pos2.x = 0.0;
    this->vms0[1].pos2.y = 0.0;
    this->vms0[1].pos2.z = 0.0;
    this->vms0[2].pos2.x = -4.0;
    this->vms0[2].pos2.y = -4.0;
    this->vms0[2].pos2.z = 0.0;
    if (3 < this->field1_0x4) {
      if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
         (((DAT_0069d904 & 0x20) != 0 && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))))) {
        this->field0_0x0 = 1;
      }
      if (((DAT_0069d904 & 1) != 0) && ((DAT_0069d904 & 1) != (DAT_0069d908 & 1))) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 2;
        }
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 1;
        }
        this->field0_0x0 = 5;
        this->field1_0x4 = 0;
      }
    }
    break;
  case 3:
    if (0x13 < this->field1_0x4) {
      this->field0_0x0 = 0;
      DAT_0069d4bf = 0;
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        this->vms0[local_8].flags = this->vms0[local_8].flags & 0xfffffffe;
      }
    }
    break;
  case 4:
    this->vms0[4].color = 0xffff8080;
    this->vms0[5].color = 0x80808080;
    this->vms0[4].scaleX = 1.7;
    this->vms0[4].scaleY = 1.7;
    this->vms0[5].scaleX = 1.5;
    this->vms0[5].scaleY = 1.5;
    this->vms0[4].pos2.x = -4.0;
    this->vms0[4].pos2.y = -4.0;
    this->vms0[4].pos2.z = 0.0;
    this->vms0[5].pos2.x = 0.0;
    this->vms0[5].pos2.y = 0.0;
    this->vms0[5].pos2.z = 0.0;
    if (3 < this->field1_0x4) {
      if ((((DAT_0069d904 & UP) != 0) && ((DAT_0069d904 & UP) != (DAT_0069d908 & 0x10))) ||
         (((DAT_0069d904 & DOWN) != 0 && ((DAT_0069d904 & DOWN) != (DAT_0069d908 & 0x20))))) {
        this->field0_0x0 = 5;
      }
      if (((DAT_0069d904 & SHOOT) != 0) && ((DAT_0069d904 & SHOOT) != (DAT_0069d908 & 1))) {
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 2;
        }
        this->field0_0x0 = 6;
        this->field1_0x4 = 0;
      }
    }
    break;
  case 5:
    this->vms0[4].color = 0x80808080;
    this->vms0[5].color = 0xffff8080;
    this->vms0[4].scaleX = 1.5;
    this->vms0[4].scaleY = 1.5;
    this->vms0[5].scaleX = 1.7;
    this->vms0[5].scaleY = 1.7;
    this->vms0[4].pos2.x = 0.0;
    this->vms0[4].pos2.y = 0.0;
    this->vms0[4].pos2.z = 0.0;
    this->vms0[5].pos2.x = -4.0;
    this->vms0[5].pos2.y = -4.0;
    this->vms0[5].pos2.z = 0.0;
    if (3 < this->field1_0x4) {
      if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
         (((DAT_0069d904 & 0x20) != 0 && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))))) {
        this->field0_0x0 = 4;
      }
      if (((DAT_0069d904 & 1) != 0) && ((DAT_0069d904 & 1) != (DAT_0069d908 & 1))) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 1;
        }
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          this->vms0[local_8].pendingInterrupt = 2;
        }
        this->field0_0x0 = 2;
        this->field1_0x4 = 0;
      }
    }
    break;
  case 6:
    if (0x13 < this->field1_0x4) {
      this->field0_0x0 = 0;
      DAT_0069d4bf = 0;
      g_GameContext.unkInput2 = 1;
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        this->vms0[local_8].flags = this->vms0[local_8].flags & 0xfffffffe;
      }
    }
  }
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    AnmManager::FUN_00433960(g_AnmManager,this->vms0 + local_8);
  }
  if (g_GameContext.lockableBackbuffer != 0) {
    AnmManager::FUN_00433960(g_AnmManager,&this->vm1);
  }
  this->field1_0x4 = this->field1_0x4 + 1;
  return 0;
}

