
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041c3f3(float param_1)

{
  double dVar1;
  undefined2 extraout_ST0h;
  D3DXVECTOR3 local_3c;
  D3DXVECTOR3 local_30;
  D3DXVECTOR3 local_24;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = (float)(ulonglong)g_GameContext.viewport.Width / 2.0;
  local_c = (float)(ulonglong)g_GameContext.viewport.Height / 2.0;
  local_14 = (float)(ulonglong)g_GameContext.viewport.Width /
             (float)(ulonglong)g_GameContext.viewport.Height;
  local_18 = 0.5235988;
  dVar1 = fload_withFB(0x3fd0c15240000000);
  local_8 = local_c / (float)(float10)CONCAT28(extraout_ST0h,dVar1);
  local_24.x = 0.0;
  local_24.y = 1.0;
  local_24.z = 0.0;
  local_30.y = -local_c + _DAT_0069d704;
  local_30.x = local_10 + _DAT_0069d700;
  local_30.z = 0.0;
  local_3c.z = -local_8 * _DAT_0069d708;
  local_3c.x = local_10;
  local_3c.y = -local_c;
  _D3DXMatrixLookAtLH_16(&g_GameContext.viewMatrix,&local_3c,&local_30,&local_24);
  dVar1 = _fabs((double)local_8);
  _DAT_0069d6fc = (float)dVar1;
  _D3DXMatrixPerspectiveFovLH_20
            (&g_GameContext.projectionMatrix,local_18,local_14,100.0,param_1 + 10000.0);
  (*(g_GameContext.d3dDevice)->lpVtbl->SetTransform)
            (g_GameContext.d3dDevice,D3DTS_VIEW,&g_GameContext.viewMatrix);
  (*(g_GameContext.d3dDevice)->lpVtbl->SetTransform)
            (g_GameContext.d3dDevice,D3DTS_PROJECTION,&g_GameContext.projectionMatrix);
  return;
}

