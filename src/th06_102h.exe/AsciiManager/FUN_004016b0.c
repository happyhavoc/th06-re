
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall AsciiManager::FUN_004016b0(AsciiManager *this)

{
  float fVar1;
  int local_18;
  AsciiManagerString *local_14;
  AsciiManagerString *local_10;
  int local_c;
  
  local_18 = 1;
  local_10 = this->strings;
  (this->vm0).flags = (this->vm0).flags | 1;
  (this->vm0).flags = (this->vm0).flags | 0x300;
  for (local_c = 0; local_c < this->numStrings; local_c = local_c + 1) {
    (this->vm0).pos.x = (local_10->position).x;
    (this->vm0).pos.y = (local_10->position).y;
    (this->vm0).pos.z = (local_10->position).z;
    local_14 = local_10;
    (this->vm0).scaleY = (local_10->scale).x;
    (this->vm0).scaleX = (local_10->scale).y;
    fVar1 = (local_10->scale).x * 14.0;
    if (local_18 != *(int *)&local_10->field_0x5c) {
      local_18 = *(int *)&local_10->field_0x5c;
      if (local_18 == 0) {
        g_GameContext.viewport.X = 0;
        g_GameContext.viewport.Y = 0;
        g_GameContext.viewport.Width = 0x280;
        g_GameContext.viewport.Height = 0x1e0;
        (*(g_GameContext.d3dDevice)->lpVtbl->SetViewport)
                  (g_GameContext.d3dDevice,&g_GameContext.viewport);
      }
      else {
        g_GameContext.viewport.X = __ftol2((double)_DAT_0069d6dc);
        g_GameContext.viewport.Y = __ftol2((double)_DAT_0069d6e0);
        g_GameContext.viewport.Width = __ftol2((double)_DAT_0069d6e4);
        g_GameContext.viewport.Height = __ftol2((double)_DAT_0069d6e8);
        (*(g_GameContext.d3dDevice)->lpVtbl->SetViewport)
                  (g_GameContext.d3dDevice,&g_GameContext.viewport);
      }
    }
    for (; local_14->text[0] != '\0'; local_14 = (AsciiManagerString *)(local_14->text + 1)) {
      if (local_14->text[0] == '\n') {
        (this->vm0).pos.y = (local_10->scale).y * 16.0 + (this->vm0).pos.y;
        (this->vm0).pos.x = (local_10->position).x;
      }
      else if (local_14->text[0] == ' ') {
        (this->vm0).pos.x = fVar1 + (this->vm0).pos.x;
      }
      else {
        if (*(int *)&local_10->field_0x58 == 0) {
          (this->vm0).sprite =
               (AnmLoadedSprite *)((int)g_AnmManager + ((byte)local_14->text[0] - 0x15) * 0x38);
          (this->vm0).color = local_10->color;
        }
        else {
          (this->vm0).sprite = g_AnmManager->sprites + (byte)local_14->text[0] + 0x61;
          (this->vm0).color = 0xffffffff;
        }
        AnmManager::FUN_00432ad0(g_AnmManager,&this->vm0);
        (this->vm0).pos.x = fVar1 + (this->vm0).pos.x;
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}

