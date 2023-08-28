
void __thiscall FUN_00432260(VeryBigStruct *this,int param_2,undefined4 *param_3)

{
  int iVar1;
  VeryBigStruct0tbl *pVVar2;
  
  pVVar2 = this->field0_0x0 + param_2;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    pVVar2->field0_0x0 = *param_3;
    param_3 = param_3 + 1;
    pVVar2 = (VeryBigStruct0tbl *)&pVVar2->field_0x4;
  }
  *(int *)&this->field0_0x0[param_2].field_0x34 = this->field2080_0x1c930;
  this->field2080_0x1c930 = this->field2080_0x1c930 + 1;
  *(float *)&this->field0_0x0[param_2].field_0x1c =
       *(float *)&this->field0_0x0[param_2].field_0x4 /
       *(float *)&this->field0_0x0[param_2].field_0x18;
  *(float *)&this->field0_0x0[param_2].field_0x24 =
       *(float *)&this->field0_0x0[param_2].field_0xc /
       *(float *)&this->field0_0x0[param_2].field_0x18;
  *(float *)&this->field0_0x0[param_2].field_0x20 =
       *(float *)&this->field0_0x0[param_2].field_0x8 /
       *(float *)&this->field0_0x0[param_2].field_0x14;
  *(float *)&this->field0_0x0[param_2].field_0x28 =
       *(float *)&this->field0_0x0[param_2].field_0x10 /
       *(float *)&this->field0_0x0[param_2].field_0x14;
  *(float *)&this->field0_0x0[param_2].field_0x30 =
       *(float *)&this->field0_0x0[param_2].field_0xc -
       *(float *)&this->field0_0x0[param_2].field_0x4;
  *(float *)&this->field0_0x0[param_2].field_0x2c =
       *(float *)&this->field0_0x0[param_2].field_0x10 -
       *(float *)&this->field0_0x0[param_2].field_0x8;
  return;
}

