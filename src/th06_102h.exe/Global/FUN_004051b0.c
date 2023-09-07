
void FUN_004051b0(Unknown *param_1,int param_2)

{
  int in_ECX;
  
  *(undefined2 *)&param_1->field_0xb4 = (undefined2)param_2;
  *(undefined4 *)&param_1->field_0x90 = 0;
  *(undefined4 *)&param_1->field_0x94 = 0;
  param_1->field31_0x98 = 0.0;
  param_1[1].field8_0x20 = 0;
  param_1[1].field9_0x24 = 0;
  param_1[1].field10_0x28 = 0;
  *(undefined *)((int)&param_1[1].field13_0x3c.field3_0xc + 1) = 0xf;
  *(undefined *)&param_1[1].field13_0x3c.field3_0xc = 0xf;
  FUN_00432430(param_1,*(int *)(in_ECX + 0x1c934 + param_2 * 4));
  return;
}

