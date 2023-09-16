
undefined4 FUN_00438bc1(void)

{
  int iVar1;
  int in_ECX;
  int local_c;
  int local_8;
  
  FUN_00401650(0x47b900,(undefined4 *)(in_ECX + 0x68b0),"No.   Name      Date     Player   Rank");
  iVar1 = *(int *)(in_ECX + 0x81e8) - *(int *)(in_ECX + 0x81e8) % 0xf;
  local_8 = in_ECX + 0x6820;
  for (local_c = iVar1; (local_c < iVar1 + 0xf && (local_c < *(int *)(in_ECX + 0x81ec)));
      local_c = local_c + 1) {
    if ((g_GameContext.cfg.opts >> 8 & 1 | g_GameContext.cfg.opts & 1) == 0) {
      if (local_c == *(int *)(in_ECX + 0x81e8)) {
        g_AsciiManager.color = 0xffff8080;
      }
      else {
        g_AsciiManager.color = 0xff808080;
      }
    }
    else {
      g_AsciiManager.field10_0x6234 = (uint)(local_c == *(int *)(in_ECX + 0x81e8));
      if (local_c == *(int *)(in_ECX + 0x81e8)) {
        g_AsciiManager.color = 0xffffffff;
      }
      else {
        g_AsciiManager.color = 0xff808080;
      }
    }
    FUN_00401650(0x47b900,(undefined4 *)(local_8 + 0x1a0),"%s %8s  %8s %7s  %7s",
                 in_ECX + 0xfa3c + local_c * 8,in_ECX + 0xfc35 + local_c * 0x50,
                 in_ECX + 0xfc2c + local_c * 0x50,
                 (&PTR_s_ReimuA_004786b0)[*(byte *)(in_ECX + 0xfc22 + local_c * 0x50)],
                 (&PTR_s_Easy_004786c0)[*(byte *)(in_ECX + 0xfc23 + local_c * 0x50)]);
    local_8 = local_8 + 0x110;
  }
  if ((*(int *)(in_ECX + 0x81f0) == 0xf) && (*(int *)(in_ECX + 0x10edc) != 0)) {
    g_AsciiManager.color = 0xffffffff;
    g_AsciiManager.field10_0x6234 = 0;
    FUN_00401650(0x47b900,(undefined4 *)(in_ECX + 0x67a0),"       %2.3f%%",
                 (double)*(float *)(*(int *)(in_ECX + 0x10edc) + 0x2c));
    FUN_00401650(0x47b900,(undefined4 *)(in_ECX + 0x79b0),"Stage  LastScore");
    local_8 = in_ECX + 0x7920;
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      if ((g_GameContext.cfg.opts >> 8 & 1 | g_GameContext.cfg.opts & 1) == 0) {
        if (local_c == *(int *)(in_ECX + 0x81a0)) {
          g_AsciiManager.color = 0xffff8080;
        }
        else {
          g_AsciiManager.color = 0xff808080;
        }
      }
      else {
        g_AsciiManager.field10_0x6234 = (uint)(local_c == *(int *)(in_ECX + 0x81a0));
        if (local_c == *(int *)(in_ECX + 0x81a0)) {
          g_AsciiManager.color = 0xffffffff;
        }
        else {
          g_AsciiManager.color = 0xff808080;
        }
      }
      if (*(int *)(*(int *)(in_ECX + 0x10edc) + 0x34 + local_c * 4) == 0) {
        FUN_00401650(0x47b900,(undefined4 *)(local_8 + 0x1a0),"%s ---------");
      }
      else {
        FUN_00401650(0x47b900,(undefined4 *)(local_8 + 0x1a0),"%s %9d",
                     (&PTR_s_Stage1_00478694)[local_c]);
      }
      local_8 = local_8 + 0x110;
    }
  }
  g_AsciiManager.color = 0xffffffff;
  g_AsciiManager.field10_0x6234 = 0;
  return 0;
}

