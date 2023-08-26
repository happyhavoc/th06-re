
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041b252(void)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 *puVar4;
  
  FUN_0045c3e0();
  *(undefined4 **)(unaff_EBP + -0x10) = &DAT_0069bc30;
  if (g_GameContext._396_4_ != 3) {
    puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    pvVar1 = operator_new(0x2c44);
    *(void **)(unaff_EBP + -0x18) = pvVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    else {
      uVar2 = FUN_0041b34b();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4) = *(undefined4 *)(unaff_EBP + -0x14);
  }
  _DAT_0069bc80 = FUN_004174d7;
  _DAT_0069bc84 = FUN_0041b1a4;
  _DAT_0069bc88 = FUN_0041b1b1;
  _DAT_0069bc98 = *(undefined4 *)(unaff_EBP + -0x10);
  iVar3 = AddToCalcChain((short *)&DAT_0069d918,(ChainElem *)&DAT_0069bc7c,0xc);
  if (iVar3 == 0) {
    _DAT_0069bc60 = FUN_00417502;
    _DAT_0069bc64 = 0;
    _DAT_0069bc68 = 0;
    _DAT_0069bc78 = *(undefined4 *)(unaff_EBP + -0x10);
    AddToDrawChain(0x69d918,(ChainElem *)&DAT_0069bc5c,0xb);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

