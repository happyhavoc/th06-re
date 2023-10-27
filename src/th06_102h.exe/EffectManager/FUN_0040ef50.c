
AnmVm * __thiscall
EffectManager::FUN_0040ef50(int *param_1_00,int param_2,float *param_3,int param_4,D3DCOLOR param_5)

{
  int iVar1;
  AnmManager *this;
  AnmVm *local_20;
  short local_10;
  int local_c;
  AnmVm *local_8;
  
  local_8 = (AnmVm *)(param_1_00 + *param_1_00 * 0x5f + 2);
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    *param_1_00 = *param_1_00 + 1;
    if (0x1ff < *param_1_00) {
      *param_1_00 = 0;
    }
    if (*(char *)(local_8[1].matrix.m[2] + 3) == '\0') {
      *(undefined *)(local_8[1].matrix.m[2] + 3) = 1;
      *(undefined *)((int)local_8[1].matrix.m[2] + 0xd) = (undefined)param_2;
      local_8[1].rotation.x = *param_3;
      local_8[1].rotation.y = param_3[1];
      local_8[1].rotation.z = param_3[2];
      this = g_AnmManager;
      iVar1 = *(int *)(&DAT_00476298 + param_2 * 8);
      local_10 = (short)iVar1;
      local_8->anmFileIndex = local_10;
      AnmManager::SetAndExecuteScript(this,local_8,this->scripts[iVar1]);
      local_8->color = param_5;
      local_8[1].matrix.m[2][2] = *(float *)(&DAT_0047629c + param_2 * 8);
      local_8[1].matrix.m[2][0] = 0.0;
      local_8[1].matrix.m[1][3] = 0.0;
      local_8[1].matrix.m[1][2] = -NAN;
      *(undefined *)((int)local_8[1].matrix.m[2] + 0xe) = 0;
      *(undefined *)((int)local_8[1].matrix.m[2] + 0xf) = 0;
      param_4 = param_4 + -1;
      if (param_4 == 0) break;
      if (*param_1_00 == 0) {
        local_8 = (AnmVm *)(param_1_00 + 2);
      }
      else {
        local_8 = (AnmVm *)(local_8[1].matrix.m + 3);
      }
    }
    else if (*param_1_00 == 0) {
      local_8 = (AnmVm *)(param_1_00 + 2);
    }
    else {
      local_8 = (AnmVm *)(local_8[1].matrix.m + 3);
    }
  }
  if (local_c < 0x200) {
    local_20 = local_8;
  }
  else {
    local_20 = (AnmVm *)(param_1_00 + 0xbe02);
  }
  return local_20;
}

