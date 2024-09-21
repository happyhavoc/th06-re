
ZunResult __thiscall th06::Stage::RenderObjects(Stage *this,int zLevel)

{
  float fVar1;
  FLOAT local_88;
  D3DXVECTOR3 projectSrc;
  undefined4 local_78;
  StdRawQuadBasic *curQuad;
  D3DXVECTOR3 projectRes;
  D3DXVECTOR3 local_64;
  StdRawObject *local_58;
  D3DMATRIX worldMatrix;
  StdRawInstance *instances;
  int local_10;
  AnmVm *curQuadVm;
  undefined4 local_8;
  
  instances = this->objectInstances;
  local_10 = 0;
  local_78 = 0;
  projectSrc.x = 0.0;
  projectSrc.y = 0.0;
  projectSrc.z = 0.0;
  D3DXMatrixIdentity(&worldMatrix);
  do {
    if (instances->id < 0) {
      return ZUN_SUCCESS;
    }
    local_58 = this->objects[instances->id];
    if (local_58->zLevel == zLevel) {
      curQuad = &local_58->firstQuad;
      local_8 = 0;
      worldMatrix.m[3][0] = ((local_58->position).x + (instances->position).x) - (this->position).x;
      worldMatrix.m[3][1] =
           -(((local_58->position).y + (instances->position).y) - (this->position).y);
      worldMatrix.m[3][2] =
           (((local_58->position).z + (instances->position).z) - (this->position).z) +
           (local_58->size).z;
      D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,&g_Supervisor.projectionMatrix,
                      &g_Supervisor.viewMatrix,&worldMatrix);
      if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
         (projectRes.y < (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)
          == (projectRes.y ==
             (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)))) {
        worldMatrix.m[3][1] = worldMatrix.m[3][1] - (local_58->size).y;
        D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                        &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,&worldMatrix);
        if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
           (projectRes.y <
            (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height) ==
            (projectRes.y ==
            (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)))) {
          worldMatrix.m[3][2] = worldMatrix.m[3][2] - (local_58->size).z;
          D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                          &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,&worldMatrix);
          if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
             (projectRes.y <
              (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height) ==
              (projectRes.y ==
              (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)))) {
            worldMatrix.m[3][1] = worldMatrix.m[3][1] + (local_58->size).y;
            D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                            &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,&worldMatrix);
            if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
               (projectRes.y <
                (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height) ==
                (projectRes.y ==
                (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)))) {
              worldMatrix.m[3][0] =
                   (((local_58->position).x + (instances->position).x) - (this->position).x) +
                   (local_58->size).x;
              worldMatrix.m[3][1] =
                   -(((local_58->position).y + (instances->position).y) - (this->position).y);
              worldMatrix.m[3][2] =
                   (((local_58->position).z + (instances->position).z) - (this->position).z) +
                   (local_58->size).z;
              D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                              &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,&worldMatrix);
              if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
                 (projectRes.y <
                  (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height) ==
                  (projectRes.y ==
                  (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)))) {
                worldMatrix.m[3][1] = worldMatrix.m[3][1] - (local_58->size).y;
                D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                                &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,&worldMatrix
                               );
                if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
                   (projectRes.y <
                    (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height) ==
                    (projectRes.y ==
                    (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)))) {
                  worldMatrix.m[3][2] = worldMatrix.m[3][2] - (local_58->size).z;
                  D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                                  &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,
                                  &worldMatrix);
                  if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
                     (projectRes.y <
                      (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height) ==
                      (projectRes.y ==
                      (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height))))
                  {
                    worldMatrix.m[3][1] = worldMatrix.m[3][1] + (local_58->size).y;
                    D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                                    &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,
                                    &worldMatrix);
                    if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
                       (projectRes.y <
                        (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)
                        == (projectRes.y ==
                           (float)(ulonglong)
                                  (g_Supervisor.viewport.Y + g_Supervisor.viewport.Height))))
                    goto LAB_00405197;
                  }
                }
              }
            }
          }
        }
      }
      local_78 = 1;
      for (; -1 < curQuad->type;
          curQuad = (StdRawQuadBasic *)((int)&curQuad->type + (int)curQuad->byteSize)) {
        curQuadVm = this->quadVms + curQuad->vmIndex;
        if (curQuad->type == 0) {
          (curQuadVm->pos).x =
               ((curQuad->position).x + (instances->position).x) - (this->position).x;
          (curQuadVm->pos).y =
               ((curQuad->position).y + (instances->position).y) - (this->position).y;
          (curQuadVm->pos).z =
               ((curQuad->position).z + (instances->position).z) - (this->position).z;
          fVar1 = (curQuad->size).x;
          if (NAN(fVar1) == (fVar1 == 0.0)) {
            curQuadVm->scaleX = (curQuad->size).x / curQuadVm->sprite->widthPx;
          }
          fVar1 = (curQuad->size).y;
          if (NAN(fVar1) == (fVar1 == 0.0)) {
            curQuadVm->scaleY = (curQuad->size).y / curQuadVm->sprite->heightPx;
          }
          if (curQuadVm->autoRotate == 2) {
            fVar1 = (curQuad->size).x;
            if (NAN(fVar1) == (fVar1 == 0.0)) {
              local_88 = (curQuad->size).x;
            }
            else {
              local_88 = curQuadVm->sprite->widthPx;
            }
            worldMatrix.m[3][0] = (curQuadVm->pos).x;
            worldMatrix.m[3][1] = -(curQuadVm->pos).y;
            worldMatrix.m[3][2] = (curQuadVm->pos).z;
            D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                            &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,&worldMatrix);
            worldMatrix.m[3][0] = local_88 * curQuadVm->scaleX + worldMatrix.m[3][0];
            D3DXVec3Project(&local_64,&projectSrc,&g_Supervisor.viewport,
                            &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,&worldMatrix);
            curQuadVm->scaleX = (local_64.x - projectRes.x) / local_88;
            curQuadVm->scaleY = curQuadVm->scaleX;
            (curQuadVm->pos).x = projectRes.x;
            (curQuadVm->pos).y = projectRes.y;
            (curQuadVm->pos).z = projectRes.z;
            AnmManager::DrawFacingCamera(g_AnmManager,curQuadVm);
          }
          else {
            AnmManager::Draw3(g_AnmManager,curQuadVm);
          }
        }
      }
      local_10 = local_10 + 1;
    }
LAB_00405197:
    instances = instances + 1;
  } while( true );
}

