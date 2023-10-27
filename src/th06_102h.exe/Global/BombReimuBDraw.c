
void BombReimuBDraw(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_c;
  AnmVm *local_8;
  
  FUN_00406020(param_1);
  local_8 = (AnmVm *)(param_1 + 0x76e4);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    pfVar1 = (float *)(param_1 + 0x7624 + local_c * 0xc);
    fVar2 = pfVar1[2];
    fVar3 = (local_8->pos2).z;
    fVar4 = pfVar1[1];
    fVar5 = (local_8->pos2).y;
    (local_8->pos).x = *pfVar1 + (local_8->pos2).x;
    (local_8->pos).y = fVar4 + fVar5;
    (local_8->pos).z = fVar2 + fVar3;
    (local_8->pos).x = g_GameManager.arcade_region_top_left_pos.x + (local_8->pos).x;
    (local_8->pos).y = g_GameManager.arcade_region_top_left_pos.y + (local_8->pos).y;
    (local_8->pos).z = 0.0;
    AnmManager::FUN_00432cc0(g_AnmManager,local_8);
    local_8 = local_8 + 1;
  }
  return;
}

