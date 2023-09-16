
AnmVm * FUN_0040ef50(int param_1,float *param_2,int param_3,D3DCOLOR param_4)

{
  int iVar1;
  AnmManager *this;
  int *in_ECX;
  AnmVm *local_20;
  short local_10;
  int local_c;
  AnmVm *local_8;
  
  local_8 = (AnmVm *)(in_ECX + *in_ECX * 0x5f + 2);
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    *in_ECX = *in_ECX + 1;
    if (0x1ff < *in_ECX) {
      *in_ECX = 0;
    }
    if (*(char *)((int)&local_8[1].matrix.field0_0x0 + 0x2c) == '\0') {
      *(undefined *)((int)&local_8[1].matrix.field0_0x0 + 0x2c) = 1;
      *(undefined *)((int)&local_8[1].matrix.field0_0x0 + 0x2d) = (undefined)param_1;
      local_8[1].rotation.x = *param_2;
      local_8[1].rotation.y = param_2[1];
      local_8[1].rotation.z = param_2[2];
      this = g_AnmManager;
      iVar1 = *(int *)(&DAT_00476298 + param_1 * 8);
      local_10 = (short)iVar1;
      local_8->anmFileIndex = local_10;
      AnmManager::SetBeginingOfScript(this,local_8,this->scripts[iVar1]);
      local_8->color = param_4;
      local_8[1].matrix.field0_0x0.field0._33 = *(float *)(&DAT_0047629c + param_1 * 8);
      local_8[1].matrix.field0_0x0.field0._31 = 0.0;
      local_8[1].matrix.field0_0x0.field0._24 = 0.0;
      local_8[1].matrix.field0_0x0.field0._23 = -NAN;
      *(undefined *)((int)&local_8[1].matrix.field0_0x0 + 0x2e) = 0;
      *(undefined *)((int)&local_8[1].matrix.field0_0x0 + 0x2f) = 0;
      param_3 = param_3 + -1;
      if (param_3 == 0) break;
      if (*in_ECX == 0) {
        local_8 = (AnmVm *)(in_ECX + 2);
      }
      else {
        local_8 = (AnmVm *)(local_8[1].matrix.field0_0x0.m + 3);
      }
    }
    else if (*in_ECX == 0) {
      local_8 = (AnmVm *)(in_ECX + 2);
    }
    else {
      local_8 = (AnmVm *)(local_8[1].matrix.field0_0x0.m + 3);
    }
  }
  if (local_c < 0x200) {
    local_20 = local_8;
  }
  else {
    local_20 = (AnmVm *)(in_ECX + 0xbe02);
  }
  return local_20;
}

