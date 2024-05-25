
void __thiscall AsciiManager::DrawStrings(AsciiManager *this)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int local_18;
  char *local_14;
  AsciiManagerString *local_10;
  int local_c;
  
  local_18 = 1;
  local_10 = this->strings;
  uVar2._0_2_ = (this->vm0).flags;
  uVar2._2_1_ = (this->vm0).unk_82[0];
  uVar2._3_1_ = (this->vm0).unk_82[1];
  uVar2 = uVar2 | 1;
  (this->vm0).flags = (short)uVar2;
  (this->vm0).unk_82[0] = (char)(uVar2 >> 0x10);
  (this->vm0).unk_82[1] = (char)(uVar2 >> 0x18);
  uVar3._0_2_ = (this->vm0).flags;
  uVar3._2_1_ = (this->vm0).unk_82[0];
  uVar3._3_1_ = (this->vm0).unk_82[1];
  uVar3 = uVar3 | 0x300;
  (this->vm0).flags = (short)uVar3;
  (this->vm0).unk_82[0] = (char)(uVar3 >> 0x10);
  (this->vm0).unk_82[1] = (char)(uVar3 >> 0x18);
  for (local_c = 0; local_c < this->numStrings; local_c = local_c + 1) {
    (this->vm0).pos.x = (local_10->position).x;
    (this->vm0).pos.y = (local_10->position).y;
    (this->vm0).pos.z = (local_10->position).z;
    local_14 = local_10->text;
    (this->vm0).scaleX = (local_10->scale).x;
    (this->vm0).scaleY = (local_10->scale).y;
    fVar1 = (local_10->scale).x * 14.0;
    if (local_18 != local_10->isGui) {
      local_18 = local_10->isGui;
      if (local_18 == 0) {
        g_Supervisor.viewport.X = 0;
        g_Supervisor.viewport.Y = 0;
        g_Supervisor.viewport.Width = 0x280;
        g_Supervisor.viewport.Height = 0x1e0;
        (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)
                  (g_Supervisor.d3dDevice,&g_Supervisor.viewport);
      }
      else {
        g_Supervisor.viewport.X = __ftol2(g_GameManager.arcade_region_top_left_pos.x);
        g_Supervisor.viewport.Y = __ftol2(g_GameManager.arcade_region_top_left_pos.y);
        g_Supervisor.viewport.Width = __ftol2(g_GameManager.arcade_region_size.x);
        g_Supervisor.viewport.Height = __ftol2(g_GameManager.arcade_region_size.y);
        (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)
                  (g_Supervisor.d3dDevice,&g_Supervisor.viewport);
      }
    }
    for (; *local_14 != '\0'; local_14 = local_14 + 1) {
      if (*local_14 == '\n') {
        (this->vm0).pos.y = (local_10->scale).y * 16.0 + (this->vm0).pos.y;
        (this->vm0).pos.x = (local_10->position).x;
      }
      else if (*local_14 == ' ') {
        (this->vm0).pos.x = fVar1 + (this->vm0).pos.x;
      }
      else {
        if (local_10->isSelected == 0) {
          (this->vm0).sprite =
               (AnmLoadedSprite *)((int)g_AnmManager + ((byte)*local_14 - 0x15) * 0x38);
          (this->vm0).color = (D3DCOLORUNION)local_10->color;
        }
        else {
          (this->vm0).sprite = g_AnmManager->sprites + (byte)*local_14 + 0x61;
          (this->vm0).color.color = 0xffffffff;
        }
        AnmManager::DrawNoRotation(g_AnmManager,&this->vm0);
        (this->vm0).pos.x = fVar1 + (this->vm0).pos.x;
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}

