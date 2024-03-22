
int __thiscall Stage::AddedCallback(Stage *this,Stage *arg)

{
  ZunResult ZVar1;
  int iVar2;
  
  (arg->scriptTime).current = 0;
  (arg->scriptTime).subFrame = 0.0;
  (arg->scriptTime).previous = -999;
  arg->instructionIndex = 0;
  (arg->position).x = 0.0;
  (arg->position).y = 0.0;
  (arg->position).z = 0.0;
  arg->spellcardState = NOT_RUNNING;
  arg->skyFogInterpDuration = 0;
  ZVar1 = LoadStageData(arg,(&PTR_s_dummy_004760e0)[g_GameManager.current_stage * 2],
                        (&PTR_s_dummy_004760e4)[g_GameManager.current_stage * 2]);
  if (ZVar1 == ZUN_SUCCESS) {
    (arg->skyFog).color = 0xff000000;
    (arg->skyFog).nearPlane = 200.0;
    (arg->skyFog).farPlane = 500.0;
    (arg->facingDirInterpFinal).x = 0.0;
    (arg->facingDirInterpFinal).y = 0.0;
    (arg->facingDirInterpFinal).z = 1.0;
    (arg->facingDirInterpInitial).x = 0.0;
    (arg->facingDirInterpInitial).y = 0.0;
    (arg->facingDirInterpInitial).z = 1.0;
    arg->facingDirInterpDuration = 1;
    (arg->facingDirInterpTimer).current = 0;
    (arg->facingDirInterpTimer).subFrame = 0.0;
    (arg->facingDirInterpTimer).previous = -999;
    arg->unpauseFlag = '\0';
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
              (g_Supervisor.d3dDevice,D3DRS_FOGCOLOR,(arg->skyFog).color);
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
              (g_Supervisor.d3dDevice,D3DRS_FOGSTART,(DWORD)(arg->skyFog).nearPlane);
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
              (g_Supervisor.d3dDevice,D3DRS_FOGEND,(DWORD)(arg->skyFog).farPlane);
    iVar2 = 0;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

