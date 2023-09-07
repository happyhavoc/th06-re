
undefined4 __fastcall FUN_0043c8d0(Pbg3File *param_1)

{
  param_1->field3_0xc = 0;
  param_1->field2_0x8 = 0;
  if (param_1->inner != (Pbg3FileStuff *)0x0) {
    (**(code **)(*(int *)param_1->inner + 0x1c))(1);
    param_1->inner = (Pbg3FileStuff *)0x0;
  }
  if ((void *)param_1->field4_0x10 != (void *)0x0) {
    _free((void *)param_1->field4_0x10);
    param_1->field4_0x10 = 0;
  }
  _free((void *)param_1->field1_0x4);
  return 1;
}

