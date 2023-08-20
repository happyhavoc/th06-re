
void FUN_0041e0c0(void)

{
  uint unaff_retaddr;
  int local_110;
  byte local_10c [260];
  uint local_8;
  
  local_8 = __security_cookie ^ unaff_retaddr;
  GetKeyboardState(local_10c);
  for (local_110 = 0; local_110 < 0x100; local_110 = local_110 + 1) {
    local_10c[local_110] = local_10c[local_110] & 0x7f;
  }
  SetKeyboardState(local_10c);
  __security_check_cookie(local_8 ^ unaff_retaddr);
  return;
}

