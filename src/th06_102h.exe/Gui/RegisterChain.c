
/* WARNING: Inlined function: FUN_0045c3e0 */

ZunResult Gui::RegisterChain(void)

{
  void *pvVar1;
  ZunResult ZVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_20;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0046912f;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (g_Supervisor.curState != 3) {
    puVar4 = &g_Gui;
    ExceptionList = &pvStack_10;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    pvVar1 = operator_new(0x2c44);
    uStack_8 = 0;
    if (pvVar1 == (void *)0x0) {
      uStack_20 = 0;
    }
    else {
      uStack_20 = FUN_0041b34b();
    }
    DAT_0069bc34 = uStack_20;
  }
  uStack_8 = 0xffffffff;
  ChainElem_0069bc7c.callback = OnUpdate;
  ChainElem_0069bc7c.addedCallback = AddedCallback;
  ChainElem_0069bc7c.deletedCallback = DeletedCallback;
  ChainElem_0069bc7c.arg = &g_Gui;
  iVar3 = Chain::AddToCalcChain(&g_Chain,&ChainElem_0069bc7c,0xc);
  if (iVar3 == 0) {
    ChainElem_0069bc5c.callback = OnDraw;
    ChainElem_0069bc5c.addedCallback = 0;
    ChainElem_0069bc5c.deletedCallback = 0;
    ChainElem_0069bc5c.arg = &g_Gui;
    Chain::AddToDrawChain(&g_Chain,&ChainElem_0069bc5c,0xb);
    ZVar2 = ZUN_SUCCESS;
  }
  else {
    ZVar2 = ZUN_ERROR;
  }
  ExceptionList = pvStack_10;
  return ZVar2;
}

