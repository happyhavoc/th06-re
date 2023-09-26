
/* WARNING: Type propagation algorithm not settling */

AnmVm * __fastcall FUN_00411240(AnmVm *param_1)

{
  int iVar1;
  float *pfVar2;
  AnmTimer *pAVar3;
  float (*local_38) [4];
  int local_30;
  AnmVm *local_20;
  int local_18;
  
  AnmVm::AnmVm(param_1);
  local_18 = 8;
  local_20 = param_1 + 1;
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(local_20);
    local_20 = local_20 + 1;
  }
  AnmTimer::AnmTimer((AnmTimer *)&param_1[9].rotation.y);
  local_30 = 8;
  local_38 = param_1[9].matrix.m + 1;
  while (local_30 = local_30 + -1, -1 < local_30) {
    AnmTimer::AnmTimer((AnmTimer *)(*local_38 + 1));
    local_38 = (float (*) [4])((int)(local_38 + 4) + 0xc);
  }
  AnmTimer::AnmTimer((AnmTimer *)&param_1[0xc].rotation.y);
  AnmTimer::AnmTimer(&param_1[0xc].currentTimeInScript);
  pfVar2 = param_1[0xc].matrix.m[0];
  for (iVar1 = 0x15; pfVar2 = pfVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = 0.0;
  }
  AnmTimer::AnmTimer((AnmTimer *)&param_1[0xc].pos.z);
  pAVar3 = &param_1[0xc].scaleInterpTime;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    pAVar3->previous = 0;
    pAVar3 = (AnmTimer *)&pAVar3->subFrame;
  }
  AnmTimer::AnmTimer((AnmTimer *)(param_1[0xd].matrix.m[3] + 2));
  AnmTimer::AnmTimer((AnmTimer *)&param_1[0xd].pos2.z);
  return param_1;
}

