
undefined4 FUN_0042523a(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  
  FUN_0045c3e0();
  if ((DAT_006ca624 & 1) == 0) {
    DAT_006ca624 = DAT_006ca624 | 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00425318();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  *(undefined4 **)(unaff_EBP + -0x10) = &DAT_006c71f0;
  puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
  for (iVar2 = 0xd0d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_0041cd40(FUN_004253dd);
  **(undefined4 **)(unaff_EBP + -0x10) = uVar1;
  *(undefined4 *)(**(int **)(unaff_EBP + -0x10) + 0x1c) = *(undefined4 *)(unaff_EBP + -0x10);
  *(code **)(**(int **)(unaff_EBP + -0x10) + 8) = FUN_0042564c;
  *(code **)(**(int **)(unaff_EBP + -0x10) + 0xc) = FUN_00425d97;
  iVar2 = FUN_0041c860(**(undefined4 **)(unaff_EBP + -0x10),2);
  if (iVar2 == 0) {
    uVar1 = FUN_0041cd40(FUN_0042545a);
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4) = uVar1;
    *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 4) + 0x1c) =
         *(undefined4 *)(unaff_EBP + -0x10);
    FUN_0041c940(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4),0);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}

