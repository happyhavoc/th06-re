
Effect * __thiscall
th06::EffectManager::SpawnParticles
          (EffectManager *this,int effectId,D3DXVECTOR3 *effectPos,int numParticles,
          ZunColor particleColor)

{
  int iVar1;
  Effect *out_effect;
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
      effect->effect_id = (byte)effectId;
      (effect->pos1).x = effectPos->x;
      (effect->pos1).y = effectPos->y;
      (effect->pos1).z = effectPos->z;
      anm_manager = g_AnmManager;
      iVar1 = g_Effects[effectId].anmFileIndex;
      local_10 = (short)iVar1;
      (effect->vm).anmFileIndex = local_10;
      AnmManager::SetAndExecuteScript(anm_manager,&effect->vm,anm_manager->scripts[iVar1]);
      (effect->vm).color = (D3DCOLORUNION)particleColor.color;
      effect->effect_update_callback = g_Effects[effectId].update_callback;
      (effect->timer).current = 0;
      (effect->timer).subFrame = 0.0;
      (effect->timer).previous = -999;
      effect->field18_0x17a = 0;
      effect->field_0x17b = 0;
      numParticles = numParticles + -1;
      if (numParticles == 0) break;
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
    out_effect = effect;
  }
  else {
    out_effect = &this->dummy_effect_for_failed_spawns;
  }
  return out_effect;
}

