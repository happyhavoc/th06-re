
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004031e0(void)

{
  int in_ECX;
  byte *local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_8 = in_ECX + 0x7134;
  g_GameContext.viewport.X = __ftol2((double)_DAT_0069d6dc);
  g_GameContext.viewport.Y = __ftol2((double)_DAT_0069d6e0);
  g_GameContext.viewport.Width = __ftol2((double)_DAT_0069d6e4);
  g_GameContext.viewport.Height = __ftol2((double)_DAT_0069d6e8);
  (*(g_GameContext.d3d_device)->lpVtbl->SetViewport)
            (g_GameContext.d3d_device,(D3DVIEWPORT8 *)0x6c6de0);
  for (local_10 = 0; local_10 < 0x203; local_10 = local_10 + 1) {
    if (*(char *)(local_8 + 0x24) != '\0') {
      *(float *)(in_ECX + 0x1a0) =
           *(float *)(local_8 + 8) - (float)((uint)*(byte *)(local_8 + 0x25) << 2);
      *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(local_8 + 0xc);
      *(undefined4 *)(in_ECX + 0x18c) = *(undefined4 *)(local_8 + 0x14);
      local_14 = (byte *)(local_8 + -1 + (uint)*(byte *)(local_8 + 0x25));
      for (local_c = (uint)*(byte *)(local_8 + 0x25); 0 < (int)local_c; local_c = local_c - 1) {
        *(VeryBigStruct0tbl **)(in_ECX + 0x1d0) = VERY_BIG_STRUCT->field0_0x0 + *local_14;
        if (*local_14 < 10) {
          FUN_00433590(in_ECX + 0x110);
        }
        else {
          *(undefined4 *)(in_ECX + 0x14c) = 0x3e400000;
          *(undefined4 *)(in_ECX + 0x160) = 0x3d000000;
          FUN_00433590(in_ECX + 0x110);
          *(undefined4 *)(in_ECX + 0x14c) = 0x3d000000;
          *(undefined4 *)(in_ECX + 0x160) = 0x3d000000;
        }
        *(float *)(in_ECX + 0x1a0) = *(float *)(in_ECX + 0x1a0) + 8.0;
        local_14 = local_14 + -1;
      }
    }
    local_8 = local_8 + 0x28;
  }
  return;
}
