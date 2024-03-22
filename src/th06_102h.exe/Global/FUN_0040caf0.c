
void FUN_0040caf0(Enemy *param_1,AnmRawInstr *param_2)

{
  ushort uVar2;
  uint uVar3;
  float fVar2;
  double dVar3;
  int local_a0;
  D3DXVECTOR3 position__related;
  float local_14;
  float local_10;
  uint local_c;
  AnmVm *local_8;
  float fVar1;
  
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
  position__related.x = (param_1->position).x;
  position__related.y = (param_1->position).y;
  position__related.z = (param_1->position).z;
  dVar3 = cos((double)local_14);
  position__related.x = (float)dVar3 * local_10 + position__related.x;
  dVar3 = sin((double)local_14);
  position__related.y = (float)dVar3 * local_10 + position__related.y;
  local_8 = EffectManager::FUN_0040ef50(&g_EffectManager,0x13,&position__related,1,0xff3030ff);
  fVar2 = Rng::GetRandomF32ZeroToOne(&g_Rng);
  local_8[1].angleVel.x = (fVar2 * 40.0 - 20.0) / 60.0;
  local_8[1].angleVel.y = ((float)local_c * 8.0) / 60.0 - 0.2666667;
  local_8[1].angleVel.z = 0.0;
  fVar2 = local_8[1].angleVel.z;
  fVar1 = local_8[1].angleVel.y;
  local_8[1].scaleY = -local_8[1].angleVel.x * 0.008333334;
  local_8[1].scaleX = -fVar1 * 0.008333334;
  local_8[1].scaleInterpFinalY = -fVar2 * 0.008333334;
  position__related.x = (param_1->position).x;
  position__related.y = (param_1->position).y;
  position__related.z = (param_1->position).z;
  dVar3 = cos((double)local_14);
  position__related.x = position__related.x - (float)dVar3 * local_10;
  dVar3 = sin((double)local_14);
  position__related.y = (float)dVar3 * local_10 + position__related.y;
  local_8 = EffectManager::FUN_0040ef50(&g_EffectManager,0x13,&position__related,1,0xff3030ff);
  fVar2 = Rng::GetRandomF32ZeroToOne(&g_Rng);
  local_8[1].angleVel.x = (fVar2 * 40.0 - 20.0) / 60.0;
  local_8[1].angleVel.y = ((float)local_c * 8.0) / 60.0 - 0.2666667;
  local_8[1].angleVel.z = 0.0;
  fVar2 = local_8[1].angleVel.z;
  fVar1 = local_8[1].angleVel.y;
  local_8[1].scaleY = -local_8[1].angleVel.x * 0.008333334;
  local_8[1].scaleX = -fVar1 * 0.008333334;
  local_8[1].scaleInterpFinalY = -fVar2 * 0.008333334;
LAB_0040cffe:
  (param_1->field64_0xebc).previous = (param_1->field64_0xebc).current;
  Supervisor::TickTimer
            (&g_Supervisor,&(param_1->field64_0xebc).current,&(param_1->field64_0xebc).subFrame);
  return;
}

