
AnmVm * FUN_00414670(short *param_1)

{
  short sVar1;
  int iVar2;
  AnmManager *pAVar3;
  int in_ECX;
  float10 fVar4;
  short local_10;
  AnmVm *local_c;
  int local_8;
  
  pAVar3 = DAT_006d4588;
  local_c = (AnmVm *)(in_ECX + 0xec000);
  local_8 = 0;
  while( true ) {
    if (0x3f < local_8) {
      return local_c;
    }
    if (local_c[2].currentTimeInScript.current == 0) break;
    local_8 = local_8 + 1;
    local_c = (AnmVm *)(local_c[2].matrix.field0_0x0.m[1] + 1);
  }
  sVar1 = *param_1;
  local_10 = sVar1 + 0x209;
  local_c->anmFileIndex = local_10;
  FUN_00432430((Unknown *)local_c,(int)pAVar3->scripts[sVar1 + 0x209]);
  AnmManager::FUN_004323a0(DAT_006d4588,local_c,(int)local_c->spriteNumber + (int)param_1[1]);
  pAVar3 = DAT_006d4588;
  iVar2 = *(int *)(&DAT_00476440 + param_1[1] * 4);
  AnmVm::Initialize(local_c + 1);
  AnmManager::FUN_004323a0(pAVar3,local_c + 1,iVar2 + 0x28c);
  local_c[1].flags = local_c[1].flags | 4;
  local_c[2].rotation.x = *(float *)(param_1 + 2);
  local_c[2].rotation.y = *(float *)(param_1 + 4);
  local_c[2].rotation.z = *(float *)(param_1 + 6);
  *(short *)((int)&local_c[2].matrix.field0_0x0 + 0xe) = param_1[1];
  local_c[2].currentTimeInScript.current = 1;
  local_c[2].angleVel.x = *(float *)(param_1 + 8);
  if (param_1[0x24] == 0) {
    fVar4 = (float10)FUN_00428700(param_1 + 2);
    local_c[2].angleVel.x = (float)(fVar4 + (float10)local_c[2].angleVel.x);
  }
  *(short *)((int)&local_c[2].matrix.field0_0x0 + 0xc) = param_1[0x26];
  local_c[2].matrix.field0_0x0.field0._13 = 0.0;
  local_c[2].matrix.field0_0x0.field0._12 = 0.0;
  local_c[2].matrix.field0_0x0.field0._11 = -NAN;
  local_c[2].angleVel.y = *(float *)(param_1 + 0x10);
  local_c[2].angleVel.z = *(float *)(param_1 + 0x12);
  local_c[2].scaleX = *(float *)(param_1 + 0x14);
  local_c[2].scaleY = *(float *)(param_1 + 0x16);
  local_c[2].scaleInterpFinalY = *(float *)(param_1 + 0xc);
  local_c[2].scaleInterpFinalX = *(float *)(param_1 + 0x18);
  local_c[2].uvScrollPos.y = *(FLOAT *)(param_1 + 0x1a);
  local_c[2].currentTimeInScript.previous = *(int *)(param_1 + 0x1c);
  local_c[2].uvScrollPos.x = *(FLOAT *)(param_1 + 0x1e);
  local_c[2].currentTimeInScript.subFrame = *(float *)(param_1 + 0x20);
  if (local_c[2].scaleInterpFinalX == 0.0) {
    *(undefined *)((int)&local_c[2].matrix.field0_0x0 + 0x10) = 1;
    return local_c;
  }
  *(undefined *)((int)&local_c[2].matrix.field0_0x0 + 0x10) = 0;
  return local_c;
}

