
uint __thiscall
FUN_0041ec72(uint *param_1_00,undefined4 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  ushort *local_14;
  int local_c;
  
  iVar2 = param_4 * param_5 * 2;
  local_14 = (ushort *)(param_1_00[8] + param_3 * param_4 * 2);
  uVar1 = *param_1_00;
  if (uVar1 == 0x15) {
    for (local_c = 3; local_c < iVar2; local_c = local_c + 4) {
      *(byte *)((int)local_14 + local_c) = *(byte *)((int)local_14 + local_c) ^ 0xff;
    }
  }
  else if (uVar1 == 0x19) {
    for (local_c = 0; local_c < iVar2; local_c = local_c + 2) {
      *local_14 = *local_14 & 0x7fff | (*local_14 >> 0xf ^ 1) << 0xf;
      if ((short)*local_14 < 0) {
        *local_14 = *local_14 & 0x83ff |
                    ((*local_14 >> 10 & 0x1f) -
                     (short)(((int)((uint)(*local_14 >> 10 & 0x1f) * local_c) / iVar2) / 2) & 0x1f)
                    << 10;
        *local_14 = *local_14 & 0xfc1f |
                    ((*local_14 >> 5 & 0x1f) -
                     (short)(((int)((uint)(*local_14 >> 5 & 0x1f) * local_c) / iVar2) / 2) & 0x1f)
                    << 5;
        *local_14 = *local_14 & 0xffe0 |
                    (*local_14 & 0x1f) -
                    (short)(((int)((uint)(*local_14 & 0x1f) * local_c) / iVar2) / 4) & 0x1f;
      }
      else {
        *local_14 = *local_14 & 0x83ff |
                    (0x1fU - (short)(((local_c * 0x1f) / iVar2) / 2) & 0x1f) << 10;
        *local_14 = *local_14 & 0xfc1f |
                    (0x1fU - (short)(((local_c * 0x1f) / iVar2) / 2) & 0x1f) << 5;
        *local_14 = *local_14 & 0xffe0 | 0x1fU - (short)(((local_c * 0x1f) / iVar2) / 4) & 0x1f;
      }
      local_14 = local_14 + 1;
    }
  }
  else {
    if (uVar1 != 0x1a) {
      return uVar1 & 0xffffff00;
    }
    for (local_c = 1; local_c < iVar2; local_c = local_c + 2) {
      *(byte *)((int)local_14 + local_c) = *(byte *)((int)local_14 + local_c) ^ 0xf0;
    }
  }
  return CONCAT31((int3)((uint)local_c >> 8),1);
}

