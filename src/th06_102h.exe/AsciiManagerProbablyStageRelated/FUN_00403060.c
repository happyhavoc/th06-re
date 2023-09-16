
void __fastcall
AsciiManagerProbablyStageRelated::FUN_00403060(AsciiManagerProbablyStageRelated *this)

{
  int iVar1;
  AnmVm *pAVar2;
  AnmVm *pAVar3;
  int local_8;
  
  if (DAT_0069d4c0 != '\0') {
    g_GameContext.viewport.X = __ftol2((double)VIEWPORT_X);
    g_GameContext.viewport.Y = __ftol2((double)VIEWPORT_Y);
    g_GameContext.viewport.Width = __ftol2((double)VIEWPORT_WIDTH);
    g_GameContext.viewport.Height = __ftol2((double)VIEWPORT_HEIGHT);
    (*(g_GameContext.d3dDevice)->lpVtbl->SetViewport)
              (g_GameContext.d3dDevice,(D3DVIEWPORT8 *)0x6c6de0);
    if ((g_GameContext.lockableBackbuffer != 0) &&
       ((this->field0_0x0 != 0 || (2 < this->field1_0x4)))) {
      AnmManager::FUN_00432ad0(g_AnmManager,&this->vm1);
    }
    if ((this->field0_0x0 == 1) || (this->field0_0x0 == 2)) {
      pAVar2 = this->vms0 + 1;
      pAVar3 = this->vms0 + 4;
      for (iVar1 = 0x44; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pAVar3->rotation).x = (pAVar2->rotation).x;
        pAVar2 = (AnmVm *)&(pAVar2->rotation).y;
        pAVar3 = (AnmVm *)&(pAVar3->rotation).y;
      }
      this->vms0[4].pos.x = this->vms0[4].scaleY * 8.0 + this->vms0[4].pos.x;
      this->vms0[4].sprite =
           (AnmLoadedSprite *)((int)g_AnmManager + (0x1e - (uint)DAT_0069d4b8) * 0x38);
      AnmManager::FUN_00432ad0(g_AnmManager,this->vms0 + 4);
    }
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      if ((this->vms0[local_8].flags & 1) != 0) {
        AnmManager::FUN_00432ad0(g_AnmManager,this->vms0 + local_8);
      }
    }
  }
  return;
}

