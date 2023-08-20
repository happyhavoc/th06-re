
/* WARNING: Removing unreachable block (ram,0x0042bb17) */
/* WARNING: Removing unreachable block (ram,0x0042bb47) */

void FUN_0042b809(void **param_1)

{
  byte bVar1;
  void *_Dst;
  uint uVar2;
  undefined local_50;
  undefined local_4c;
  byte *local_40;
  byte local_39;
  int local_38;
  int local_30;
  int local_2c;
  undefined *local_28;
  int *local_24;
  undefined4 *local_20;
  int local_1c;
  void *local_18;
  int local_14;
  int local_c;
  int local_8;
  
  _Dst = _malloc(0xa0000);
  _memcpy(_Dst,*param_1,0x14);
  param_1[0x1467] = (void *)0x4b364854;
  *(undefined2 *)((int)param_1 + 0x51a2) = 0xc;
  *(undefined2 *)(param_1 + 0x1468) = 0xc;
  *(undefined *)(param_1 + 0x1469) = 0x10;
  _memcpy((void *)((int)_Dst + 0x14),param_1 + 0x1467,0xc);
  local_14 = 0x20;
  local_8 = 0;
  do {
    if (4 < local_8) {
      local_20 = &DAT_0069ccd0;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        *local_20 = 0x44524c43;
        *(undefined2 *)((int)local_20 + 6) = 0x18;
        *(undefined2 *)(local_20 + 1) = 0x18;
        *(undefined *)(local_20 + 2) = 0x10;
        _memcpy((void *)((int)_Dst + local_14),local_20,0x18);
        local_14 = local_14 + 0x18;
        local_20 = local_20 + 6;
      }
      local_24 = &DAT_0069bcd0;
      for (local_8 = 0; local_8 < 0x40; local_8 = local_8 + 1) {
        if (*local_24 == 0x4b544143) {
          *(undefined2 *)(local_24 + 4) = (undefined2)local_8;
          *(undefined2 *)((int)local_24 + 6) = 0x40;
          *(undefined2 *)(local_24 + 1) = 0x40;
          *(undefined *)(local_24 + 2) = 0x10;
          _memcpy((void *)((int)_Dst + local_14),local_24,0x40);
          local_14 = local_14 + 0x40;
        }
        local_24 = local_24 + 0x10;
      }
      local_28 = &DAT_0069cd30;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        for (local_2c = 0; local_2c < 6; local_2c = local_2c + 1) {
          for (local_30 = 0; local_30 < 4; local_30 = local_30 + 1) {
            if (*(int *)(local_28 + 0xc) != 0) {
              _memcpy((void *)((int)_Dst + local_14),local_28,0x14);
              local_14 = local_14 + 0x14;
            }
            local_28 = local_28 + 0x14;
          }
        }
      }
      *(undefined4 *)((int)_Dst + 8) = 0x14;
      *(int *)((int)_Dst + 0x10) = local_14;
      *(undefined2 *)((int)_Dst + 2) = 0;
      uVar2 = FUN_0041e780();
      local_4c = (undefined)((uVar2 & 0xffff) % 0x100);
      *(undefined *)((int)_Dst + 1) = local_4c;
      uVar2 = FUN_0041e780();
      local_50 = (undefined)((uVar2 & 0xffff) % 0x100);
      *(undefined *)((int)_Dst + 6) = local_50;
      *(undefined2 *)((int)_Dst + 4) = 0x10;
      for (local_38 = 4; local_38 < local_14; local_38 = local_38 + 1) {
        *(ushort *)((int)_Dst + 2) =
             *(short *)((int)_Dst + 2) + (ushort)*(byte *)((int)_Dst + local_38);
      }
      local_40 = (byte *)((int)_Dst + 1);
      local_39 = *local_40;
      for (local_38 = local_14 + -2; 0 < local_38; local_38 = local_38 + -1) {
        bVar1 = local_40[1];
        local_39 = (byte)((int)(local_39 & 0xe0) >> 5) | (byte)((local_39 & 0x1f) << 3);
        local_40[1] = local_40[1] ^ local_39;
        local_39 = local_39 + bVar1;
        local_40 = local_40 + 1;
      }
      FUN_0041e460("score.dat",_Dst,local_14);
      _free(_Dst);
      return;
    }
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      local_18 = param_1[local_8 * 0xc + local_1c * 3 + 0xead];
      local_c = 0;
      do {
        if (local_18 == (void *)0x0) break;
        if (**(int **)((int)local_18 + 8) == 0x52435348) {
          *(undefined *)(*(int *)((int)local_18 + 8) + 0x10) = (undefined)local_1c;
          *(undefined *)(*(int *)((int)local_18 + 8) + 0x11) = (undefined)local_8;
          *(undefined2 *)(*(int *)((int)local_18 + 8) + 6) = 0x1c;
          *(undefined2 *)(*(int *)((int)local_18 + 8) + 4) = 0x1c;
          *(undefined *)(*(int *)((int)local_18 + 8) + 8) = 0x10;
          *(undefined *)(*(int *)((int)local_18 + 8) + 9) = 0;
          _memcpy((void *)((int)_Dst + local_14),*(void **)((int)local_18 + 8),0x1c);
          local_14 = local_14 + 0x1c;
        }
        local_18 = *(void **)((int)local_18 + 4);
        local_c = local_c + 1;
      } while (local_c < 10);
    }
    local_8 = local_8 + 1;
  } while( true );
}

