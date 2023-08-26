
undefined4 FUN_004012c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  ChainElem_00487aac.callback = FUN_00401140;
  ChainElem_00487aac.field3_0x8 = FUN_004013a0;
  ChainElem_00487aac.field4_0xc = FUN_004014d0;
  ChainElem_00487aac.arg = &DAT_0047b900;
  iVar1 = AddToCalcChain((short *)&DAT_0069d918,&ChainElem_00487aac,1);
  if (iVar1 == 0) {
    ChainElem_0047b8e0.callback = FUN_00401250;
    ChainElem_0047b8e0.field3_0x8 = 0;
    ChainElem_0047b8e0.field4_0xc = 0;
    ChainElem_0047b8e0.arg = &DAT_0047b900;
    AddToDrawChain(0x69d918,&ChainElem_0047b8e0,0xf);
    ChainElem_00487acc.callback = FUN_00401290;
    ChainElem_00487acc.field3_0x8 = 0;
    ChainElem_00487acc.field4_0xc = 0;
    ChainElem_00487acc.arg = &DAT_0047b900;
    AddToDrawChain(0x69d918,&ChainElem_00487acc,10);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

