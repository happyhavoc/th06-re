
void __thiscall FUN_00432030(VeryBigStruct *this,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  VeryBigStruct0tbl *pVVar4;
  int *local_18;
  int local_14;
  int piVar1;
  
  if (this->anim_data[param_2] != (byte *)0x0) {
    piVar1 = (int)this->field18793_0x20b34[param_2];
    local_18 = (int *)(this->anim_data[param_2] + 0x40);
    for (local_14 = 0; local_14 < *(int *)this->anim_data[param_2]; local_14 = local_14 + 1) {
      pbVar1 = this->anim_data[param_2];
      iVar2 = *local_18;
      pVVar4 = this->field0_0x0 + *(int *)(pbVar1 + iVar2) + piVar1;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        pVVar4->field0_0x0 = 0;
        pVVar4 = (VeryBigStruct0tbl *)&pVVar4->field_0x4;
      }
      this->field0_0x0[*(int *)(pbVar1 + iVar2) + piVar1].field0_0x0 = -1;
      local_18 = local_18 + 1;
    }
    for (local_14 = 0; local_14 < *(int *)(this->anim_data[param_2] + 4); local_14 = local_14 + 1) {
      *(undefined4 *)(&this->field_0x1c934 + (*local_18 + piVar1) * 4) = 0;
      *(undefined4 *)(&this->field_0x1e934 + (*local_18 + piVar1) * 4) = 0;
      local_18 = local_18 + 2;
    }
    this->field18793_0x20b34[param_2] = (int *)0x0;
    FUN_004321e0(*(undefined4 *)(this->anim_data[param_2] + 8));
    _free(this->anim_data[param_2]);
    this->anim_data[param_2] = (byte *)0x0;
    this->field_0x210bc = 0xff;
    this->field_0x210bd = 0xff;
    this->field_0x210be = 0xff;
    this->field19869_0x210b8 = 0;
  }
  return;
}

