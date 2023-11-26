
undefined4 FUN_0042a240(int param_1,char *replay_file)

{
  ChainElem *pCVar1;
  int iVar2;
  undefined4 uVar3;
  ReplayManager *local_14;
  
  if ((g_Supervisor.framerateMultiplier < 0.99 == NAN(g_Supervisor.framerateMultiplier)) ||
     (param_1 != 0)) {
    g_Supervisor.framerateMultiplier = 1.0;
    if (g_ReplayManager == (ReplayManager *)0x0) {
      local_14 = (ReplayManager *)operator_new(0x74);
      if (local_14 == (ReplayManager *)0x0) {
        local_14 = (ReplayManager *)0x0;
      }
      g_ReplayManager = local_14;
      local_14->data = (ReplayData *)0x0;
      local_14->is_demo = param_1;
      local_14->replay_file = replay_file;
      if (param_1 == 0) {
        pCVar1 = ChainElem::Allocate(ReplayManager::OnUpdate);
        local_14->chain1 = pCVar1;
        local_14->chain1->addedCallback = ReplayManager::OnAdd;
        local_14->chain1->deletedCallback = ReplayManager::OnDelete;
        pCVar1 = ChainElem::Allocate(FUN_0042a670);
        local_14->chain2 = pCVar1;
        local_14->chain1->arg = local_14;
        iVar2 = Chain::AddToCalcChain(&g_Chain,local_14->chain1,0xf);
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        local_14->chain3 = (ChainElem *)0x0;
      }
      else if (param_1 == 1) {
        pCVar1 = ChainElem::Allocate(FUN_0042a570);
        local_14->chain1 = pCVar1;
        local_14->chain1->addedCallback = FUN_0042a840;
        local_14->chain1->deletedCallback = ReplayManager::OnDelete;
        pCVar1 = ChainElem::Allocate(FUN_0042a670);
        local_14->chain2 = pCVar1;
        local_14->chain1->arg = local_14;
        iVar2 = Chain::AddToCalcChain(&g_Chain,local_14->chain1,5);
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        pCVar1 = ChainElem::Allocate(FUN_0042a510);
        local_14->chain3 = pCVar1;
        local_14->chain3->arg = local_14;
        Chain::AddToCalcChain(&g_Chain,local_14->chain3,0x10);
      }
      local_14->chain2->arg = local_14;
      Chain::AddToDrawChain(&g_Chain,local_14->chain2,0xd);
    }
    else if (param_1 == 0) {
      ReplayManager::OnAdd(g_ReplayManager);
    }
    else if (param_1 == 1) {
      uVar3 = FUN_0042a840(g_ReplayManager);
      return uVar3;
    }
  }
  return 0;
}

