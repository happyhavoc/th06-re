
void FUN_004071b0(void *param_1)

{
  float fVar1;
  float10 fVar2;
  int local_c;
  AnmVm *local_8;
  
  FUN_00406020();
  local_8 = (AnmVm *)((int)param_1 + 0x76e4);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    fVar1 = (((float)local_c * 0.6283185) / 3.0 - 3.141593) + 1.256637;
    (local_8->pos).x = *(float *)((int)param_1 + 0x440);
    (local_8->pos).y = *(float *)((int)param_1 + 0x444);
    (local_8->pos).z = *(float *)((int)param_1 + 0x448);
    fVar2 = (float10)FUN_0045bda4((double)fVar1);
    (local_8->pos).x =
         ((float)fVar2 * local_8->sprite->heightPx * local_8->scaleY) / 2.0 + (local_8->pos).x;
    fVar2 = (float10)FUN_0045bcf4((double)fVar1);
    (local_8->pos).y =
         ((float)fVar2 * local_8->sprite->heightPx * local_8->scaleY) / 2.0 + (local_8->pos).y;
    fVar2 = (float10)FUN_0041e850(1.570796 - fVar1);
    (local_8->rotation).z = (float)fVar2;
    (local_8->pos).x = VIEWPORT_X + (local_8->pos).x;
    (local_8->pos).y = VIEWPORT_Y + (local_8->pos).y;
    (local_8->pos).z = 0.0;
    AnmManager::FUN_00432cc0(g_AnmManager,local_8);
    local_8 = local_8 + 1;
  }
  return;
}

