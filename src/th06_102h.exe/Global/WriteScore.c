
/* WARNING: Removing unreachable block (ram,0x0042bb17) */
/* WARNING: Removing unreachable block (ram,0x0042bb47) */

void WriteScore(ResultScreen *param_1)

{
  byte bVar1;
  ushort uVar2;
  void *_Dst;
  undefined local_50;
  undefined local_4c;
  byte *local_40;
  byte local_39;
  int local_38;
  int local_30;
  int local_2c;
  Pscr *local_28;
  Catk *local_24;
  Clrd *local_20;
  int local_1c;
  ScoreListNode *local_18;
  size_t local_14;
  int local_c;
  int local_8;
  
  _Dst = _malloc(0xa0000);
  _memcpy(_Dst,param_1->scoredat,0x14);
  param_1->field92_0x519c = L'\x4b364854';
  param_1->field94_0x51a2 = 0xc;
  param_1->field93_0x51a0 = 0xc;
  param_1->field_0x51a4 = 0x10;
  _memcpy((void *)((int)_Dst + 0x14),&param_1->field92_0x519c,0xc);
  local_14 = 0x20;
  local_8 = 0;
  do {
    if (4 < local_8) {
      local_20 = g_GameManager.clrd;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        (local_20->base).magic = L'\x44524c43';
        (local_20->base).unk_len = 0x18;
        (local_20->base).th6k_len = 0x18;
        (local_20->base).version_ = '\x10';
        _memcpy((void *)((int)_Dst + local_14),local_20,0x18);
        local_14 = local_14 + 0x18;
        local_20 = local_20 + 1;
      }
      local_24 = g_GameManager.catk;
      for (local_8 = 0; local_8 < 0x40; local_8 = local_8 + 1) {
        if ((local_24->base).magic == 0x4b544143) {
          local_24->idx = (ushort)local_8;
          (local_24->base).unk_len = 0x40;
          (local_24->base).th6k_len = 0x40;
          (local_24->base).version_ = '\x10';
          _memcpy((void *)((int)_Dst + local_14),local_24,0x40);
          local_14 = local_14 + 0x40;
        }
        local_24 = local_24 + 1;
      }
      local_28 = g_GameManager.pscr;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        for (local_2c = 0; local_2c < 6; local_2c = local_2c + 1) {
          for (local_30 = 0; local_30 < 4; local_30 = local_30 + 1) {
            if (local_28->score != 0) {
              _memcpy((void *)((int)_Dst + local_14),local_28,0x14);
              local_14 = local_14 + 0x14;
            }
            local_28 = local_28 + 1;
          }
        }
      }
      *(undefined4 *)((int)_Dst + 8) = 0x14;
      *(size_t *)((int)_Dst + 0x10) = local_14;
      *(undefined2 *)((int)_Dst + 2) = 0;
      uVar2 = Rng::GetRandomU16(&g_Rng);
      local_4c = (undefined)((uint)uVar2 % 0x100);
      *(undefined *)((int)_Dst + 1) = local_4c;
      uVar2 = Rng::GetRandomU16(&g_Rng);
      local_50 = (undefined)((uint)uVar2 % 0x100);
      *(undefined *)((int)_Dst + 6) = local_50;
      *(undefined2 *)((int)_Dst + 4) = 0x10;
      for (local_38 = 4; local_38 < (int)local_14; local_38 = local_38 + 1) {
        *(ushort *)((int)_Dst + 2) =
             *(short *)((int)_Dst + 2) + (ushort)*(byte *)((int)_Dst + local_38);
      }
      local_40 = (byte *)((int)_Dst + 1);
      local_39 = *local_40;
      for (local_38 = local_14 - 2; 0 < local_38; local_38 = local_38 + -1) {
        bVar1 = local_40[1];
        local_39 = (byte)((int)(local_39 & 0xe0) >> 5) | (byte)((local_39 & 0x1f) << 3);
        local_40[1] = local_40[1] ^ local_39;
        local_39 = local_39 + bVar1;
        local_40 = local_40 + 1;
      }
      FileSystem::WriteDataToFile("score.dat",_Dst,local_14);
      _free(_Dst);
      return;
    }
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      local_18 = param_1->scores[local_8 * 4 + local_1c].next;
      local_c = 0;
      do {
        if (local_18 == (ScoreListNode *)0x0) break;
        if ((local_18->data->base).magic == L'\x52435348') {
          local_18->data->character = (byte)local_1c;
          local_18->data->difficulty = (byte)local_8;
          (local_18->data->base).unk_len = 0x1c;
          (local_18->data->base).th6k_len = 0x1c;
          (local_18->data->base).version_ = '\x10';
          (local_18->data->base).field_0x9 = 0;
          _memcpy((void *)((int)_Dst + local_14),local_18->data,0x1c);
          local_14 = local_14 + 0x1c;
        }
        local_18 = local_18->next;
        local_c = local_c + 1;
      } while (local_c < 10);
    }
    local_8 = local_8 + 1;
  } while( true );
}

