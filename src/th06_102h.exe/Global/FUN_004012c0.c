
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004012c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  _DAT_00487ab0 = FUN_00401140;
  _DAT_00487ab4 = FUN_004013a0;
  _DAT_00487ab8 = FUN_004014d0;
  _DAT_00487ac8 = &DAT_0047b900;
  iVar1 = FUN_0041c860(&DAT_00487aac,1);
  if (iVar1 == 0) {
    _DAT_0047b8e4 = FUN_00401250;
    _DAT_0047b8e8 = 0;
    _DAT_0047b8ec = 0;
    _DAT_0047b8fc = &DAT_0047b900;
    FUN_0041c940(&DAT_0047b8e0,0xf);
    _DAT_00487ad0 = FUN_00401290;
    _DAT_00487ad4 = 0;
    _DAT_00487ad8 = 0;
    _DAT_00487ae8 = &DAT_0047b900;
    FUN_0041c940(&DAT_00487acc,10);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

