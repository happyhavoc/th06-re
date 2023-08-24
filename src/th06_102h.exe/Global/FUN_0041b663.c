
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041b663(uint *param_1)

{
  undefined4 uVar1;
  undefined local_c;
  uint local_8;
  
  if (*(char *)(param_1 + 0x609) != '\0') {
    if ((DAT_0069d904 != 0) && (DAT_0069d904 != DAT_0069d908)) {
      g_GameContext._396_4_ = 1;
    }
    param_1[0x60a] = param_1[0x60a] + 1;
    if (param_1[0x60a] == 0xe10) {
      FUN_0042fd30(2,0x78,0,0,0);
    }
    if (0xe87 < (int)param_1[0x60a]) {
      g_GameContext._396_4_ = 1;
    }
  }
  if ((((*(char *)(param_1 + 0x608) == '\0') && (*(char *)((int)param_1 + 0x181f) == '\0')) &&
      (*(char *)(param_1 + 0x609) == '\0')) &&
     (((DAT_0069d904 & 8) != 0 && ((DAT_0069d904 & 8) != (DAT_0069d908 & 8))))) {
    *(undefined *)((int)param_1 + 0x181f) = 1;
    _DAT_0069d6dc = 0x42000000;
    _DAT_0069d6e0 = 0x41800000;
    _DAT_0069d6e4 = 0x43c00000;
    _DAT_0069d6e8 = 0x43e00000;
    g_GameContext._408_4_ = 3;
  }
  if ((*(char *)(param_1 + 0x608) == '\0') && (*(char *)((int)param_1 + 0x181f) == '\0')) {
    local_c = 1;
  }
  else {
    local_c = 0;
  }
  *(undefined *)((int)param_1 + 0x1821) = local_c;
  g_GameContext.viewport.X = __ftol2((double)(float)param_1[0x68f]);
  g_GameContext.viewport.Y = __ftol2((double)(float)param_1[0x690]);
  g_GameContext.viewport.Width = __ftol2((double)(float)param_1[0x691]);
  g_GameContext.viewport.Height = __ftol2((double)(float)param_1[0x692]);
  g_GameContext.viewport.MinZ = 0.5;
  g_GameContext.viewport.MaxZ = 1.0;
  FUN_0041c3f3(0);
  (*(g_GameContext.d3d_device)->lpVtbl->SetViewport)
            (g_GameContext.d3d_device,(D3DVIEWPORT8 *)0x6c6de0);
  (*(g_GameContext.d3d_device)->lpVtbl->Clear)
            (g_GameContext.d3d_device,0,(D3DRECT *)0x0,2,DAT_00487b60,1.0,0);
  if (((*(char *)((int)param_1 + 0x181f) == '\x01') || (*(char *)((int)param_1 + 0x181f) == '\x02'))
     || (*(char *)(param_1 + 0x608) != '\0')) {
    uVar1 = 3;
  }
  else {
    if (999999999 < param_1[1]) {
      param_1[1] = 0x3b9ac9f6;
    }
    if (*param_1 != param_1[1]) {
      if (param_1[1] < *param_1) {
        param_1[1] = *param_1;
      }
      local_8 = param_1[1] - *param_1 >> 5;
      if (local_8 < 0x1343e) {
        if (local_8 < 10) {
          local_8 = 10;
        }
      }
      else {
        local_8 = 0x1343e;
      }
      local_8 = local_8 - local_8 % 10;
      if (param_1[2] < local_8) {
        param_1[2] = local_8;
      }
      if (param_1[1] < *param_1 + param_1[2]) {
        param_1[2] = param_1[1] - *param_1;
      }
      *param_1 = *param_1 + param_1[2];
      if (param_1[1] <= *param_1) {
        param_1[2] = 0;
        *param_1 = param_1[1];
      }
      if ((-1 < *(char *)(param_1 + 0x607)) &&
         (*(uint *)(&DAT_004764b0 + *(char *)(param_1 + 0x607) * 4) <= *param_1)) {
        if (*(char *)((int)param_1 + 0x181a) < '\b') {
          *(char *)((int)param_1 + 0x181a) = *(char *)((int)param_1 + 0x181a) + '\x01';
          FUN_004311e0(0x1c,0);
        }
        DAT_0069bc30 = DAT_0069bc30 & 0xfffffffc | 2;
        *(char *)(param_1 + 0x607) = *(char *)(param_1 + 0x607) + '\x01';
        FUN_0041c57e(200);
      }
      if (param_1[3] < *param_1) {
        param_1[3] = *param_1;
      }
    }
    param_1[0x68c] = param_1[0x68c] + 1;
    uVar1 = 1;
  }
  return uVar1;
}

