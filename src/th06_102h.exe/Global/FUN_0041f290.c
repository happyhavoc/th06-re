
void FUN_0041f290(float *param_1,int param_2,int param_3)

{
  AnmManager *this;
  AnmVm *in_ECX;
  float10 fVar1;
  short local_14;
  AnmVm *local_c;
  int local_8;
  
  local_c = (AnmVm *)((int)in_ECX + (int)in_ECX[0x263].angleVel.z * 0x144);
  local_8 = 0;
  while( true ) {
    if (0x1ff < local_8) {
      return;
    }
    in_ECX[0x263].angleVel.z = (float)((int)in_ECX[0x263].angleVel.z + 1);
    if (*(char *)((int)&local_c[1].currentTimeInScript.previous + 1) == '\0') break;
    if ((int)in_ECX[0x263].angleVel.z < 0x200) {
      local_c = (AnmVm *)&local_c[1].currentTimeInScript.subFrame;
    }
    else {
      in_ECX[0x263].angleVel.z = 0.0;
      local_c = in_ECX;
    }
    local_8 = local_8 + 1;
  }
  if (0x1ff < (int)in_ECX[0x263].angleVel.z) {
    in_ECX[0x263].angleVel.z = 0.0;
  }
  *(undefined *)((int)&local_c[1].currentTimeInScript.previous + 1) = 1;
  local_c[1].rotation.x = *param_1;
  local_c[1].rotation.y = param_1[1];
  local_c[1].rotation.z = param_1[2];
  local_c[1].angleVel.x = 0.0;
  local_c[1].angleVel.y = -2.2;
  local_c[1].angleVel.z = 0.0;
  *(undefined *)&local_c[1].currentTimeInScript.previous = (undefined)param_2;
  *(undefined *)((int)&local_c[1].currentTimeInScript.previous + 3) = (undefined)param_3;
  local_c[1].uvScrollPos.y = 0.0;
  local_c[1].uvScrollPos.x = 0.0;
  local_c[1].scaleInterpFinalX = -NAN;
  if (param_3 == 2) {
    fVar1 = (float10)FUN_0041e820();
    local_c[1].scaleY = (float)(fVar1 * (float10)288.0 + (float10)48.0);
    fVar1 = (float10)FUN_0041e820();
    local_c[1].scaleX = (float)(fVar1 * (float10)192.0 - (float10)64.0);
    local_c[1].scaleInterpFinalY = 0.0;
    local_c[1].angleVel.x = local_c[1].rotation.x;
    local_c[1].angleVel.y = local_c[1].rotation.y;
    local_c[1].angleVel.z = local_c[1].rotation.z;
  }
  this = g_AnmManager;
  local_14 = (short)param_2 + 0x215;
  local_c->anmFileIndex = local_14;
  AnmManager::SetBeginingOfScript(this,local_c,this->scripts[param_2 + 0x215]);
  local_c->color = 0xffffffff;
  *(undefined *)((int)&local_c[1].currentTimeInScript.previous + 2) = 1;
  return;
}

