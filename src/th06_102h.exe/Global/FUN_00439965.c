
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00439965(void)

{
  int in_ECX;
  uint local_2c;
  uint local_28;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if (*(int *)(in_ECX + 0x81f0) == 0x11) {
    local_20 = 0x43a00000;
    local_1c = 200.0;
    local_18 = 0;
    if (*(int *)(in_ECX + 0x81f4) < 0x1e) {
      local_28 = (*(int *)(in_ECX + 0x81f4) * 0xff) / 0x1e;
    }
    else {
      local_28 = 0xff;
    }
    local_c = local_28;
    local_10 = (uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2;
    if ((byte)(&DAT_0069cce1)[_DAT_0069bcb0 + local_10 * 0x18] < 7) {
      local_2c = (uint)(byte)(&DAT_0069cce1)[_DAT_0069bcb0 + local_10 * 0x18];
    }
    else {
      local_2c = 6;
    }
    local_14 = local_2c;
    if ((_DAT_0069bcb0 == 0) && (local_2c == 6)) {
      local_14 = 5;
    }
    for (local_8 = 0; local_8 < (int)local_14; local_8 = local_8 + 1) {
      if (local_8 == *(int *)(in_ECX + 0x81a0)) {
        _DAT_00481b24 = local_c << 0x18 | 0xc0f0f0;
      }
      else {
        _DAT_00481b24 = (local_c >> 1) << 0x18 | 0x80c0c0;
      }
      FUN_00401650(&DAT_0047b900,&local_20,"STAGE %d  %.9d",local_8 + 1,
                   (&DAT_0069cd3c)[local_8 * 0x14 + local_10 * 0x78 + _DAT_0069bcb0 * 5]);
      local_1c = local_1c + 24.0;
    }
    _DAT_00481b24 = 0xffffffff;
  }
  return 0;
}

