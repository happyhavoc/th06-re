
ChainCallbackResult EffectManager::OnDraw(EffectManager *param_1)

{
  int local_c;
  Effect *local_8;
  
  local_8 = param_1->effects;
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    if (local_8->in_use_flag != 0) {
      (local_8->vm).pos.x = (local_8->pos1).x;
      (local_8->vm).pos.y = (local_8->pos1).y;
      (local_8->vm).pos.z = (local_8->pos1).z;
      AnmManager::Draw3(g_AnmManager,&local_8->vm);
    }
    local_8 = local_8 + 1;
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

