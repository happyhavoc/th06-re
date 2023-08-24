
void __fastcall FUN_004219d0(VeryBigStruct *param_1)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    if (param_1->field19118_0x20d34[local_8] != (VeryBigStruct20d34 *)0x0) {
      (**(code **)((int)param_1->field19118_0x20d34[local_8]->vtbl + 8))
                (param_1->field19118_0x20d34[local_8]);
      param_1->field19118_0x20d34[local_8] = (VeryBigStruct20d34 *)0x0;
    }
  }
  return;
}

