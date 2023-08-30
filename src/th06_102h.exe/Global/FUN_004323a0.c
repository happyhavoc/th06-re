
undefined4 __thiscall FUN_004323a0(VeryBigStruct *this,Unknown *param_2,short idx)

{
  undefined4 uVar1;
  undefined2 in_stack_0000000a;
  
  if (this->field0_0x0[_idx].field0_0x0 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    param_2->field52_0xb0 = idx;
    param_2->field67_0xc0 = this->field0_0x0 + _idx;
    FUN_00403670(&param_2->field13_0x3c);
    (param_2->field13_0x3c).field0_0x0 =
         param_2->field67_0xc0->field36_0x30 / param_2->field67_0xc0->field18_0x18;
    (param_2->field13_0x3c).field5_0x14 =
         param_2->field67_0xc0->field35_0x2c / param_2->field67_0xc0->field17_0x14;
    uVar1 = 0;
  }
  return uVar1;
}

