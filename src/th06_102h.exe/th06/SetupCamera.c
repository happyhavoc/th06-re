
void th06::SetupCamera(float renderDistance)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  double dVar5;
  D3DXVECTOR3 eyeVec;
  D3DXVECTOR3 atVec;
  D3DXVECTOR3 upVec;
  
  uVar4 = (ulonglong)g_Supervisor.viewport.Width;
  fVar1 = (float)(ulonglong)g_Supervisor.viewport.Height / 2.0;
  uVar3 = (ulonglong)g_Supervisor.viewport.Width;
  uVar2 = (ulonglong)g_Supervisor.viewport.Height;
                    /* Calculates fov. Seems to be calculated as tan(D3DXToRadians(60) / 2) */
  dVar5 = tan(0.2617993950843811);
                    /* Returns ~52524.5716512 I believe */
  upVec.x = 0.0;
  upVec.y = 1.0;
  upVec.z = 0.0;
  atVec.y = -fVar1 + g_GameManager.stage_camera_facing_dir.y;
  atVec.x = (float)uVar4 / 2.0 + g_GameManager.stage_camera_facing_dir.x;
  atVec.z = 0.0;
  eyeVec.z = -(fVar1 / (float)dVar5) * g_GameManager.stage_camera_facing_dir.z;
  eyeVec.y = -fVar1;
  eyeVec.x = (float)uVar4 / 2.0;
  D3DXMatrixLookAtLH(&g_Supervisor.viewMatrix,&eyeVec,&atVec,&upVec);
  dVar5 = _fabs((double)(fVar1 / (float)dVar5));
  g_GameManager.cameraDistance = (float)dVar5;
  D3DXMatrixPerspectiveFovLH
            (&g_Supervisor.projectionMatrix,0.5235988,(float)uVar3 / (float)uVar2,100.0,
             renderDistance + 10000.0);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTransform)
            (g_Supervisor.d3dDevice,D3DTS_VIEW,&g_Supervisor.viewMatrix);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTransform)
            (g_Supervisor.d3dDevice,D3DTS_PROJECTION,&g_Supervisor.projectionMatrix);
  return;
}

