
void __fastcall FUN_004033b0(int param_1)

{
  byte *local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_8 = param_1 + 0x7134;
  g_GameContext.viewport.X = __ftol2((double)VIEWPORT_X);
  g_GameContext.viewport.Y = __ftol2((double)VIEWPORT_Y);
  g_GameContext.viewport.Width = __ftol2((double)VIEWPORT_WIDTH);
  g_GameContext.viewport.Height = __ftol2((double)VIEWPORT_HEIGHT);
  (*(g_GameContext.d3d_device)->lpVtbl->SetViewport)
            (g_GameContext.d3d_device,&g_GameContext.viewport);
  for (local_10 = 0; local_10 < 0x203; local_10 = local_10 + 1) {
    if (*(char *)(local_8 + 0x24) != '\0') {
      *(float *)(param_1 + 0x1a0) =
           *(float *)(local_8 + 8) - (float)((uint)*(byte *)(local_8 + 0x25) << 2);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(local_8 + 0xc);
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(local_8 + 0x14);
      local_14 = (byte *)(local_8 + -1 + (uint)*(byte *)(local_8 + 0x25));
      for (local_c = (uint)*(byte *)(local_8 + 0x25); 0 < (int)local_c; local_c = local_c - 1) {
        *(VeryBigStruct0tbl **)(param_1 + 0x1d0) = VERY_BIG_STRUCT->field0_0x0 + *local_14;
        if (*local_14 < 10) {
          FUN_00433590(param_1 + 0x110);
        }
        else {
          *(undefined4 *)(param_1 + 0x14c) = 0x3e400000;
          *(undefined4 *)(param_1 + 0x160) = 0x3d000000;
          FUN_00432ad0(VERY_BIG_STRUCT,param_1 + 0x110);
          *(undefined4 *)(param_1 + 0x14c) = 0x3d000000;
          *(undefined4 *)(param_1 + 0x160) = 0x3d000000;
        }
        *(float *)(param_1 + 0x1a0) = *(float *)(param_1 + 0x1a0) + 8.0;
        local_14 = local_14 + -1;
      }
    }
    local_8 = local_8 + 0x28;
  }
  return;
}

