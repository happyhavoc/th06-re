
undefined4 FUN_0040f280(undefined4 *param_1)

{
  int iVar1;
  
  FUN_0040e340(param_1);
  switch(CUR_STAGE) {
  case 0:
  case 1:
    iVar1 = VeryBigStruct::LoadAnim(VERY_BIG_STRUCT,0xb,"data/eff01.anm",0x2b3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    break;
  case 2:
    iVar1 = VeryBigStruct::LoadAnim(VERY_BIG_STRUCT,0xb,"data/eff02.anm",0x2b3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    break;
  case 3:
    iVar1 = VeryBigStruct::LoadAnim(VERY_BIG_STRUCT,0xb,"data/eff03.anm",0x2b3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    break;
  case 4:
    iVar1 = VeryBigStruct::LoadAnim(VERY_BIG_STRUCT,0xb,"data/eff04.anm",0x2b3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    break;
  case 5:
    iVar1 = VeryBigStruct::LoadAnim(VERY_BIG_STRUCT,0xb,"data/eff05.anm",0x2b3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    break;
  case 6:
    iVar1 = VeryBigStruct::LoadAnim(VERY_BIG_STRUCT,0xb,"data/eff05.anm",0x2b3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    break;
  case 7:
    iVar1 = VeryBigStruct::LoadAnim(VERY_BIG_STRUCT,0xb,"data/eff04.anm",0x2b3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

