
void FUN_0041d820(void)

{
  DWORD_PTR cookie;
  ushort uVar1;
  int iVar2;
  ushort extraout_var;
  char local_10c [256];
  
  cookie = __security_cookie;
  if (g_GameContext._16_4_ == 0) {
    GetKeyboardState((PBYTE)local_10c);
    uVar1 = -(ushort)((local_10c[38] & 0x80U) != 0) & 0x10 |
            -(ushort)((local_10c[40] & 0x80U) != 0) & 0x20 |
            -(ushort)((local_10c[37] & 0x80U) != 0) & 0x40 |
            -(ushort)((local_10c[39] & 0x80U) != 0) & 0x80 |
            -(ushort)((local_10c[104] & 0x80U) != 0) & 0x10 |
            -(ushort)((local_10c[98] & 0x80U) != 0) & 0x20 |
            -(ushort)((local_10c[100] & 0x80U) != 0) & 0x40 |
            -(ushort)((local_10c[102] & 0x80U) != 0) & 0x80 |
            -(ushort)((local_10c[103] & 0x80U) != 0) & 0x50 |
            -(ushort)((local_10c[105] & 0x80U) != 0) & 0x90 |
            -(ushort)((local_10c[97] & 0x80U) != 0) & 0x60 |
            -(ushort)((local_10c[99] & 0x80U) != 0) & 0xa0 |
            -(ushort)((local_10c[36] & 0x80U) != 0) & 0x800 |
            (ushort)((local_10c._90_2_ & 0x80) != 0) | -(ushort)((local_10c._88_2_ & 0x80) != 0) & 2
            | -(ushort)(((uint)local_10c._13_4_ >> 0x18 & 0x80) != 0) & 4 |
            -(ushort)((local_10c[27] & 0x80U) != 0) & 8 |
            -(ushort)((local_10c._17_4_ & 0x80) != 0) & 0x100 |
            -(ushort)((local_10c._81_2_ & 0x80) != 0) & 0x200 |
            -(ushort)((local_10c[83] & 0x80U) != 0) & 0x400 |
            -(ushort)((local_10c._13_4_ & 0x80) != 0) & 0x1000;
  }
  else {
    iVar2 = (**(code **)(*(int *)g_GameContext._16_4_ + 0x24))(g_GameContext._16_4_,0x100,local_10c)
    ;
    if (iVar2 == -0x7ff8ffe2) {
      (**(code **)(*(int *)g_GameContext._16_4_ + 0x1c))(g_GameContext._16_4_);
      FUN_0041cfc0((uint)extraout_var << 0x10);
      goto LAB_0041e0a5;
    }
    uVar1 = -(ushort)((local_10c._199_4_ & 0x8000) != 0) & 0x10 |
            -(ushort)((local_10c._208_4_ & 0x80) != 0) & 0x20 |
            -(ushort)((local_10c[203] & 0x80U) != 0) & 0x40 |
            -(ushort)((local_10c._205_2_ & 0x80) != 0) & 0x80 |
            -(ushort)((local_10c[72] & 0x80U) != 0) & 0x10 |
            -(ushort)((local_10c[80] & 0x80U) != 0) & 0x20 |
            -(ushort)((local_10c[75] & 0x80U) != 0) & 0x40 |
            -(ushort)((local_10c._77_2_ & 0x80) != 0) & 0x80 |
            -(ushort)((local_10c[71] & 0x80U) != 0) & 0x50 |
            -(ushort)((local_10c._73_2_ & 0x80) != 0) & 0x90 |
            -(ushort)((local_10c[79] & 0x80U) != 0) & 0x60 |
            -(ushort)((local_10c._81_2_ & 0x80) != 0) & 0xa0 |
            -(ushort)((local_10c._199_4_ & 0x80) != 0) & 0x800 |
            (ushort)((local_10c[44] & 0x80U) != 0) | -(ushort)((local_10c[45] & 0x80U) != 0) & 2 |
            -(ushort)((local_10c[42] & 0x80U) != 0) & 4 |
            -(ushort)((local_10c._54_4_ & 0x80) != 0) & 4 |
            -(ushort)((local_10c._1_4_ & 0x80) != 0) & 8 |
            -(ushort)((local_10c._29_2_ & 0x80) != 0) & 0x100 |
            -(ushort)((local_10c._157_4_ & 0x80) != 0) & 0x100 |
            -(ushort)(((uint)local_10c._13_4_ >> 0x18 & 0x80) != 0) & 0x200 |
            -(ushort)((local_10c[31] & 0x80U) != 0) & 0x400 |
            -(ushort)((local_10c[28] & 0x80U) != 0) & 0x1000;
  }
  FUN_0041cfc0(uVar1);
LAB_0041e0a5:
  __security_check_cookie(cookie);
  return;
}

