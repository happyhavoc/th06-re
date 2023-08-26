
undefined4 FUN_004013a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = VeryBigStruct::LoadAnim(VERY_BIG_STRUCT,1,"data/ascii.anm",0);
  if (iVar1 == 0) {
    iVar1 = VeryBigStruct::LoadAnim(VERY_BIG_STRUCT,2,"data/asciis.anm",0x77);
    if (iVar1 == 0) {
      iVar1 = VeryBigStruct::LoadAnim(VERY_BIG_STRUCT,3,"data/capture.anm",0x718);
      if (iVar1 == 0) {
        FUN_00401410(param_1);
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

