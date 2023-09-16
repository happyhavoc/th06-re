
undefined4 FUN_00423801(LPCDIDEVICEOBJECTINSTANCE param_1)

{
  int iVar1;
  undefined4 prop;
  undefined4 uStack_18;
  DWORD DStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((param_1->dwType & DIDFT_AXIS) != 0) {
    prop = 0x18;
    uStack_18 = 0x10;
    uStack_10 = 2;
    DStack_14 = param_1->dwType;
    local_c = 0xfffffc18;
    local_8 = 1000;
    iVar1 = (**(code **)(*DAT_006c6d2c + 0x18))(DAT_006c6d2c,4,&prop);
    if (iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}

