
int Stage::OnUpdate(Stage *arg)

{
  float fVar1;
  float fVar2;
  float fVar3;
  StdRawInstr *pSVar4;
  long lVar5;
  int local_24;
  float local_20;
  StdRawInstr *local_c;
  
  if (arg->stdData != (byte *)0x0) {
    if ((char)g_GameManager.field23_0x2c == '\0') {
      do {
        local_c = arg->beginningOfScript + arg->instructionIndex;
        switch(local_c->field1_0x4) {
        case 0:
          if (local_c->field0_0x0 == -1) {
            (arg->positionInterpInitial).x = *(float *)&local_c->field_0x8;
            (arg->positionInterpInitial).y = *(float *)&local_c->field_0xc;
            (arg->positionInterpInitial).z = *(float *)&local_c->field_0x10;
            (arg->position).x = (arg->positionInterpInitial).x;
            (arg->position).y = (arg->positionInterpInitial).y;
            (arg->position).z = (arg->positionInterpInitial).z;
          }
          else if (local_c->field0_0x0 <= (arg->scriptTime).current) {
            fVar2 = *(float *)&local_c->field_0x8;
            fVar3 = *(float *)&local_c->field_0xc;
            fVar1 = *(float *)&local_c->field_0x10;
            (arg->position).x = fVar2;
            (arg->position).y = fVar3;
            (arg->position).z = fVar1;
            (arg->positionInterpInitial).x = fVar2;
            (arg->positionInterpInitial).y = fVar3;
            (arg->positionInterpInitial).z = fVar1;
            arg->positionInterpStartTime = local_c->field0_0x0;
            arg->instructionIndex = arg->instructionIndex + 1;
            do {
              pSVar4 = local_c;
              local_c = pSVar4 + 1;
            } while (pSVar4[1].field1_0x4 != 0);
            arg->positionInterpEndTime = local_c->field0_0x0;
            (arg->positionInterpFinal).x = *(float *)&pSVar4[1].field_0x8;
            (arg->positionInterpFinal).y = *(float *)&pSVar4[1].field_0xc;
            (arg->positionInterpFinal).z = *(float *)&pSVar4[1].field_0x10;
          }
        default:
switchD_00403892_caseD_6:
          if (local_c->field0_0x0 != -1) {
            fVar1 = (((float)(arg->scriptTime).current + (arg->scriptTime).subFrame) -
                    (float)arg->positionInterpStartTime) /
                    (float)(arg->positionInterpEndTime - arg->positionInterpStartTime);
            fVar2 = (arg->positionInterpFinal).y;
            fVar3 = (arg->positionInterpFinal).z;
            (arg->position).x =
                 ((arg->positionInterpFinal).x - (arg->positionInterpInitial).x) * fVar1 +
                 (arg->positionInterpInitial).x;
            (arg->position).y =
                 (fVar2 - (arg->positionInterpInitial).y) * fVar1 + (arg->positionInterpInitial).y;
            (arg->position).z =
                 (fVar3 - (arg->positionInterpInitial).z) * fVar1 + (arg->positionInterpInitial).z;
          }
          if (arg->facingDirInterpDuration != 0) {
            if ((arg->facingDirInterpTimer).current < arg->facingDirInterpDuration) {
              (arg->facingDirInterpTimer).previous = (arg->facingDirInterpTimer).current;
              Supervisor::TickTimer
                        (&g_Supervisor,&(arg->facingDirInterpTimer).current,
                         &(arg->facingDirInterpTimer).subFrame);
            }
            else {
              (arg->facingDirInterpTimer).current = arg->facingDirInterpDuration;
              (arg->facingDirInterpTimer).subFrame = 0.0;
              (arg->facingDirInterpTimer).previous = -999;
            }
            fVar2 = ((float)(arg->facingDirInterpTimer).current +
                    (arg->facingDirInterpTimer).subFrame) / (float)arg->facingDirInterpDuration;
            g_GameManager.stage_camera_facing_dir.x =
                 ((arg->facingDirInterpFinal).x - (arg->facingDirInterpInitial).x) * fVar2 +
                 (arg->facingDirInterpInitial).x;
            g_GameManager.stage_camera_facing_dir.y =
                 ((arg->facingDirInterpFinal).y - (arg->facingDirInterpInitial).y) * fVar2 +
                 (arg->facingDirInterpInitial).y;
            g_GameManager.stage_camera_facing_dir.z =
                 ((arg->facingDirInterpFinal).z - (arg->facingDirInterpInitial).z) * fVar2 +
                 (arg->facingDirInterpInitial).z;
          }
          if (arg->skyFogInterpDuration != 0) {
            (arg->skyFogInterpTimer).previous = (arg->skyFogInterpTimer).current;
            Supervisor::TickTimer
                      (&g_Supervisor,&(arg->skyFogInterpTimer).current,
                       &(arg->skyFogInterpTimer).subFrame);
            local_20 = ((float)(arg->skyFogInterpTimer).current + (arg->skyFogInterpTimer).subFrame)
                       / (float)arg->skyFogInterpDuration;
            if (1.0 <= local_20) {
              local_20 = 1.0;
            }
            for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
              lVar5 = __ftol2((double)(((float)(uint)*(byte *)((int)&(arg->skyFogInterpFinal).color
                                                              + local_24) -
                                       (float)(uint)*(byte *)((int)&(arg->skyFogInterpInitial).color
                                                             + local_24)) * local_20 +
                                      (float)(uint)*(byte *)((int)&(arg->skyFogInterpInitial).color
                                                            + local_24)));
              *(char *)((int)&(arg->skyFog).color + local_24) = (char)lVar5;
            }
            (arg->skyFog).nearPlane =
                 ((arg->skyFogInterpFinal).nearPlane - (arg->skyFogInterpInitial).nearPlane) *
                 local_20 + (arg->skyFogInterpInitial).nearPlane;
            (arg->skyFog).farPlane =
                 ((arg->skyFogInterpFinal).farPlane - (arg->skyFogInterpInitial).farPlane) *
                 local_20 + (arg->skyFogInterpInitial).farPlane;
            (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
                      (g_Supervisor.d3dDevice,D3DRS_FOGCOLOR,(arg->skyFog).color);
            (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
                      (g_Supervisor.d3dDevice,D3DRS_FOGSTART,(DWORD)(arg->skyFog).nearPlane);
            (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
                      (g_Supervisor.d3dDevice,D3DRS_FOGEND,(DWORD)(arg->skyFog).farPlane);
            if (arg->skyFogInterpDuration <= (arg->skyFogInterpTimer).current) {
              arg->skyFogInterpDuration = 0;
            }
          }
          if (local_c->field1_0x4 != 5) {
            (arg->scriptTime).previous = (arg->scriptTime).current;
            Supervisor::TickTimer
                      (&g_Supervisor,&(arg->scriptTime).current,&(arg->scriptTime).subFrame);
          }
          FUN_00404860(arg);
          if (arg->spellcardEclRelated0 < 1) {
            return 1;
          }
          if (arg->spellcardEclRelated1 == 0x3c) {
            arg->spellcardEclRelated0 = arg->spellcardEclRelated0 + 1;
          }
          arg->spellcardEclRelated1 = arg->spellcardEclRelated1 + 1;
          AnmManager::ExecuteScript(g_AnmManager,&arg->field23_0x88);
          return 1;
        case 1:
          if ((arg->scriptTime).current < local_c->field0_0x0) goto switchD_00403892_caseD_6;
          (arg->skyFog).color = *(D3DCOLOR *)&local_c->field_0x8;
          (arg->skyFog).nearPlane = *(float *)&local_c->field_0xc;
          (arg->skyFog).farPlane = *(float *)&local_c->field_0x10;
          if (arg->skyFogInterpDuration == 0) {
            (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
                      (g_Supervisor.d3dDevice,D3DRS_FOGCOLOR,(arg->skyFog).color);
            (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
                      (g_Supervisor.d3dDevice,D3DRS_FOGSTART,(DWORD)(arg->skyFog).nearPlane);
            (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
                      (g_Supervisor.d3dDevice,D3DRS_FOGEND,(DWORD)(arg->skyFog).farPlane);
          }
          arg->instructionIndex = arg->instructionIndex + 1;
          (arg->skyFogInterpFinal).nearPlane = (arg->skyFog).nearPlane;
          (arg->skyFogInterpFinal).farPlane = (arg->skyFog).farPlane;
          (arg->skyFogInterpFinal).color = (arg->skyFog).color;
          break;
        case 2:
          if ((arg->scriptTime).current < local_c->field0_0x0) goto switchD_00403892_caseD_6;
          (arg->facingDirInterpInitial).x = (arg->facingDirInterpFinal).x;
          (arg->facingDirInterpInitial).y = (arg->facingDirInterpFinal).y;
          (arg->facingDirInterpInitial).z = (arg->facingDirInterpFinal).z;
          (arg->facingDirInterpFinal).x = *(float *)&local_c->field_0x8;
          (arg->facingDirInterpFinal).y = *(float *)&local_c->field_0xc;
          (arg->facingDirInterpFinal).z = *(float *)&local_c->field_0x10;
          arg->instructionIndex = arg->instructionIndex + 1;
          break;
        case 3:
          if ((arg->scriptTime).current < local_c->field0_0x0) goto switchD_00403892_caseD_6;
          arg->facingDirInterpDuration = *(int *)&local_c->field_0x8;
          (arg->facingDirInterpTimer).current = 0;
          (arg->facingDirInterpTimer).subFrame = 0.0;
          (arg->facingDirInterpTimer).previous = -999;
          arg->instructionIndex = arg->instructionIndex + 1;
          break;
        case 4:
          if ((arg->scriptTime).current < local_c->field0_0x0) goto switchD_00403892_caseD_6;
          (arg->skyFogInterpInitial).nearPlane = (arg->skyFog).nearPlane;
          (arg->skyFogInterpInitial).farPlane = (arg->skyFog).farPlane;
          (arg->skyFogInterpInitial).color = (arg->skyFog).color;
          arg->skyFogInterpDuration = *(int *)&local_c->field_0x8;
          (arg->skyFogInterpTimer).current = 0;
          (arg->skyFogInterpTimer).subFrame = 0.0;
          (arg->skyFogInterpTimer).previous = -999;
          arg->instructionIndex = arg->instructionIndex + 1;
          break;
        case 5:
          if (arg->unpauseFlag == '\0') goto switchD_00403892_caseD_6;
          arg->instructionIndex = arg->instructionIndex + 1;
          arg->unpauseFlag = '\0';
        }
      } while( true );
    }
    *(undefined *)((int)&(arg->field23_0x88).color + 3) = 0x60;
    *(undefined *)((int)&(arg->field23_0x88).color + 2) = 0x80;
    *(undefined *)((int)&(arg->field23_0x88).color + 1) = 0x30;
    *(undefined *)&(arg->field23_0x88).color = 0x30;
  }
  return 1;
}

