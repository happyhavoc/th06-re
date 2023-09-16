
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042d35a(void)

{
  int in_ECX;
  float local_34;
  float local_20;
  float local_14;
  float local_10;
  undefined4 uStack_c;
  int local_8;
  
  if ((0xe < *(int *)(in_ECX + 8)) && (*(int *)(in_ECX + 8) < 0x11)) {
    local_8 = in_ECX + 0x2790;
    g_AsciiManager.color = *(D3DCOLOR *)(in_ECX + 0x280c);
    if (_DAT_0069bcb0 < 4) {
      local_34 = (float)DAT_0069d70c / 89500.0;
    }
    else {
      local_34 = (float)DAT_0069d70c / 39600.0;
    }
    uStack_c = *(undefined4 *)(in_ECX + 0x2828);
    local_14 = *(float *)(in_ECX + 0x2820) + 224.0;
    local_10 = *(float *)(in_ECX + 0x2824) + 32.0;
    FUN_00401650(0x47b900,&local_14,(char *)&PTR_DAT_0046bcc0);
    local_10 = local_10 + 22.0;
    FUN_00401530(0x47b900,&local_14,(&PTR_s__Easy_00478504)[_DAT_0069bcb0]);
    local_10 = local_10 + 22.0;
    if ((_DAT_0069bcb0 == 0) || (DAT_0069d4c2 == '\0')) {
      FUN_00401650(0x47b900,&local_14,"    %3.2f%%",(double)(local_34 * 100.0));
    }
    else {
      FUN_00401650(0x47b900,&local_14,"      100%%");
    }
    local_10 = local_10 + 22.0;
    FUN_00401650(0x47b900,&local_14,(char *)&PTR_DAT_0046bcc0);
    local_10 = local_10 + 22.0;
    FUN_00401650(0x47b900,&local_14,(char *)&PTR_DAT_0046bcc0);
    local_10 = local_10 + 22.0;
    FUN_00401650(0x47b900,&local_14,(char *)&PTR_DAT_0046bcc0);
    local_10 = local_10 + 22.0;
    FUN_00401650(0x47b900,&local_14,(char *)&PTR_DAT_0046bcc0);
    local_20 = _DAT_006c6ecc / _DAT_006c6ed0 - 0.5;
    local_20 = local_20 + local_20;
    if (local_20 < 0.0 == NAN(local_20)) {
      if (1.0 <= local_20) {
        local_20 = 1.0;
      }
    }
    else {
      local_20 = 0.0;
    }
    local_10 = local_10 + 22.0;
    FUN_00401650(0x47b900,&local_14,"    %3.2f%%",(double)((1.0 - local_20) * 100.0));
    g_AsciiManager.color = 0xffffffff;
  }
  return 0;
}

