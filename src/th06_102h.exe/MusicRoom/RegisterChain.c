
/* WARNING: Inlined function: FUN_0045c3e0 */

ZunResult th06::MusicRoom::RegisterChain(void)

{
  int iVar1;
  ZunResult result;
  int iVar2;
  MusicRoom *pMVar3;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_00469238;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if ((g_MusicRoom.hasConstructed & 1) == 0) {
    g_MusicRoom.hasConstructed = g_MusicRoom.hasConstructed | 1;
    uStack_8 = 0;
    ExceptionList = &pvStack_10;
    MusicRoom(&g_MusicRoom);
  }
  uStack_8 = 0xffffffff;
  pMVar3 = &g_MusicRoom;
                    /* Overwriting the calc chain memory with draw chain info..? Might be a hack to
                       use less memory, not sure. */
  for (iVar2 = 0xd0d; iVar2 != 0; iVar2 = iVar2 + -1) {
    pMVar3->calc_chain = (ChainElem *)0x0;
    pMVar3 = (MusicRoom *)&pMVar3->draw_chain;
  }
  g_MusicRoom.calc_chain = Chain::CreateElem(&g_Chain,OnUpdate);
  (g_MusicRoom.calc_chain)->arg = &g_MusicRoom;
  (g_MusicRoom.calc_chain)->addedCallback = AddedCallback;
  (g_MusicRoom.calc_chain)->deletedCallback = DeletedCallback;
  iVar1 = Chain::AddToCalcChain(&g_Chain,g_MusicRoom.calc_chain,2);
  if (iVar1 == 0) {
    g_MusicRoom.draw_chain = Chain::CreateElem(&g_Chain,OnDraw);
    (g_MusicRoom.draw_chain)->arg = &g_MusicRoom;
    Chain::AddToDrawChain(&g_Chain,g_MusicRoom.draw_chain,0);
    result = ZUN_SUCCESS;
  }
  else {
    result = ZUN_ERROR;
  }
  ExceptionList = pvStack_10;
  return result;
}

