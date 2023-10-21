
undefined4 FUN_0043a338(int param_1)

{
  UINT UVar1;
  int iVar2;
  undefined4 uVar3;
  
  _memset(&struct_006d46c0,0,0x10f34);
  DAT_0069d4bf = 0;
  UVar1 = (*(g_GameContext.d3dDevice)->lpVtbl->GetAvailableTextureMem)(g_GameContext.d3dDevice);
  DebugPrint("Debug : title 開始 VRAM = %d\n",UVar1);
  struct_006d46c0.unk_81f0 = -(uint)(param_1 != 0) & 0xc;
  g_GameContext.framerateMultiplier = 0.0;
  struct_006d46c0.chain_calc = ChainElem::Allocate(FUN_0043579f);
  (struct_006d46c0.chain_calc)->arg = &struct_006d46c0;
  (struct_006d46c0.chain_calc)->addedCallback = FUN_0043a464;
  (struct_006d46c0.chain_calc)->deletedCallback = FUN_0043a659;
  struct_006d46c0.unk_81f4 = 0;
  iVar2 = Chain::AddToCalcChain(&g_Chain,struct_006d46c0.chain_calc,2);
  if (iVar2 == 0) {
    struct_006d46c0.chain_draw = ChainElem::Allocate(FUN_00439ad6);
    (struct_006d46c0.chain_draw)->arg = &struct_006d46c0;
    Chain::AddToDrawChain(&g_Chain,struct_006d46c0.chain_draw,0);
    struct_006d46c0.unk_10f30 = 0;
    struct_006d46c0.unk_81f4 = 0x3c;
    struct_006d46c0.unk_10f2c = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

