
void FUN_00406b10(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int local_c;
  AnmVm *local_8;
  
  FUN_00406020(param_1);
  local_8 = (AnmVm *)(param_1 + 0x76e4);
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    pfVar1 = (float *)(param_1 + 0x7624 + local_c * 0xc);
    (local_8->pos).x = *pfVar1;
    (local_8->pos).y = pfVar1[1];
    (local_8->pos).z = pfVar1[2];
    (local_8->pos).x = g_GameManager.arcade_region_top_left_pos.x + (local_8->pos).x;
    (local_8->pos).y = g_GameManager.arcade_region_top_left_pos.y + (local_8->pos).y;
    (local_8->pos).z = 0.0;
    local_8->scaleX = 3.2;
    local_8->scaleY = 3.2;
    AnmManager::FUN_00432cc0(g_AnmManager,local_8);
    pfVar1 = (float *)(param_1 + 0x7684 + local_c * 0xc);
    fVar2 = pfVar1[2];
    fVar3 = pfVar1[1];
    (local_8->pos).x = (local_8->pos).x - *pfVar1 * 6.0;
    (local_8->pos).y = (local_8->pos).y - fVar3 * 6.0;
    (local_8->pos).z = (local_8->pos).z - fVar2 * 6.0;
    (local_8->pos).x = (local_8->pos).x + -32.0;
    (local_8->pos).y = (local_8->pos).y + -32.0;
    (local_8->pos).z = 0.0;
    local_8->scaleX = 2.2;
    local_8->scaleY = 2.2;
    AnmManager::FUN_00432cc0(g_AnmManager,local_8);
    pfVar1 = (float *)(param_1 + 0x7684 + local_c * 0xc);
    fVar2 = pfVar1[2];
    fVar3 = pfVar1[1];
    (local_8->pos).x = (local_8->pos).x - (*pfVar1 + *pfVar1);
    (local_8->pos).y = (local_8->pos).y - (fVar3 + fVar3);
    (local_8->pos).z = (local_8->pos).z - (fVar2 + fVar2);
    (local_8->pos).x = (local_8->pos).x + 64.0;
    (local_8->pos).y = (local_8->pos).y + 64.0;
    (local_8->pos).z = 0.0;
    pfVar1 = (float *)(param_1 + 0x7684 + local_c * 0xc);
    fVar2 = pfVar1[2];
    fVar3 = pfVar1[1];
    (local_8->pos).x = (local_8->pos).x - (*pfVar1 + *pfVar1);
    (local_8->pos).y = (local_8->pos).y - (fVar3 + fVar3);
    (local_8->pos).z = (local_8->pos).z - (fVar2 + fVar2);
    (local_8->pos).x = (local_8->pos).x + -32.0;
    (local_8->pos).y = (local_8->pos).y + -32.0;
    (local_8->pos).z = 0.0;
    local_8->scaleX = 1.0;
    local_8->scaleY = 1.0;
    AnmManager::FUN_00432cc0(g_AnmManager,local_8);
    local_8 = local_8 + 1;
  }
  return;
}

