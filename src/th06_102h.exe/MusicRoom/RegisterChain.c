
/* WARNING: Inlined function: FUN_0045c3e0 */

ZunResult th06::MusicRoom::RegisterChain(void)

{
  ZunResult result;
  int iVar1;
  MusicRoom *pMVar2;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_00469238;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if ((g_MusicRoom._13364_4_ & 1) == 0) {
    g_MusicRoom._13364_4_ = g_MusicRoom._13364_4_ | 1;
    uStack_8 = 0;
    ExceptionList = &pvStack_10;
    MusicRoom(&g_MusicRoom);
  }
  uStack_8 = 0xffffffff;
  pMVar2 = &g_MusicRoom;
                    /* Overwriting the calc chain memory with draw chain info..? Might be a hack to
                       use less memory, not sure. */
  for (iVar1 = 0xd0d; iVar1 != 0; iVar1 = iVar1 + -1) {
    pMVar2->calc_chain = (ChainElem *)0x0;
    pMVar2 = (MusicRoom *)&pMVar2->draw_chain;
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

