
/* Responsible for drawing the popups */

void __thiscall AsciiManager::DrawPopupsWithHwVertexProcessing(AsciiManager *this)

{
  char *local_14;
  int local_10;
  uint local_c;
  AsciiManagerPopup *local_8;
  
  local_8 = this->popups0;
  g_Supervisor.viewport.X = __ftol2((double)g_GameManager.arcade_region_top_left_pos.x);
  g_Supervisor.viewport.Y = __ftol2((double)g_GameManager.arcade_region_top_left_pos.y);
  g_Supervisor.viewport.Width = __ftol2((double)g_GameManager.arcade_region_size.x);
  g_Supervisor.viewport.Height = __ftol2((double)g_GameManager.arcade_region_size.y);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)(g_Supervisor.d3dDevice,&g_Supervisor.viewport);
  for (local_10 = 0; local_10 < 0x203; local_10 = local_10 + 1) {
    if (local_8->inUse != '\0') {
      (this->vm1).pos.x = (local_8->position).x - (float)((uint)local_8->characterCount << 2);
      (this->vm1).pos.y = (local_8->position).y;
      (this->vm1).color = local_8->color;
      local_14 = local_8->digits + (local_8->characterCount - 1);
      for (local_c = (uint)local_8->characterCount; 0 < (int)local_c; local_c = local_c - 1) {
        (this->vm1).sprite = g_AnmManager->sprites + (byte)*local_14;
        if ((byte)*local_14 < 10) {
          AnmManager::FUN_00433590(g_AnmManager,&this->vm1);
        }
        else {
          (this->vm1).matrix.m[0][0] = 0.1875;
          (this->vm1).matrix.m[1][1] = 0.03125;
          AnmManager::FUN_00433590(g_AnmManager,&this->vm1);
          (this->vm1).matrix.m[0][0] = 0.03125;
          (this->vm1).matrix.m[1][1] = 0.03125;
        }
        (this->vm1).pos.x = (this->vm1).pos.x + 8.0;
        local_14 = local_14 + -1;
      }
    }
    local_8 = local_8 + 1;
  }
  return;
}

