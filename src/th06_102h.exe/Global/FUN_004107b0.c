
undefined4 FUN_004107b0(void)

{
  undefined4 *puVar1;
  ChainElem *pCVar2;
  int iVar3;
  undefined4 uVar4;
  ChainElem **local_40;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046911b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)operator_new(0x1170);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    local_40 = (ChainElem **)0x0;
  }
  else {
    local_40 = (ChainElem **)FUN_004108b0(puVar1);
  }
  local_8 = 0xffffffff;
  pCVar2 = CreateChainElem(&DAT_0069d918,FUN_004109c0);
  *local_40 = pCVar2;
  (*local_40)->arg = local_40;
  (*local_40)->field3_0x8 = FUN_00410b10;
  (*local_40)->field4_0xc = FUN_00410d80;
  iVar3 = AddToCalcChain((short *)&DAT_0069d918,*local_40,3);
  if (iVar3 == 0) {
    pCVar2 = CreateChainElem(&DAT_0069d918,FUN_00410a70);
    local_40[1] = pCVar2;
    local_40[1]->arg = local_40;
    AddToDrawChain(0x69d918,local_40[1],1);
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff;
  }
  ExceptionList = local_10;
  return uVar4;
}
