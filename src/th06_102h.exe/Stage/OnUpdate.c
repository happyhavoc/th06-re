
ChainCallbackResult Stage::OnUpdate(Stage *arg)

{
  float fVar1;
  float fVar2;
  float fVar3;
  StdRawInstr *pSVar4;
  long lVar5;
  int local_24;
  float local_20;
  StdRawInstr *curInsn;
  
  if (arg->stdData != (RawStdHeader *)0x0) {
    if ((char)g_GameManager.isTimeStopped == '\0') {
      do {
        curInsn = arg->beginningOfScript + arg->instructionIndex;
        switch(curInsn->opcode) {
        case 0:
          if (curInsn->frame == -1) {
            (arg->positionInterpInitial).x = (float)(curInsn->args).values[0];
            (arg->positionInterpInitial).y = (float)(curInsn->args).values[1];
            (arg->positionInterpInitial).z = (float)(curInsn->args).values[2];
            (arg->position).x = (arg->positionInterpInitial).x;
            (arg->position).y = (arg->positionInterpInitial).y;
            (arg->position).z = (arg->positionInterpInitial).z;
          }
          else if (curInsn->frame <= (arg->scriptTime).current) {
            fVar2 = (float)(curInsn->args).values[0];
            fVar3 = (float)(curInsn->args).values[1];
            fVar1 = (float)(curInsn->args).values[2];
            (arg->position).x = fVar2;
            (arg->position).y = fVar3;
            (arg->position).z = fVar1;
            (arg->positionInterpInitial).x = fVar2;
            (arg->positionInterpInitial).y = fVar3;
            (arg->positionInterpInitial).z = fVar1;
            arg->positionInterpStartTime = curInsn->frame;
            arg->instructionIndex = arg->instructionIndex + 1;
            do {
              pSVar4 = curInsn;
              curInsn = pSVar4 + 1;
            } while (pSVar4[1].opcode != 0);
            arg->positionInterpEndTime = curInsn->frame;
            (arg->positionInterpFinal).x = (float)pSVar4[1].args.values[0];
            (arg->positionInterpFinal).y = (float)pSVar4[1].args.values[1];
            (arg->positionInterpFinal).z = (float)pSVar4[1].args.values[2];
          }
        default:
switchD_00403892_caseD_6:
          if (curInsn->frame != -1) {
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
              lVar5 = __ftol2(((float)(uint)*(byte *)((int)&(arg->skyFogInterpFinal).color +
                                                     local_24) -
                              (float)(uint)*(byte *)((int)&(arg->skyFogInterpInitial).color +
                                                    local_24)) * local_20 +
                              (float)(uint)*(byte *)((int)&(arg->skyFogInterpInitial).color +
                                                    local_24));
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
          if (curInsn->opcode != 5) {
            (arg->scriptTime).previous = (arg->scriptTime).current;
            Supervisor::TickTimer
                      (&g_Supervisor,&(arg->scriptTime).current,&(arg->scriptTime).subFrame);
          }
          UpdateObjects(arg);
          if ((int)arg->spellcardState < 1) {
            return CHAIN_CALLBACK_RESULT_CONTINUE;
          }
          if (arg->ticksSinceSpellcardStarted == 0x3c) {
            arg->spellcardState = arg->spellcardState + RUNNING;
          }
          arg->ticksSinceSpellcardStarted = arg->ticksSinceSpellcardStarted + 1;
          AnmManager::ExecuteScript(g_AnmManager,&arg->spellcardBackground);
          return CHAIN_CALLBACK_RESULT_CONTINUE;
        case 1:
          if ((arg->scriptTime).current < curInsn->frame) goto switchD_00403892_caseD_6;
          (arg->skyFog).color = (curInsn->args).values[0];
          (arg->skyFog).nearPlane = (float)(curInsn->args).values[1];
          (arg->skyFog).farPlane = (float)(curInsn->args).values[2];
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
          if ((arg->scriptTime).current < curInsn->frame) goto switchD_00403892_caseD_6;
          (arg->facingDirInterpInitial).x = (arg->facingDirInterpFinal).x;
          (arg->facingDirInterpInitial).y = (arg->facingDirInterpFinal).y;
          (arg->facingDirInterpInitial).z = (arg->facingDirInterpFinal).z;
          (arg->facingDirInterpFinal).x = (float)(curInsn->args).values[0];
          (arg->facingDirInterpFinal).y = (float)(curInsn->args).values[1];
          (arg->facingDirInterpFinal).z = (float)(curInsn->args).values[2];
          arg->instructionIndex = arg->instructionIndex + 1;
          break;
        case 3:
          if ((arg->scriptTime).current < curInsn->frame) goto switchD_00403892_caseD_6;
          arg->facingDirInterpDuration = (curInsn->args).values[0];
          (arg->facingDirInterpTimer).current = 0;
          (arg->facingDirInterpTimer).subFrame = 0.0;
          (arg->facingDirInterpTimer).previous = -999;
          arg->instructionIndex = arg->instructionIndex + 1;
          break;
        case 4:
          if ((arg->scriptTime).current < curInsn->frame) goto switchD_00403892_caseD_6;
          (arg->skyFogInterpInitial).nearPlane = (arg->skyFog).nearPlane;
          (arg->skyFogInterpInitial).farPlane = (arg->skyFog).farPlane;
          (arg->skyFogInterpInitial).color = (arg->skyFog).color;
          arg->skyFogInterpDuration = (curInsn->args).values[0];
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
    (arg->spellcardBackground).color.bytes[3] = 0x60;
    (arg->spellcardBackground).color.bytes[2] = 0x80;
    (arg->spellcardBackground).color.bytes[1] = 0x30;
    (arg->spellcardBackground).color.bytes[0] = 0x30;
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

