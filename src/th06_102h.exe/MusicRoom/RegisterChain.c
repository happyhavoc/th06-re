
/* WARNING: Inlined function: FUN_0045c3e0 */

ZunResult MusicRoom::RegisterChain(void)

{
  ZunResult ZVar1;
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
    MusicRoom((MusicRoom *)&g_MusicRoomCalcChain);
  }
  uStack_8 = 0xffffffff;
  ppCVar3 = &g_MusicRoomCalcChain;
  for (iVar2 = 0xd0d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppCVar3 = (ChainElem *)0x0;
    ppCVar3 = ppCVar3 + 1;
  }
  g_MusicRoomCalcChain = Chain::CreateElem(&g_Chain,OnUpdate);
  g_MusicRoomCalcChain->arg = &g_MusicRoomCalcChain;
  g_MusicRoomCalcChain->addedCallback = AddedCallback;
  g_MusicRoomCalcChain->deletedCallback = DeletedCallback;
  iVar2 = Chain::AddToCalcChain(&g_Chain,g_MusicRoomCalcChain,2);
  if (iVar2 == 0) {
    g_MusicRoomDrawChain = Chain::CreateElem(&g_Chain,OnDraw);
    g_MusicRoomDrawChain->arg = &g_MusicRoomCalcChain;
    Chain::AddToDrawChain(&g_Chain,g_MusicRoomDrawChain,0);
    ZVar1 = ZUN_SUCCESS;
  }
  else {
    ZVar1 = ZUN_ERROR;
  }
  ExceptionList = pvStack_10;
  return ZVar1;
}

