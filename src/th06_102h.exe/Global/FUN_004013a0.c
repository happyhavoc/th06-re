
undefined4 FUN_004013a0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00431dc0(DAT_006d4588,1,"data/ascii.anm",0);
  if (iVar1 == 0) {
    iVar1 = FUN_00431dc0(DAT_006d4588,2,"data/asciis.anm",0x77);
    if (iVar1 == 0) {
      iVar1 = FUN_00431dc0(DAT_006d4588,3,"data/capture.anm",0x718);
      if (iVar1 == 0) {
        FUN_00401410();
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

