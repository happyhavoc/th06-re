
void FUN_0041c28c(float param_1)

{
  double dVar1;
  D3DXVECTOR3 local_3c;
  D3DXVECTOR3 local_30;
  D3DXVECTOR3 local_24;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = (float)(ulonglong)g_Supervisor.viewport.Width / 2.0;
  local_c = (float)(ulonglong)g_Supervisor.viewport.Height / 2.0;
  local_14 = (float)(ulonglong)g_Supervisor.viewport.Width /
             (float)(ulonglong)g_Supervisor.viewport.Height;
  local_18 = 0.5235988;
  dVar1 = tan(0.2617993950843811);
  local_8 = local_c / (float)dVar1;
  local_24.x = 0.0;
  local_24.y = 1.0;
  local_24.z = 0.0;
  local_30.x = local_10;
  local_30.y = -local_c;
  local_30.z = 0.0;
  local_3c.x = local_10;
  local_3c.y = -local_c;
  local_3c.z = -local_8;
  D3DXMatrixLookAtLH(&g_Supervisor.viewMatrix,&local_3c,&local_30,&local_24);
  dVar1 = _fabs((double)local_8);
  g_GameManager.field53_0x1a5c = (int)(float)dVar1;
  D3DXMatrixPerspectiveFovLH
            (&g_Supervisor.projectionMatrix,local_18,local_14,100.0,param_1 + 10000.0);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTransform)
            (g_Supervisor.d3dDevice,D3DTS_VIEW,&g_Supervisor.viewMatrix);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTransform)
            (g_Supervisor.d3dDevice,D3DTS_PROJECTION,&g_Supervisor.projectionMatrix);
  return;
}

