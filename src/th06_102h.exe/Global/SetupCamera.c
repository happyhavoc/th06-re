
void SetupCamera(float renderDistance)

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
                    /* Calculates fov. Seems to be calculated as tan(D3DXToRadians(60) / 2) */
  dVar1 = tan(0.2617993950843811);
                    /* Returns ~52524.5716512 I believe */
  cameraDistance = viewportMiddleHeight / (float)dVar1;
  upVec.x = 0.0;
  upVec.y = 1.0;
  upVec.z = 0.0;
  atVec.y = -viewportMiddleHeight + g_GameManager.stage_camera_facing_dir.y;
  atVec.x = viewportMiddleWidth + g_GameManager.stage_camera_facing_dir.x;
  atVec.z = 0.0;
  eyeVec.z = -cameraDistance * g_GameManager.stage_camera_facing_dir.z;
  eyeVec.x = viewportMiddleWidth;
  eyeVec.y = -viewportMiddleHeight;
  D3DXMatrixLookAtLH(&g_Supervisor.viewMatrix,&eyeVec,&atVec,&upVec);
  dVar1 = _fabs((double)cameraDistance);
  g_GameManager.fieldOfView = (int)(float)dVar1;
  D3DXMatrixPerspectiveFovLH
            (&g_Supervisor.projectionMatrix,fov,aspectRatio,100.0,renderDistance + 10000.0);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTransform)
            (g_Supervisor.d3dDevice,D3DTS_VIEW,&g_Supervisor.viewMatrix);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTransform)
            (g_Supervisor.d3dDevice,D3DTS_PROJECTION,&g_Supervisor.projectionMatrix);
  return;
}

