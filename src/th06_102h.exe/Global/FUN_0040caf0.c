
void FUN_0040caf0(Enemy *param_1)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  int local_a0;
  D3DXVECTOR3 local_20;
  float local_14;
  float local_10;
  uint local_c;
  AnmVm *local_8;
  
  if ((param_1->flags3 >> 3 & 1) != 0) {
    Enemy::FUN_004114c0(param_1);
    return;
  }
  param_1->field63_0xeb8 = param_1->field63_0xeb8 + 0.01745329;
  if (0.7853982 <= param_1->field63_0xeb8) {
    param_1->field63_0xeb8 = param_1->field63_0xeb8 - 1.570796;
  }
  if ((param_1->field64_0xebc).current == (param_1->field64_0xebc).previous) goto LAB_0040cffe;
  if ((param_1->field64_0xebc).current < 0x79) {
    if (0x3c < (param_1->field64_0xebc).current) {
      uVar3 = (param_1->field64_0xebc).current & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      if (uVar3 == 0) goto LAB_0040cc18;
    }
    if (0x1e < (param_1->field64_0xebc).current) {
      uVar3 = (param_1->field64_0xebc).current & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      if (uVar3 == 0) goto LAB_0040cc18;
    }
    uVar3 = (param_1->field64_0xebc).current & 0x80000007;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
    }
    if (uVar3 != 0) goto LAB_0040cffe;
  }
LAB_0040cc18:
  local_c = (param_1->field64_0xebc).current & 0x8000000f;
  if ((int)local_c < 0) {
    local_c = (local_c - 1 | 0xfffffff0) + 1;
  }
  uVar3 = (int)local_c / 2;
  if ((short)uVar3 == 0) {
    local_a0 = 0;
  }
  else {
    uVar2 = Rng::GetRandomU16(&g_Rng);
    local_a0 = (int)((ulonglong)uVar2 % (ulonglong)(longlong)(int)(uVar3 & 0xffff));
  }
  local_c = local_a0 + (int)local_c / 2;
  local_10 = ((float)local_c * 160.0) / 16.0 + 32.0;
  local_14 = param_1->field63_0xeb8 - ((float)local_c * 3.141593) / 40.0;
  if (local_10 < -0.7853982 != NAN(local_10)) {
    local_10 = local_10 + 1.570796;
  }
  local_20.x = (param_1->position).x;
  local_20.y = (param_1->position).y;
  local_20.z = (param_1->position).z;
  fVar4 = (float10)FUN_0045bda4((double)local_14);
  local_20.x = (float)fVar4 * local_10 + local_20.x;
  fVar4 = (float10)FUN_0045bcf4((double)local_14);
  local_20.y = (float)fVar4 * local_10 + local_20.y;
  local_8 = EffectManager::FUN_0040ef50(&g_EffectManager,0x13,&local_20,1,0xff3030ff);
  fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
  local_8[1].angleVel.x = (fVar5 * 40.0 - 20.0) / 60.0;
  local_8[1].angleVel.y = ((float)local_c * 8.0) / 60.0 - 0.2666667;
  local_8[1].angleVel.z = 0.0;
  fVar5 = local_8[1].angleVel.z;
  fVar1 = local_8[1].angleVel.y;
  local_8[1].scaleY = -local_8[1].angleVel.x * 0.008333334;
  local_8[1].scaleX = -fVar1 * 0.008333334;
  local_8[1].scaleInterpFinalY = -fVar5 * 0.008333334;
  local_20.x = (param_1->position).x;
  local_20.y = (param_1->position).y;
  local_20.z = (param_1->position).z;
  fVar4 = (float10)FUN_0045bda4((double)local_14);
  local_20.x = local_20.x - (float)fVar4 * local_10;
  fVar4 = (float10)FUN_0045bcf4((double)local_14);
  local_20.y = (float)fVar4 * local_10 + local_20.y;
  local_8 = EffectManager::FUN_0040ef50(&g_EffectManager,0x13,&local_20,1,0xff3030ff);
  fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
  local_8[1].angleVel.x = (fVar5 * 40.0 - 20.0) / 60.0;
  local_8[1].angleVel.y = ((float)local_c * 8.0) / 60.0 - 0.2666667;
  local_8[1].angleVel.z = 0.0;
  fVar5 = local_8[1].angleVel.z;
  fVar1 = local_8[1].angleVel.y;
  local_8[1].scaleY = -local_8[1].angleVel.x * 0.008333334;
  local_8[1].scaleX = -fVar1 * 0.008333334;
  local_8[1].scaleInterpFinalY = -fVar5 * 0.008333334;
LAB_0040cffe:
  (param_1->field64_0xebc).previous = (param_1->field64_0xebc).current;
  Supervisor::TickTimer
            (&g_Supervisor,&(param_1->field64_0xebc).current,&(param_1->field64_0xebc).subFrame);
  return;
}

