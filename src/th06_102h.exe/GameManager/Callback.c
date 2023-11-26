
undefined4 __thiscall GameManager::Callback(GameManager *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined uVar3;
  
  if (*(char *)(param_1 + 0x609) != '\0') {
    if ((g_CurFrameInput != 0) && (g_CurFrameInput != g_LastFrameInput)) {
      g_Supervisor.curState = 1;
    }
    param_1[0x60a] = param_1[0x60a] + 1;
    if (param_1[0x60a] == 0xe10) {
      FUN_0042fd30(2,0x78,0,0,0,this,this);
    }
    if (0xe87 < (int)param_1[0x60a]) {
      g_Supervisor.curState = 1;
    }
  }
  if ((((*(char *)(param_1 + 0x608) == '\0') && (*(char *)((int)param_1 + 0x181f) == '\0')) &&
      (*(char *)(param_1 + 0x609) == '\0')) &&
     (((g_CurFrameInput & 8) != 0 && ((g_CurFrameInput & 8) != (g_LastFrameInput & 8))))) {
    *(undefined *)((int)param_1 + 0x181f) = 1;
    g_GameManager.arcade_region_top_left_pos.x = 32.0;
    g_GameManager.arcade_region_top_left_pos.y = 16.0;
    g_GameManager.arcade_region_size.x = 384.0;
    g_GameManager.arcade_region_size.y = 448.0;
    g_Supervisor.unk198 = 3;
  }
  if ((*(char *)(param_1 + 0x608) == '\0') && (*(char *)((int)param_1 + 0x181f) == '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined *)((int)param_1 + 0x1821) = uVar3;
  g_Supervisor.viewport.X = __ftol2((double)(float)param_1[0x68f]);
  g_Supervisor.viewport.Y = __ftol2((double)(float)param_1[0x690]);
  g_Supervisor.viewport.Width = __ftol2((double)(float)param_1[0x691]);
  g_Supervisor.viewport.Height = __ftol2((double)(float)param_1[0x692]);
  g_Supervisor.viewport.MinZ = 0.5;
  g_Supervisor.viewport.MaxZ = 1.0;
  FUN_0041c3f3(0);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)(g_Supervisor.d3dDevice,(D3DVIEWPORT8 *)0x6c6de0);
  (*(g_Supervisor.d3dDevice)->lpVtbl->Clear)
            (g_Supervisor.d3dDevice,0,(D3DRECT *)0x0,2,g_Stage.skyFog.color,1.0,0);
  if (((*(char *)((int)param_1 + 0x181f) == '\x01') || (*(char *)((int)param_1 + 0x181f) == '\x02'))
     || (*(char *)(param_1 + 0x608) != '\0')) {
    uVar2 = 3;
  }
  else {
    if (999999999 < param_1[1]) {
      param_1[1] = 0x3b9ac9f6;
    }
    if (*param_1 != param_1[1]) {
      if (param_1[1] < *param_1) {
        param_1[1] = *param_1;
      }
      uVar1 = param_1[1] - *param_1 >> 5;
      if (uVar1 < 0x1343e) {
        if (uVar1 < 10) {
          uVar1 = 10;
        }
      }
      else {
        uVar1 = 0x1343e;
      }
      uVar1 = uVar1 - uVar1 % 10;
      if (param_1[2] < uVar1) {
        param_1[2] = uVar1;
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
          FUN_004311e0(0x1c);
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
    uVar2 = 1;
  }
  return uVar2;
}

