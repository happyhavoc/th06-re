
void __thiscall StageMenu::OnDrawGameMenu(StageMenu *this)

{
  int iVar1;
  AnmVm *pAVar2;
  AnmVm *pAVar3;
  AnmVm local_11c;
  int local_8;
  
  if (g_GameManager.is_in_game_menu != 0) {
    g_Supervisor.viewport.X = __ftol2(g_GameManager.arcade_region_top_left_pos.x);
    g_Supervisor.viewport.Y = __ftol2(g_GameManager.arcade_region_top_left_pos.y);
    g_Supervisor.viewport.Width = __ftol2(g_GameManager.arcade_region_size.x);
    g_Supervisor.viewport.Height = __ftol2(g_GameManager.arcade_region_size.y);
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)(g_Supervisor.d3dDevice,&g_Supervisor.viewport);
    if ((g_Supervisor.lockableBackbuffer != 0) && (this->curState != 0)) {
      pAVar2 = &this->vm1;
      pAVar3 = &local_11c;
      for (iVar1 = 0x44; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pAVar3->rotation).x = (pAVar2->rotation).x;
        pAVar2 = (AnmVm *)&(pAVar2->rotation).y;
        pAVar3 = (AnmVm *)&(pAVar3->rotation).y;
      }
      local_11c.flags = local_11c.flags | AnmVmFlags_12;
      AnmManager::DrawNoRotation(g_AnmManager,&local_11c);
    }
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if ((this->vms0[local_8].flags & AnmVmFlags_1) != AnmVmFlags_None) {
        AnmManager::DrawNoRotation(g_AnmManager,this->vms0 + local_8);
      }
    }
  }
  return;
}

