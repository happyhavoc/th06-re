
void FUN_0041d820(void)

{
  ushort uVar1;
  int iVar2;
  ushort extraout_var;
  uint unaff_retaddr;
  BYTE local_10c;
  uint local_10b;
  uint uStack_ff;
  uint uStack_fb;
  byte local_f1;
  byte bStack_f0;
  ushort uStack_ef;
  byte local_ed;
  byte bStack_e8;
  byte bStack_e7;
  byte local_e6;
  byte bStack_e5;
  byte bStack_e4;
  byte bStack_e2;
  byte local_e0;
  byte bStack_df;
  uint local_d6;
  byte bStack_c5;
  byte local_c4;
  ushort uStack_c3;
  byte bStack_c1;
  ushort local_bf;
  byte bStack_bd;
  byte bStack_bc;
  ushort local_bb;
  byte bStack_b9;
  ushort uStack_b4;
  ushort local_b2;
  byte bStack_ab;
  byte local_aa;
  byte bStack_a9;
  byte bStack_a8;
  byte bStack_a6;
  byte bStack_a5;
  byte local_a4;
  byte bStack_a3;
  uint local_6f;
  uint uStack_45;
  byte bStack_41;
  ushort uStack_3f;
  uint local_3c;
  uint local_8;
  
  local_8 = __security_cookie ^ unaff_retaddr;
  if (g_GameContext._16_4_ == 0) {
    GetKeyboardState(&local_10c);
    uVar1 = -(ushort)((local_e6 & 0x80) != 0) & 0x10 | -(ushort)((bStack_e4 & 0x80) != 0) & 0x20 |
            -(ushort)((bStack_e7 & 0x80) != 0) & 0x40 | -(ushort)((bStack_e5 & 0x80) != 0) & 0x80 |
            -(ushort)((local_a4 & 0x80) != 0) & 0x10 | -(ushort)((local_aa & 0x80) != 0) & 0x20 |
            -(ushort)((bStack_a8 & 0x80) != 0) & 0x40 | -(ushort)((bStack_a6 & 0x80) != 0) & 0x80 |
            -(ushort)((bStack_a5 & 0x80) != 0) & 0x50 | -(ushort)((bStack_a3 & 0x80) != 0) & 0x90 |
            -(ushort)((bStack_ab & 0x80) != 0) & 0x60 | -(ushort)((bStack_a9 & 0x80) != 0) & 0xa0 |
            -(ushort)((bStack_e8 & 0x80) != 0) & 0x800 | (ushort)((local_b2 & 0x80) != 0) |
            -(ushort)((uStack_b4 & 0x80) != 0) & 2 | -(ushort)((uStack_ff >> 0x18 & 0x80) != 0) & 4
            | -(ushort)((local_f1 & 0x80) != 0) & 8 | -(ushort)((uStack_fb & 0x80) != 0) & 0x100 |
            -(ushort)((local_bb & 0x80) != 0) & 0x200 | -(ushort)((bStack_b9 & 0x80) != 0) & 0x400 |
            -(ushort)((uStack_ff & 0x80) != 0) & 0x1000;
  }
  else {
    iVar2 = (**(code **)(*(int *)g_GameContext._16_4_ + 0x24))
                      (g_GameContext._16_4_,0x100,&local_10c);
    if (iVar2 == -0x7ff8ffe2) {
      (**(code **)(*(int *)g_GameContext._16_4_ + 0x1c))(g_GameContext._16_4_);
      FUN_0041cfc0((uint)extraout_var << 0x10);
      goto LAB_0041e0a5;
    }
    uVar1 = -(ushort)((uStack_45 & 0x8000) != 0) & 0x10 | -(ushort)((local_3c & 0x80) != 0) & 0x20 |
            -(ushort)((bStack_41 & 0x80) != 0) & 0x40 | -(ushort)((uStack_3f & 0x80) != 0) & 0x80 |
            -(ushort)((local_c4 & 0x80) != 0) & 0x10 | -(ushort)((bStack_bc & 0x80) != 0) & 0x20 |
            -(ushort)((bStack_c1 & 0x80) != 0) & 0x40 | -(ushort)((local_bf & 0x80) != 0) & 0x80 |
            -(ushort)((bStack_c5 & 0x80) != 0) & 0x50 | -(ushort)((uStack_c3 & 0x80) != 0) & 0x90 |
            -(ushort)((bStack_bd & 0x80) != 0) & 0x60 | -(ushort)((local_bb & 0x80) != 0) & 0xa0 |
            -(ushort)((uStack_45 & 0x80) != 0) & 0x800 | (ushort)((local_e0 & 0x80) != 0) |
            -(ushort)((bStack_df & 0x80) != 0) & 2 | -(ushort)((bStack_e2 & 0x80) != 0) & 4 |
            -(ushort)((local_d6 & 0x80) != 0) & 4 | -(ushort)((local_10b & 0x80) != 0) & 8 |
            -(ushort)((uStack_ef & 0x80) != 0) & 0x100 | -(ushort)((local_6f & 0x80) != 0) & 0x100 |
            -(ushort)((uStack_ff >> 0x18 & 0x80) != 0) & 0x200 |
            -(ushort)((local_ed & 0x80) != 0) & 0x400 | -(ushort)((bStack_f0 & 0x80) != 0) & 0x1000;
  }
  FUN_0041cfc0(uVar1);
LAB_0041e0a5:
  __security_check_cookie(local_8 ^ unaff_retaddr);
  return;
}

