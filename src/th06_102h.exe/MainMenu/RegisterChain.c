
undefined4 MainMenu::RegisterChain(int param_1)

{
  UINT UVar1;
  int iVar2;
  undefined4 uVar3;
  
  _memset(&g_MainMenu,0,0x10f34);
  g_GameManager._6175_1_ = 0;
  UVar1 = (*(g_Supervisor.d3dDevice)->lpVtbl->GetAvailableTextureMem)(g_Supervisor.d3dDevice);
  DebugPrint("Debug : title 開始 VRAM = %d\n",UVar1);
  g_MainMenu.unk_81f0 = -(uint)(param_1 != 0) & 0xc;
  g_Supervisor.framerateMultiplier = 0.0;
  g_MainMenu.chain_calc = Chain::CreateElem(&g_Chain,FUN_0043579f);
  (g_MainMenu.chain_calc)->arg = &g_MainMenu;
  (g_MainMenu.chain_calc)->addedCallback = FUN_0043a464;
  (g_MainMenu.chain_calc)->deletedCallback = FUN_0043a659;
  g_MainMenu.unk_81f4 = 0;
  iVar2 = Chain::AddToCalcChain(&g_Chain,g_MainMenu.chain_calc,2);
  if (iVar2 == 0) {
    g_MainMenu.chain_draw = Chain::CreateElem(&g_Chain,FUN_00439ad6);
    (g_MainMenu.chain_draw)->arg = &g_MainMenu;
    Chain::AddToDrawChain(&g_Chain,g_MainMenu.chain_draw,0);
    g_MainMenu.unk_10f30 = 0;
    g_MainMenu.unk_81f4 = 0x3c;
    g_MainMenu.unk_10f2c = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

