
void __thiscall FUN_00435270(VeryBigStruct *this,int param_2)

{
  if (this->field19118_0x20d34[param_2] != (VeryBigStruct20d34 *)0x0) {
    (**(code **)((int)this->field19118_0x20d34[param_2]->vtbl + 8))
              (this->field19118_0x20d34[param_2]);
    this->field19118_0x20d34[param_2] = (VeryBigStruct20d34 *)0x0;
  }
  if (this->field19118_0x20d34[param_2 + 0x20] != (VeryBigStruct20d34 *)0x0) {
    (**(code **)((int)this->field19118_0x20d34[param_2 + 0x20]->vtbl + 8))
              (this->field19118_0x20d34[param_2 + 0x20]);
    this->field19118_0x20d34[param_2 + 0x20] = (VeryBigStruct20d34 *)0x0;
  }
  return;
}

