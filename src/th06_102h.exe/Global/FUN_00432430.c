
void FUN_00432430(Unknown *param_1,int param_2)

{
  param_1->field15_0x80 = param_1->field15_0x80 & 0xffffff3f;
  FUN_00403580(param_1);
  *(int *)&param_1->field_0xb8 = param_2;
  *(undefined4 *)&param_1->field_0xbc = *(undefined4 *)&param_1->field_0xb8;
  (param_1->field12_0x30).field2_0x8 = 0;
  (param_1->field12_0x30).field1_0x4 = 0;
  (param_1->field12_0x30).field0_0x0 = 0xfffffc19;
  param_1->field15_0x80 = param_1->field15_0x80 & 0xfffffffe;
  if (param_2 != 0) {
    FUN_00433960(param_1);
  }
  return;
}

