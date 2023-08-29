
/* WARNING: Inlined function: FUN_0045c3e0 */

undefined4 FUN_0042523a(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_00469238;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if ((DAT_006ca624 & 1) == 0) {
    DAT_006ca624 = DAT_006ca624 | 1;
    uStack_8 = 0;
    ExceptionList = &pvStack_10;
    FUN_00425318();
  }
  uStack_8 = 0xffffffff;
  puVar3 = &DAT_006c71f0;
  for (iVar2 = 0xd0d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_006c71f0 = AllocateChainElem(&CHAIN,FUN_004253dd);
  DAT_006c71f0->arg = &DAT_006c71f0;
  DAT_006c71f0->added_callback = FUN_0042564c;
  DAT_006c71f0->deleted_callback = FUN_00425d97;
  iVar2 = Chain::AddToCalcChain(&CHAIN,DAT_006c71f0,2);
  if (iVar2 == 0) {
    DAT_006c71f4 = AllocateChainElem(&CHAIN,FUN_0042545a);
    DAT_006c71f4->arg = &DAT_006c71f0;
    Chain::AddToDrawChain(&CHAIN,DAT_006c71f4,0);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  ExceptionList = pvStack_10;
  return uVar1;
}

