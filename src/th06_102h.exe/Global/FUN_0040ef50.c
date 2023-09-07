
Unknown * FUN_0040ef50(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  VeryBigStruct *pVVar2;
  int *in_ECX;
  Unknown *local_20;
  undefined2 local_10;
  int local_c;
  Unknown *local_8;
  
  local_8 = (Unknown *)(in_ECX + *in_ECX * 0x5f + 2);
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    *in_ECX = *in_ECX + 1;
    if (0x1ff < *in_ECX) {
      *in_ECX = 0;
    }
    if (local_8[1].field_0xb4 == '\0') {
      local_8[1].field_0xb4 = 1;
      local_8[1].field_0xb5 = (undefined)param_1;
      local_8[1].field13_0x3c.field4_0x10 = *param_2;
      local_8[1].field13_0x3c.field5_0x14 = (float)param_2[1];
      local_8[1].field13_0x3c.field6_0x18 = param_2[2];
      pVVar2 = g_VeryBigStruct;
      iVar1 = *(int *)(&DAT_00476298 + param_1 * 8);
      local_10 = (undefined2)iVar1;
      *(undefined2 *)&local_8->field_0xb4 = local_10;
      FUN_00432430(local_8,*(int *)(&pVVar2->field_0x1c934 + iVar1 * 4));
      local_8->field14_0x7c = param_4;
      *(undefined4 *)&local_8[1].field52_0xb0 = *(undefined4 *)(&DAT_0047629c + param_1 * 8);
      *(undefined4 *)&local_8[1].field_0xa8 = 0;
      *(undefined4 *)&local_8[1].field_0xa4 = 0;
      *(undefined4 *)&local_8[1].field_0xa0 = 0xfffffc19;
      local_8[1].field_0xb6 = 0;
      local_8[1].field_0xb7 = 0;
      param_3 = param_3 + -1;
      if (param_3 == 0) break;
      if (*in_ECX == 0) {
        local_8 = (Unknown *)(in_ECX + 2);
      }
      else {
        local_8 = (Unknown *)&local_8[1].field_0xb8;
      }
    }
    else if (*in_ECX == 0) {
      local_8 = (Unknown *)(in_ECX + 2);
    }
    else {
      local_8 = (Unknown *)&local_8[1].field_0xb8;
    }
  }
  if (local_c < 0x200) {
    local_20 = local_8;
  }
  else {
    local_20 = (Unknown *)(in_ECX + 0xbe02);
  }
  return local_20;
}

