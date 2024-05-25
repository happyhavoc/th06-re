
void __thiscall StageMenu::OnDrawGameMenu(StageMenu *this)

{
  uint uVar1;
  int iVar2;
  AnmVm *pAVar3;
  AnmVm *pAVar4;
  AnmVm local_11c;
  int local_8;
  
  if (g_GameManager.is_in_game_menu != 0) {
    g_Supervisor.viewport.X = __ftol2(g_GameManager.arcade_region_top_left_pos.x);
    g_Supervisor.viewport.Y = __ftol2(g_GameManager.arcade_region_top_left_pos.y);
    g_Supervisor.viewport.Width = __ftol2(g_GameManager.arcade_region_size.x);
    g_Supervisor.viewport.Height = __ftol2(g_GameManager.arcade_region_size.y);
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)(g_Supervisor.d3dDevice,&g_Supervisor.viewport);
    if ((g_Supervisor.lockableBackbuffer != 0) && (this->curState != 0)) {
      pAVar3 = &this->vm1;
      pAVar4 = &local_11c;
      for (iVar2 = 0x44; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pAVar4->rotation).x = (pAVar3->rotation).x;
        pAVar3 = (AnmVm *)&(pAVar3->rotation).y;
        pAVar4 = (AnmVm *)&(pAVar4->rotation).y;
      }
      local_11c._128_4_ = local_11c._128_4_ | 0x1000;
      AnmManager::DrawNoRotation(g_AnmManager,&local_11c);
    }
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      pAVar3 = this->vms0 + local_8;
      uVar1._0_2_ = pAVar3->flags;
      uVar1._2_1_ = pAVar3->unk_82[0];
      uVar1._3_1_ = pAVar3->unk_82[1];
      if ((uVar1 & 1) != 0) {
        AnmManager::DrawNoRotation(g_AnmManager,this->vms0 + local_8);
      }
    }
  }
  return;
}

