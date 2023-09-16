
void FUN_0041f290(int *param_1,int param_2,int param_3)

{
  int iVar1;
  Unknown *in_ECX;
  float10 fVar2;
  undefined2 local_14;
  Unknown *local_c;
  int local_8;
  
  local_c = (Unknown *)((int)in_ECX + in_ECX[0x350].field1_0x4 * 0x144);
  local_8 = 0;
  while( true ) {
    if (0x1ff < local_8) {
      return;
    }
    in_ECX[0x350].field1_0x4 = in_ECX[0x350].field1_0x4 + 1;
    if (*(char *)((int)&local_c[1].field14_0x7c + 1) == '\0') break;
    if ((int)in_ECX[0x350].field1_0x4 < 0x200) {
      local_c = (Unknown *)&local_c[1].field15_0x80;
    }
    else {
      in_ECX[0x350].field1_0x4 = 0;
      local_c = in_ECX;
    }
    local_8 = local_8 + 1;
  }
  if (0x1ff < (int)in_ECX[0x350].field1_0x4) {
    in_ECX[0x350].field1_0x4 = 0;
  }
  *(undefined *)((int)&local_c[1].field14_0x7c + 1) = 1;
  local_c[1].field13_0x3c.field4_0x10 = *param_1;
  local_c[1].field13_0x3c.field5_0x14 = (float)param_1[1];
  local_c[1].field13_0x3c.field6_0x18 = param_1[2];
  local_c[1].field13_0x3c.field7_0x1c = 0;
  local_c[1].field13_0x3c.field8_0x20 = -0x3ff33333;
  local_c[1].field13_0x3c.field9_0x24 = 0;
  *(undefined *)&local_c[1].field14_0x7c = (undefined)param_2;
  *(undefined *)((int)&local_c[1].field14_0x7c + 3) = (undefined)param_3;
  local_c[1].field13_0x3c.field15_0x3c = 0.0;
  local_c[1].field13_0x3c.field14_0x38 = 0;
  local_c[1].field13_0x3c.field13_0x34 = -999;
  if (param_3 == 2) {
    fVar2 = (float10)FUN_0041e820();
    local_c[1].field13_0x3c.field10_0x28 = (float)(fVar2 * (float10)288.0 + (float10)48.0);
    fVar2 = (float10)FUN_0041e820();
    local_c[1].field13_0x3c.field11_0x2c = (int)(float)(fVar2 * (float10)192.0 - (float10)64.0);
    local_c[1].field13_0x3c.field12_0x30 = 0;
    local_c[1].field13_0x3c.field7_0x1c = local_c[1].field13_0x3c.field4_0x10;
    local_c[1].field13_0x3c.field8_0x20 = (int)local_c[1].field13_0x3c.field5_0x14;
    local_c[1].field13_0x3c.field9_0x24 = local_c[1].field13_0x3c.field6_0x18;
  }
  iVar1 = DAT_006d4588;
  local_14 = (undefined2)(param_2 + 0x215);
  *(undefined2 *)&local_c->field_0xb4 = local_14;
  FUN_00432430(local_c,*(int *)(iVar1 + 0x1c934 + (param_2 + 0x215) * 4));
  local_c->field14_0x7c = -1;
  *(undefined *)((int)&local_c[1].field14_0x7c + 2) = 1;
  return;
}

