
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405c10(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int local_c;
  AnmVm *local_8;
  
  FUN_00406020(param_1);
  local_8 = (AnmVm *)(param_1 + 0x76e4);
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    if (*(int *)(param_1 + 0x75e4 + local_c * 4) != 0) {
      pfVar5 = (float *)(param_1 + 0x7624 + local_c * 0xc);
      fVar1 = pfVar5[2];
      fVar2 = (local_8->pos2).z;
      fVar3 = pfVar5[1];
      fVar4 = (local_8->pos2).y;
      (local_8->pos).x = *pfVar5 + (local_8->pos2).x;
      (local_8->pos).y = fVar3 + fVar4;
      (local_8->pos).z = fVar1 + fVar2;
      (local_8->pos).x = _DAT_0069d6dc + (local_8->pos).x;
      pfVar5 = &(local_8->pos).y;
      *pfVar5 = _DAT_0069d6e0 + *pfVar5;
      (local_8->pos).z = 0.0;
      AnmManager::FUN_00432ad0(DAT_006d4588,local_8);
      pfVar5 = (float *)(param_1 + 0x7624 + local_c * 0xc);
      fVar1 = pfVar5[2];
      fVar2 = local_8[1].pos2.z;
      fVar3 = pfVar5[1];
      fVar4 = local_8[1].pos2.y;
      local_8[1].pos.x = *pfVar5 + local_8[1].pos2.x;
      local_8[1].pos.y = fVar3 + fVar4;
      local_8[1].pos.z = fVar1 + fVar2;
      local_8[1].pos.x = _DAT_0069d6dc + local_8[1].pos.x;
      pfVar5 = &local_8[1].pos.y;
      *pfVar5 = _DAT_0069d6e0 + *pfVar5;
      local_8[1].pos.z = 0.0;
      AnmManager::FUN_00432ad0(DAT_006d4588,local_8 + 1);
      pfVar5 = (float *)(param_1 + 0x7624 + local_c * 0xc);
      fVar1 = pfVar5[2];
      fVar2 = local_8[2].pos2.z;
      fVar3 = pfVar5[1];
      fVar4 = local_8[2].pos2.y;
      local_8[2].pos.x = *pfVar5 + local_8[2].pos2.x;
      local_8[2].pos.y = fVar3 + fVar4;
      local_8[2].pos.z = fVar1 + fVar2;
      local_8[2].pos.x = _DAT_0069d6dc + local_8[2].pos.x;
      pfVar5 = &local_8[2].pos.y;
      *pfVar5 = _DAT_0069d6e0 + *pfVar5;
      local_8[2].pos.z = 0.0;
      AnmManager::FUN_00432ad0(DAT_006d4588,local_8 + 2);
      pfVar5 = (float *)(param_1 + 0x7624 + local_c * 0xc);
      fVar1 = pfVar5[2];
      fVar2 = local_8[3].pos2.z;
      fVar3 = pfVar5[1];
      fVar4 = local_8[3].pos2.y;
      local_8[3].pos.x = *pfVar5 + local_8[3].pos2.x;
      local_8[3].pos.y = fVar3 + fVar4;
      local_8[3].pos.z = fVar1 + fVar2;
      local_8[3].pos.x = _DAT_0069d6dc + local_8[3].pos.x;
      pfVar5 = &local_8[3].pos.y;
      *pfVar5 = _DAT_0069d6e0 + *pfVar5;
      local_8[3].pos.z = 0.0;
      AnmManager::FUN_00432ad0(DAT_006d4588,local_8 + 3);
    }
    local_8 = local_8 + 4;
  }
  return;
}

