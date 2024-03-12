
AnmVm * __thiscall
EffectManager::FUN_0040ef50
          (EffectManager *this,int param_1,D3DXVECTOR3 *param_2,int param_3,D3DCOLOR param_4)

{
  int iVar1;
  Effect *dummy_effect_for_failed_spawns;
  short local_10;
  int idx;
  Effect *effect;
  AnmManager *anm_manager;
  
  effect = this->effects + this->next_index;
  for (idx = 0; idx < 0x200; idx = idx + 1) {
    this->next_index = this->next_index + 1;
    if (0x1ff < this->next_index) {
      this->next_index = 0;
    }
    if (effect->in_use_flag == 0) {
      effect->in_use_flag = 1;
      effect->effect_id = (byte)param_1;
      (effect->pos1).x = param_2->x;
      (effect->pos1).y = param_2->y;
      (effect->pos1).z = param_2->z;
      anm_manager = g_AnmManager;
      iVar1 = g_Effects[param_1].anmFileIndex;
      local_10 = (short)iVar1;
      (effect->vm).anmFileIndex = local_10;
      AnmManager::SetAndExecuteScript(anm_manager,&effect->vm,anm_manager->scripts[iVar1]);
      (effect->vm).color.color = param_4;
      effect->effect_update_callback = g_Effects[param_1].update_callback;
      (effect->timer).current = 0;
      (effect->timer).subFrame = 0.0;
      (effect->timer).previous = -999;
      effect->field18_0x17a = 0;
      effect->field_0x17b = 0;
      param_3 = param_3 + -1;
      if (param_3 == 0) break;
      if (this->next_index == 0) {
        effect = this->effects;
      }
      else {
        effect = effect + 1;
      }
    }
    else if (this->next_index == 0) {
      effect = this->effects;
    }
    else {
      effect = effect + 1;
    }
  }
  if (idx < 0x200) {
    dummy_effect_for_failed_spawns = effect;
  }
  else {
    dummy_effect_for_failed_spawns = &this->dummy_effect_for_failed_spawns;
  }
  return &dummy_effect_for_failed_spawns->vm;
}

