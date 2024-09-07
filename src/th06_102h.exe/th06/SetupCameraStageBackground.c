
void th06::SetupCameraStageBackground(float extraRenderDistance)

{
  double dVar1;
  D3DXVECTOR3 eyeVec;
  D3DXVECTOR3 atVec;
  D3DXVECTOR3 upVec;
  float fov;
  float aspectRatio;
  float viewportMiddleWidth;
  float viewportMiddleHeight;
  float cameraDistance;
  
  viewportMiddleWidth = (float)(ulonglong)g_Supervisor.viewport.Width / 2.0;
  viewportMiddleHeight = (float)(ulonglong)g_Supervisor.viewport.Height / 2.0;
  aspectRatio = (float)(ulonglong)g_Supervisor.viewport.Width /
                (float)(ulonglong)g_Supervisor.viewport.Height;
  fov = 0.5235988;
  dVar1 = tan(0.2617993950843811);
  cameraDistance = viewportMiddleHeight / (float)dVar1;
  upVec.x = 0.0;
  upVec.y = 1.0;
  upVec.z = 0.0;
  atVec.x = viewportMiddleWidth;
  atVec.y = -viewportMiddleHeight;
  atVec.z = 0.0;
  eyeVec.x = viewportMiddleWidth;
  eyeVec.y = -viewportMiddleHeight;
  eyeVec.z = -cameraDistance;
  D3DXMatrixLookAtLH(&g_Supervisor.viewMatrix,&eyeVec,&atVec,&upVec);
  dVar1 = _fabs((double)cameraDistance);
  g_GameManager.cameraDistance = (float)dVar1;
  D3DXMatrixPerspectiveFovLH
            (&g_Supervisor.projectionMatrix,fov,aspectRatio,100.0,extraRenderDistance + 10000.0);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTransform)
            (g_Supervisor.d3dDevice,D3DTS_VIEW,&g_Supervisor.viewMatrix);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTransform)
            (g_Supervisor.d3dDevice,D3DTS_PROJECTION,&g_Supervisor.projectionMatrix);
  return;
}

