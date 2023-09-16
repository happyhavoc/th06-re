
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall AsciiManager::FUN_004033b0(AsciiManager *this)

{
  char *local_14;
  int local_10;
  uint local_c;
  AsciiManagerPopup *local_8;
  
  local_8 = this->popups0;
  _DAT_006c6de0 = __ftol2((double)_DAT_0069d6dc);
  DAT_006c6de4 = __ftol2((double)_DAT_0069d6e0);
  DAT_006c6de8 = __ftol2((double)_DAT_0069d6e4);
  DAT_006c6dec = __ftol2((double)_DAT_0069d6e8);
  (*DAT_006c6d20->lpVtbl->SetViewport)(DAT_006c6d20,(D3DVIEWPORT8 *)&DAT_006c6de0);
  for (local_10 = 0; local_10 < 0x203; local_10 = local_10 + 1) {
    if (local_8->inUse != '\0') {
      (this->vm1).pos.x = (local_8->position).x - (float)((uint)local_8->characterCount << 2);
      (this->vm1).pos.y = (local_8->position).y;
      (this->vm1).color = local_8->color;
      local_14 = local_8->digits + (local_8->characterCount - 1);
      for (local_c = (uint)local_8->characterCount; 0 < (int)local_c; local_c = local_c - 1) {
        (this->vm1).sprite = DAT_006d4588->sprites + (byte)*local_14;
        if ((byte)*local_14 < 10) {
          AnmManager::FUN_00433590(DAT_006d4588,&this->vm1);
        }
        else {
          (this->vm1).matrix.field0_0x0.field0._11 = 0.1875;
          (this->vm1).matrix.field0_0x0.field0._22 = 0.03125;
          AnmManager::FUN_00432ad0(DAT_006d4588,&this->vm1);
          (this->vm1).matrix.field0_0x0.field0._11 = 0.03125;
          (this->vm1).matrix.field0_0x0.field0._22 = 0.03125;
        }
        (this->vm1).pos.x = (this->vm1).pos.x + 8.0;
        local_14 = local_14 + -1;
      }
    }
    local_8 = local_8 + 1;
  }
  return;
}

