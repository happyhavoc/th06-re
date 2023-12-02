
/* WARNING: Inlined function: FUN_0045c3e0 */

undefined4 MusicRoom::RegisterChain(void)

{
  undefined4 uVar1;
  int iVar2;
  ChainElem **ppCVar3;
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
    FUN_00425318(&PTR_006c71f0);
  }
  uStack_8 = 0xffffffff;
  ppCVar3 = &PTR_006c71f0;
  for (iVar2 = 0xd0d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppCVar3 = (ChainElem *)0x0;
    ppCVar3 = ppCVar3 + 1;
  }
  PTR_006c71f0 = Chain::CreateElem(&g_Chain,Callback);
  PTR_006c71f0->arg = &PTR_006c71f0;
  PTR_006c71f0->addedCallback = FUN_0042564c;
  PTR_006c71f0->deletedCallback = FUN_00425d97;
  iVar2 = Chain::AddToCalcChain(&g_Chain,PTR_006c71f0,2);
  if (iVar2 == 0) {
    PTR_006c71f4 = Chain::CreateElem(&g_Chain,FUN_0042545a);
    PTR_006c71f4->arg = &PTR_006c71f0;
    Chain::AddToDrawChain(&g_Chain,PTR_006c71f4,0);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  ExceptionList = pvStack_10;
  return uVar1;
}

