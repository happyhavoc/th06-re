
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041c3f3(float param_1)

{
  double dVar1;
  vec3f local_3c;
  vec3f local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
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
  local_8 = fload_withFB(0);
  local_8 = local_c / local_8;
  local_24 = 0;
  local_20 = 0x3f800000;
  local_1c = 0;
  local_30.y = -local_c + _DAT_0069d704;
  local_30.x = local_10 + _DAT_0069d700;
  local_30.z = 0.0;
  local_3c.z = -local_8 * _DAT_0069d708;
  local_3c.x = local_10;
  local_3c.y = -local_c;
  _D3DXMatrixLookAtLH_16(&g_GameContext.view_matrix,&local_3c,&local_30,&local_24);
  dVar1 = _fabs((double)local_8);
  _DAT_0069d6fc = (float)dVar1;
  _D3DXMatrixPerspectiveFovLH_20
            ((float *)&g_GameContext.projection_matrix,local_18,local_14,100.0,param_1 + 10000.0);
  (*(g_GameContext.d3dDevice)->lpVtbl->SetTransform)
            (g_GameContext.d3dDevice,D3DTS_VIEW,(D3DMATRIX *)0x6c6d60);
  (*(g_GameContext.d3dDevice)->lpVtbl->SetTransform)
            (g_GameContext.d3dDevice,D3DTS_PROJECTION,(D3DMATRIX *)0x6c6da0);
  return;
}

