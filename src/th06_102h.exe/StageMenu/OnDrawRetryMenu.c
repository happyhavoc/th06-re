
void __thiscall StageMenu::OnDrawRetryMenu(StageMenu *this)

{
  int iVar1;
  AnmVm *pAVar2;
  AnmVm *pAVar3;
  int local_8;
  
  if (g_GameManager.is_in_retry_menu != 0) {
    g_Supervisor.viewport.X = __ftol2((double)g_GameManager.arcade_region_top_left_pos.x);
    g_Supervisor.viewport.Y = __ftol2((double)g_GameManager.arcade_region_top_left_pos.y);
    g_Supervisor.viewport.Width = __ftol2((double)g_GameManager.arcade_region_size.x);
    g_Supervisor.viewport.Height = __ftol2((double)g_GameManager.arcade_region_size.y);
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)
              (g_Supervisor.d3dDevice,(D3DVIEWPORT8 *)0x6c6de0);
    if ((g_Supervisor.lockableBackbuffer != 0) && ((this->curState != 0 || (2 < this->numFrames))))
    {
      AnmManager::FUN_00432ad0(g_AnmManager,&this->vm1);
    }
    if ((this->curState == 1) || (this->curState == 2)) {
      pAVar2 = this->vms0 + 1;
      pAVar3 = this->vms0 + 4;
      for (iVar1 = 0x44; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pAVar3->rotation).x = (pAVar2->rotation).x;
        pAVar2 = (AnmVm *)&(pAVar2->rotation).y;
        pAVar3 = (AnmVm *)&(pAVar3->rotation).y;
      }
      this->vms0[4].pos.x = this->vms0[4].scaleX * 8.0 + this->vms0[4].pos.x;
      this->vms0[4].sprite =
           (AnmLoadedSprite *)((int)g_AnmManager + (0x1e - (uint)g_GameManager.num_retries) * 0x38);
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

