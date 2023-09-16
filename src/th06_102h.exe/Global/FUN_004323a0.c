
undefined4 __thiscall FUN_004323a0(AnmManager *this,Unknown *param_2,short idx)

{
  undefined4 uVar1;
  undefined2 in_stack_0000000a;
  
  if ((int)this->sprites[_idx].sourceFileIndex < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    param_2->field52_0xb0 = idx;
    param_2->field67_0xc0 = this->sprites + _idx;
    FUN_00403670(&param_2->field13_0x3c);
    (param_2->field13_0x3c).field0_0x0 =
         param_2->field67_0xc0->widthPx / param_2->field67_0xc0->textureWidth;
    (param_2->field13_0x3c).field5_0x14 =
         param_2->field67_0xc0->heightPx / param_2->field67_0xc0->textureHeight;
    uVar1 = 0;
  }
  return uVar1;
}

