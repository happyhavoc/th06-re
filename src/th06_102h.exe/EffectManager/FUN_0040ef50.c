
AnmVm * __thiscall
EffectManager::FUN_0040ef50
          (EffectManager *this,int param_1,D3DXVECTOR3 *param_2,int param_3,D3DCOLOR param_4)

{
  int iVar1;
  Effect *local_20;
  short local_10;
  int local_c;
  Effect *local_8;
  AnmManager *anm_manager;
  
  local_8 = this->effects + this->next_index;
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    this->next_index = this->next_index + 1;
    if (0x1ff < this->next_index) {
      this->next_index = 0;
    }
    if (local_8->in_use_flag == 0) {
      local_8->in_use_flag = 1;
      local_8->effect_id = (byte)param_1;
      (local_8->pos1).x = param_2->x;
      (local_8->pos1).y = param_2->y;
      (local_8->pos1).z = param_2->z;
      anm_manager = g_AnmManager;
      iVar1 = g_Effects[param_1].anmFileIndex;
      local_10 = (short)iVar1;
      (local_8->vm).anmFileIndex = local_10;
      AnmManager::SetAndExecuteScript(anm_manager,&local_8->vm,anm_manager->scripts[iVar1]);
      (local_8->vm).color.color = param_4;
      local_8->effect_update_callback = g_Effects[param_1].update_callback;
      (local_8->timer).current = 0;
      (local_8->timer).subFrame = 0.0;
      (local_8->timer).previous = -999;
      local_8->field18_0x17a = 0;
      local_8->field_0x17b = 0;
      param_3 = param_3 + -1;
      if (param_3 == 0) break;
      if (this->next_index == 0) {
        local_8 = this->effects;
      }
      else {
        local_8 = local_8 + 1;
      }
    }
    else if (this->next_index == 0) {
      local_8 = this->effects;
    }
    else {
      local_8 = local_8 + 1;
    }
  }
  if (local_c < 0x200) {
    local_20 = local_8;
  }
  else {
    local_20 = &this->dummy_effect_for_failed_spawns;
  }
  return &local_20->vm;
}

