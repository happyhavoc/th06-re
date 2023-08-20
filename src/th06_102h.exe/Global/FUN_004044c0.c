
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004044c0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_00487b10;
  for (iVar2 = 0xbd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_00487b14 = 0;
  DAT_00487b44 = 0;
  DAT_00487b40 = 0;
  DAT_00487b3c = 0xfffffc19;
  DAT_00487b48 = param_1;
  _DAT_00487e28 = FUN_00403810;
  _DAT_00487e2c = FUN_00404300;
  _DAT_00487e30 = FUN_004045e0;
  _DAT_00487e40 = &DAT_00487b10;
  iVar2 = FUN_0041c860(&DAT_00487e24,6);
  if (iVar2 == 0) {
    _DAT_00487af4 = FUN_004040d0;
    _DAT_00487af8 = 0;
    _DAT_00487afc = 0;
    _DAT_00487b0c = &DAT_00487b10;
    FUN_0041c940(&DAT_00487af0,3);
    _DAT_00487e08 = FUN_00404180;
    _DAT_00487e0c = 0;
    _DAT_00487e10 = 0;
    _DAT_00487e20 = &DAT_00487b10;
    FUN_0041c940(&DAT_00487e04,4);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

