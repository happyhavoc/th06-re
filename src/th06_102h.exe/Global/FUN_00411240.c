
AnmVm * __fastcall FUN_00411240(AnmVm *param_1)

{
  int iVar1;
  float *pfVar2;
  AnmTimer *pAVar3;
  undefined *local_38;
  int local_30;
  AnmVm *local_20;
  int local_18;
  
  FUN_00403720(param_1);
  local_18 = 8;
  local_20 = param_1 + 1;
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00403720(local_20);
    local_20 = local_20 + 1;
  }
  FUN_00424127((AnmTimer *)&param_1[9].rotation.y);
  local_30 = 8;
  local_38 = (undefined *)((int)&param_1[9].matrix.field0_0x0 + 0x10);
  while (local_30 = local_30 + -1, -1 < local_30) {
    FUN_00424127((AnmTimer *)(local_38 + 4));
    local_38 = local_38 + 0x4c;
  }
  FUN_00424127((AnmTimer *)&param_1[0xc].rotation.y);
  FUN_00424127(&param_1[0xc].currentTimeInScript);
  pfVar2 = &param_1[0xc].matrix.field0_0x0.field0._12;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = 0.0;
    pfVar2 = pfVar2 + 1;
  }
  FUN_00424127((AnmTimer *)&param_1[0xc].pos.z);
  pAVar3 = &param_1[0xc].scaleInterpTime;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    pAVar3->previous = 0;
    pAVar3 = (AnmTimer *)&pAVar3->subFrame;
  }
  FUN_00424127((AnmTimer *)((int)&param_1[0xd].matrix.field0_0x0 + 0x38));
  FUN_00424127((AnmTimer *)&param_1[0xd].pos2.z);
  return param_1;
}

