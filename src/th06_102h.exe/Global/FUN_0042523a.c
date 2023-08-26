
undefined4 FUN_0042523a(void)

{
  ChainElem *pCVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 *puVar4;
  
  FUN_0045c3e0();
  if ((DAT_006ca624 & 1) == 0) {
    DAT_006ca624 = DAT_006ca624 | 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00425318();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  *(undefined4 **)(unaff_EBP + -0x10) = &DAT_006c71f0;
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  for (iVar3 = 0xd0d; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  pCVar1 = CreateChainElem(&DAT_0069d918,FUN_004253dd);
  **(ChainElem ***)(unaff_EBP + -0x10) = pCVar1;
  *(undefined4 *)(**(int **)(unaff_EBP + -0x10) + 0x1c) = *(undefined4 *)(unaff_EBP + -0x10);
  *(code **)(**(int **)(unaff_EBP + -0x10) + 8) = FUN_0042564c;
  *(code **)(**(int **)(unaff_EBP + -0x10) + 0xc) = FUN_00425d97;
  iVar3 = AddToCalcChain((short *)&DAT_0069d918,**(ChainElem ***)(unaff_EBP + -0x10),2);
  if (iVar3 == 0) {
    pCVar1 = CreateChainElem(&DAT_0069d918,FUN_0042545a);
    *(ChainElem **)(*(int *)(unaff_EBP + -0x10) + 4) = pCVar1;
    *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 4) + 0x1c) =
         *(undefined4 *)(unaff_EBP + -0x10);
    AddToDrawChain(0x69d918,*(ChainElem **)(*(int *)(unaff_EBP + -0x10) + 4),0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

