
int * FUN_0040ef50(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  VeryBigStruct *pVVar2;
  int *in_ECX;
  int *local_20;
  undefined2 local_10;
  int local_c;
  int *local_8;
  
  local_8 = in_ECX + *in_ECX * 0x5f + 2;
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    *in_ECX = *in_ECX + 1;
    if (0x1ff < *in_ECX) {
      *in_ECX = 0;
    }
    if (*(char *)(local_8 + 0x5e) == '\0') {
      *(undefined *)(local_8 + 0x5e) = 1;
      *(undefined *)((int)local_8 + 0x179) = (undefined)param_1;
      local_8[0x44] = *param_2;
      local_8[0x45] = param_2[1];
      local_8[0x46] = param_2[2];
      pVVar2 = VERY_BIG_STRUCT;
      iVar1 = *(int *)(&DAT_00476298 + param_1 * 8);
      local_10 = (undefined2)iVar1;
      *(undefined2 *)(local_8 + 0x2d) = local_10;
      FUN_00432430(local_8,*(undefined4 *)(&pVVar2->field_0x1c934 + iVar1 * 4));
      local_8[0x1f] = param_4;
      local_8[0x5d] = *(int *)(&DAT_0047629c + param_1 * 8);
      local_8[0x5b] = 0;
      local_8[0x5a] = 0;
      local_8[0x59] = -999;
      *(undefined *)((int)local_8 + 0x17a) = 0;
      *(undefined *)((int)local_8 + 0x17b) = 0;
      param_3 = param_3 + -1;
      if (param_3 == 0) break;
      if (*in_ECX == 0) {
        local_8 = in_ECX + 2;
      }
      else {
        local_8 = local_8 + 0x5f;
      }
    }
    else if (*in_ECX == 0) {
      local_8 = in_ECX + 2;
    }
    else {
      local_8 = local_8 + 0x5f;
    }
  }
  if (local_c < 0x200) {
    local_20 = local_8;
  }
  else {
    local_20 = in_ECX + 0xbe02;
  }
  return local_20;
}

