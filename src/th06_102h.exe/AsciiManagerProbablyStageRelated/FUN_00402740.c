
void __fastcall
AsciiManagerProbablyStageRelated::FUN_00402740(AsciiManagerProbablyStageRelated *this)

{
  int iVar1;
  AnmVm *pAVar2;
  AnmVm *pAVar3;
  AnmVm local_11c;
  int local_8;
  
  if (DAT_0069d4bf != '\0') {
    g_GameContext.viewport.X = __ftol2((double)VIEWPORT_X);
    g_GameContext.viewport.Y = __ftol2((double)VIEWPORT_Y);
    g_GameContext.viewport.Width = __ftol2((double)VIEWPORT_WIDTH);
    g_GameContext.viewport.Height = __ftol2((double)VIEWPORT_HEIGHT);
    (*(g_GameContext.d3dDevice)->lpVtbl->SetViewport)
              (g_GameContext.d3dDevice,&g_GameContext.viewport);
    if ((DAT_006c7115 != '\0') && (this->field0_0x0 != 0)) {
      pAVar2 = &this->vm1;
      pAVar3 = &local_11c;
      for (iVar1 = 0x44; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pAVar3->rotation).x = (pAVar2->rotation).x;
        pAVar2 = (AnmVm *)&(pAVar2->rotation).y;
        pAVar3 = (AnmVm *)&(pAVar3->rotation).y;
      }
      local_11c.flags = local_11c.flags | 0x1000;
      AnmManager::FUN_00432ad0(g_AnmManager,&local_11c);
    }
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if ((this->vms0[local_8].flags & 1) != 0) {
        AnmManager::FUN_00432ad0(g_AnmManager,this->vms0 + local_8);
      }
    }
  }
  return;
}

