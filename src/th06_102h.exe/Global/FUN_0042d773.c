
undefined4 FUN_0042d773(void)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_0045c3e0();
  pvVar1 = operator_new(0x56b0);
  *(void **)(unaff_EBP + -0x18) = pvVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  else {
    uVar2 = FUN_0042d8a1();
    *(undefined4 *)(unaff_EBP + -0x60) = uVar2;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x60);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x14);
  DebugPrint("counat = %d\n",DAT_0069d70c);
  uVar2 = FUN_0041cd40(FUN_0042d98e);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x51a8) = uVar2;
  *(code **)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x51a8) + 8) = FUN_0042f060;
  *(code **)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x51a8) + 0xc) = FUN_0042f5bc;
  *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x51a8) + 0x1c) =
       *(undefined4 *)(unaff_EBP + -0x10);
  if (*(int *)(unaff_EBP + 8) != 0) {
    if (DAT_0069d4c3 == '\0') {
      *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 8) = 9;
    }
    else {
      *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 8) = 0x11;
    }
  }
  iVar3 = FUN_0041c860(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x51a8),0xd);
  if (iVar3 == 0) {
    uVar2 = FUN_0041cd40(FUN_0042e446);
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x51ac) = uVar2;
    *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x51ac) + 0x1c) =
         *(undefined4 *)(unaff_EBP + -0x10);
    FUN_0041c940(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x51ac),0xc);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

