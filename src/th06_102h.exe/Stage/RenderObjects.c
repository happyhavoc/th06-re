
ZunResult __thiscall Stage::RenderObjects(Stage *this,int zLevel)

{
  float fVar1;
  FLOAT local_88;
  D3DXVECTOR3 projectSrc;
  undefined4 local_78;
  StdRawQuadBasic *local_74;
  D3DXVECTOR3 projectRes;
  D3DXVECTOR3 local_64;
  StdRawObject *local_58;
  D3DMATRIX worldMatrix;
  StdRawInstance *instances;
  int local_10;
  AnmVm *local_c;
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
      local_74 = &local_58->firstQuad;
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
      for (; -1 < local_74->type;
          local_74 = (StdRawQuadBasic *)((int)&local_74->type + (int)local_74->byteSize)) {
        local_c = this->quadVms + local_74->vmIndex;
        if (local_74->type == 0) {
          (local_c->pos).x = ((local_74->position).x + (instances->position).x) - (this->position).x
          ;
          (local_c->pos).y = ((local_74->position).y + (instances->position).y) - (this->position).y
          ;
          (local_c->pos).z = ((local_74->position).z + (instances->position).z) - (this->position).z
          ;
          fVar1 = (local_74->size).x;
          if (NAN(fVar1) == (fVar1 == 0.0)) {
            local_c->scaleX = (local_74->size).x / local_c->sprite->widthPx;
          }
          fVar1 = (local_74->size).y;
          if (NAN(fVar1) == (fVar1 == 0.0)) {
            local_c->scaleY = (local_74->size).y / local_c->sprite->heightPx;
          }
          if (local_c->autoRotate == 2) {
            fVar1 = (local_74->size).x;
            if (NAN(fVar1) == (fVar1 == 0.0)) {
              local_88 = (local_74->size).x;
            }
            else {
              local_88 = local_c->sprite->widthPx;
            }
            worldMatrix.m[3][0] = (local_c->pos).x;
            worldMatrix.m[3][1] = -(local_c->pos).y;
            worldMatrix.m[3][2] = (local_c->pos).z;
            D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                            &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,&worldMatrix);
            worldMatrix.m[3][0] = local_88 * local_c->scaleX + worldMatrix.m[3][0];
            D3DXVec3Project(&local_64,&projectSrc,&g_Supervisor.viewport,
                            &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,&worldMatrix);
            local_c->scaleX = (local_64.x - projectRes.x) / local_88;
            local_c->scaleY = local_c->scaleX;
            (local_c->pos).x = projectRes.x;
            (local_c->pos).y = projectRes.y;
            (local_c->pos).z = projectRes.z;
            AnmManager::FUN_00432fa0(g_AnmManager,local_c);
          }
          else {
            AnmManager::FUN_00433150(g_AnmManager,local_c);
          }
        }
      }
      local_10 = local_10 + 1;
    }
LAB_00405197:
    instances = instances + 1;
  } while( true );
}

