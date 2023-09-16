
void FUN_00432430(Unknown *param_1,int param_2)

{
  param_1->field15_0x80 = param_1->field15_0x80 & 0xffffff3f;
  AnmVm::Initialize((AnmVm *)param_1);
  *(int *)&param_1->field_0xb8 = param_2;
  *(undefined4 *)&param_1->field_0xbc = *(undefined4 *)&param_1->field_0xb8;
  (param_1->field12_0x30).current = 0;
  (param_1->field12_0x30).subFrame = 0.0;
  (param_1->field12_0x30).previous = -999;
  param_1->field15_0x80 = param_1->field15_0x80 & 0xfffffffe;
  if (param_2 != 0) {
    AnmManager::FUN_00433960(param_1);
  }
  return;
}

