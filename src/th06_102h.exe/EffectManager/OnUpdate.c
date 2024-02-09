
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 EffectManager::OnUpdate(EffectManager *param_1)

{
  int iVar1;
  int effectIdx;
  Effect *effect;
  
  effect = param_1->effects;
  param_1->unk = 0;
  for (effectIdx = 0; effectIdx < 0x200; effectIdx = effectIdx + 1) {
    if (effect->in_use_flag != 0) {
      param_1->unk = param_1->unk + 1;
      if ((effect->effect_update_callback != (EffectUpdateCallback *)0x0) &&
         (iVar1 = (*effect->effect_update_callback)(effect), iVar1 != 1)) {
        effect->in_use_flag = 0;
      }
      iVar1 = AnmManager::ExecuteScript(g_AnmManager,&effect->vm);
      if (iVar1 != 0) {
        effect->in_use_flag = 0;
      }
      (effect->timer).previous = (effect->timer).current;
      Supervisor::TickTimer(&g_Supervisor,&(effect->timer).current,&(effect->timer).subFrame);
    }
    effect = effect + 1;
  }
  return 1;
}

