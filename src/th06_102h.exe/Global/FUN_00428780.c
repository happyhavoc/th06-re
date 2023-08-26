
undefined4 FUN_00428780(undefined param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_006ca628;
  for (iVar2 = 0x263c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_006d1be4 = 0;
  DAT_006d1be0 = 0;
  DAT_006d1bdc = 0xfffffc19;
  DAT_006cb009 = param_1;
  DAT_006d3f0c = CreateChainElem(&DAT_0069d918,FUN_004288c0);
  DAT_006d3f10 = CreateChainElem(&DAT_0069d918,FUN_00429930);
  DAT_006d3f14 = CreateChainElem(&DAT_0069d918,FUN_00429b90);
  DAT_006d3f0c->arg = &DAT_006ca628;
  DAT_006d3f10->arg = &DAT_006ca628;
  DAT_006d3f14->arg = &DAT_006ca628;
  DAT_006d3f0c->field3_0x8 = FUN_00429c50;
  DAT_006d3f0c->field4_0xc = FUN_0042a0b0;
  iVar2 = AddToCalcChain((short *)&DAT_0069d918,DAT_006d3f0c,7);
  if (iVar2 == 0) {
    AddToDrawChain(0x69d918,DAT_006d3f10,5);
    AddToDrawChain(0x69d918,DAT_006d3f14,7);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

