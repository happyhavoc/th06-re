
ZunResult ReplayManager::RegisterChain(int is_demo,char *replay_file)

{
  ChainElem *pCVar1;
  int iVar2;
  ZunResult ZVar3;
  ReplayManager *local_14;
  
  if ((g_Supervisor.framerateMultiplier < 0.99 == NAN(g_Supervisor.framerateMultiplier)) ||
     (is_demo != 0)) {
    g_Supervisor.framerateMultiplier = 1.0;
    if (g_ReplayManager == (ReplayManager *)0x0) {
      local_14 = (ReplayManager *)operator_new(0x74);
      if (local_14 == (ReplayManager *)0x0) {
        local_14 = (ReplayManager *)0x0;
      }
      g_ReplayManager = local_14;
      local_14->data = (ReplayData *)0x0;
      local_14->is_demo = is_demo;
      local_14->replay_file = replay_file;
      if (is_demo == 0) {
        pCVar1 = Chain::CreateElem(&g_Chain,OnUpdate);
        local_14->calc_chain = pCVar1;
        local_14->calc_chain->addedCallback = AddedCallback;
        local_14->calc_chain->deletedCallback = DeletedCallback;
        pCVar1 = Chain::CreateElem(&g_Chain,OnDraw);
        local_14->draw_chain = pCVar1;
        local_14->calc_chain->arg = local_14;
        iVar2 = Chain::AddToCalcChain(&g_Chain,local_14->calc_chain,0xf);
        if (iVar2 != 0) {
          return ZUN_ERROR;
        }
        local_14->demo_calc_chain = (ChainElem *)0x0;
      }
      else if (is_demo == 1) {
        pCVar1 = Chain::CreateElem(&g_Chain,FUN_0042a570);
        local_14->calc_chain = pCVar1;
        local_14->calc_chain->addedCallback = DemoAddedCallback;
        local_14->calc_chain->deletedCallback = DeletedCallback;
        pCVar1 = Chain::CreateElem(&g_Chain,OnDraw);
        local_14->draw_chain = pCVar1;
        local_14->calc_chain->arg = local_14;
        iVar2 = Chain::AddToCalcChain(&g_Chain,local_14->calc_chain,5);
        if (iVar2 != 0) {
          return ZUN_ERROR;
        }
        pCVar1 = Chain::CreateElem(&g_Chain,DemoOnUpdate);
        local_14->demo_calc_chain = pCVar1;
        local_14->demo_calc_chain->arg = local_14;
        Chain::AddToCalcChain(&g_Chain,local_14->demo_calc_chain,0x10);
      }
      local_14->draw_chain->arg = local_14;
      Chain::AddToDrawChain(&g_Chain,local_14->draw_chain,0xd);
    }
    else if (is_demo == 0) {
      AddedCallback(g_ReplayManager);
    }
    else if (is_demo == 1) {
      ZVar3 = DemoAddedCallback(g_ReplayManager);
      return ZVar3;
    }
  }
  return ZUN_SUCCESS;
}

