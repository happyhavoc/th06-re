
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004324d0(AnmManager *param_1_00,int param_2)

{
  if ((uint)param_1_00->currentBlendMode != (*(uint *)(param_2 + 0x80) >> 2 & 1)) {
    param_1_00->currentBlendMode = (byte)(*(uint *)(param_2 + 0x80) >> 2) & 1;
    if (param_1_00->currentBlendMode == '\0') {
      (**(code **)(*DAT_006c6d20 + 200))(DAT_006c6d20,0x14,6);
    }
    else {
      (**(code **)(*DAT_006c6d20 + 200))(DAT_006c6d20,0x14,2);
    }
  }
  if ((((DAT_006c6e60 & 1) == 0) && ((DAT_006c6e60 >> 8 & 1) == 0)) &&
     ((uint)param_1_00->currentColorOp != (*(uint *)(param_2 + 0x80) >> 3 & 1))) {
    param_1_00->currentColorOp = (byte)(*(uint *)(param_2 + 0x80) >> 3) & 1;
    if (param_1_00->currentColorOp == '\0') {
      (**(code **)(*DAT_006c6d20 + 0xfc))(DAT_006c6d20,0,1,4);
    }
    else {
      (**(code **)(*DAT_006c6d20 + 0xfc))(DAT_006c6d20,0,1,7);
    }
  }
  if ((DAT_006c6e60 >> 1 & 1) == 0) {
    if (param_1_00->currentTextureFactor != *(D3DCOLOR *)(param_2 + 0x7c)) {
      param_1_00->currentTextureFactor = *(D3DCOLOR *)(param_2 + 0x7c);
      (**(code **)(*DAT_006c6d20 + 200))(DAT_006c6d20,0x3c,param_1_00->currentTextureFactor);
    }
  }
  else {
    _DAT_006d45a0 = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d45bc = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d45d8 = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d45f4 = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d466c = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d4684 = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d469c = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d46b4 = *(undefined4 *)(param_2 + 0x7c);
  }
  if (((DAT_006c6e60 >> 6 & 1) == 0) &&
     ((uint)param_1_00->currentZWriteDisable != (*(uint *)(param_2 + 0x80) >> 0xc & 1))) {
    param_1_00->currentZWriteDisable = (byte)(*(uint *)(param_2 + 0x80) >> 0xc) & 1;
    if (param_1_00->currentZWriteDisable == '\0') {
      (**(code **)(*DAT_006c6d20 + 200))(DAT_006c6d20,0xe,1);
    }
    else {
      (**(code **)(*DAT_006c6d20 + 200))(DAT_006c6d20,0xe,0);
    }
  }
  return;
}

