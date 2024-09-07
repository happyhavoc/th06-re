
ZunResult __thiscall th06::Stage::RenderObjects(Stage *this,int zLevel)

{
  float local_88;
  D3DXVECTOR3 projectSrc;
  undefined4 local_78;
  short *curQuad;
  D3DXVECTOR3 projectRes;
  D3DXVECTOR3 local_64;
  int local_58;
  D3DMATRIX worldMatrix;
  short *instances;
  int local_10;
  AnmVm *curQuadVm;
  undefined4 local_8;
  
  instances = *(short **)(this + 0x14);
  local_10 = 0;
  local_78 = 0;
  projectSrc.x = 0.0;
  projectSrc.y = 0.0;
  projectSrc.z = 0.0;
  D3DXMatrixIdentity(&worldMatrix);
  do {
    if (*instances < 0) {
      return ZUN_SUCCESS;
    }
    local_58 = *(int *)(*(int *)(this + 0x10) + *instances * 4);
    if (*(char *)(local_58 + 2) == zLevel) {
      curQuad = (short *)(local_58 + 0x1c);
      local_8 = 0;
      worldMatrix.m[3][0] =
           (*(float *)(local_58 + 4) + *(float *)(instances + 2)) - *(float *)(this + 0x3c);
      worldMatrix.m[3][1] =
           -((*(float *)(local_58 + 8) + *(float *)(instances + 4)) - *(float *)(this + 0x40));
      worldMatrix.m[3][2] =
           ((*(float *)(local_58 + 0xc) + *(float *)(instances + 6)) - *(float *)(this + 0x44)) +
           *(float *)(local_58 + 0x18);
      D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,&g_Supervisor.projectionMatrix,
                      &g_Supervisor.viewMatrix,&worldMatrix);
      if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
         (projectRes.y < (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)
          == (projectRes.y ==
             (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)))) {
        worldMatrix.m[3][1] = worldMatrix.m[3][1] - *(float *)(local_58 + 0x14);
        D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                        &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,&worldMatrix);
        if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
           (projectRes.y <
            (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height) ==
            (projectRes.y ==
            (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)))) {
          worldMatrix.m[3][2] = worldMatrix.m[3][2] - *(float *)(local_58 + 0x18);
          D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                          &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,&worldMatrix);
          if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
             (projectRes.y <
              (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height) ==
              (projectRes.y ==
              (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)))) {
            worldMatrix.m[3][1] = worldMatrix.m[3][1] + *(float *)(local_58 + 0x14);
            D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                            &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,&worldMatrix);
            if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
               (projectRes.y <
                (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height) ==
                (projectRes.y ==
                (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)))) {
              worldMatrix.m[3][0] =
                   ((*(float *)(local_58 + 4) + *(float *)(instances + 2)) - *(float *)(this + 0x3c)
                   ) + *(float *)(local_58 + 0x10);
              worldMatrix.m[3][1] =
                   -((*(float *)(local_58 + 8) + *(float *)(instances + 4)) -
                    *(float *)(this + 0x40));
              worldMatrix.m[3][2] =
                   ((*(float *)(local_58 + 0xc) + *(float *)(instances + 6)) -
                   *(float *)(this + 0x44)) + *(float *)(local_58 + 0x18);
              D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                              &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,&worldMatrix);
              if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
                 (projectRes.y <
                  (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height) ==
                  (projectRes.y ==
                  (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)))) {
                worldMatrix.m[3][1] = worldMatrix.m[3][1] - *(float *)(local_58 + 0x14);
                D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                                &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,&worldMatrix
                               );
                if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
                   (projectRes.y <
                    (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height) ==
                    (projectRes.y ==
                    (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height)))) {
                  worldMatrix.m[3][2] = worldMatrix.m[3][2] - *(float *)(local_58 + 0x18);
                  D3DXVec3Project(&projectRes,&projectSrc,&g_Supervisor.viewport,
                                  &g_Supervisor.projectionMatrix,&g_Supervisor.viewMatrix,
                                  &worldMatrix);
                  if ((projectRes.y < (float)(ulonglong)g_Supervisor.viewport.Y) ||
                     (projectRes.y <
                      (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height) ==
                      (projectRes.y ==
                      (float)(ulonglong)(g_Supervisor.viewport.Y + g_Supervisor.viewport.Height))))
                  {
                    worldMatrix.m[3][1] = worldMatrix.m[3][1] + *(float *)(local_58 + 0x14);
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
      for (; -1 < *curQuad; curQuad = (short *)((int)curQuad + (int)curQuad[1])) {
        curQuadVm = (AnmVm *)(curQuad[3] * 0x110 + *(int *)this);
        if (*curQuad == 0) {
          (curQuadVm->pos).x =
               (*(float *)(curQuad + 4) + *(float *)(instances + 2)) - *(float *)(this + 0x3c);
          (curQuadVm->pos).y =
               (*(float *)(curQuad + 6) + *(float *)(instances + 4)) - *(float *)(this + 0x40);
          (curQuadVm->pos).z =
               (*(float *)(curQuad + 8) + *(float *)(instances + 6)) - *(float *)(this + 0x44);
          if (NAN(*(float *)(curQuad + 10)) == (*(float *)(curQuad + 10) == 0.0)) {
            curQuadVm->scaleX = *(float *)(curQuad + 10) / curQuadVm->sprite->widthPx;
          }
          if (NAN(*(float *)(curQuad + 0xc)) == (*(float *)(curQuad + 0xc) == 0.0)) {
            curQuadVm->scaleY = *(float *)(curQuad + 0xc) / curQuadVm->sprite->heightPx;
          }
          if (curQuadVm->autoRotate == 2) {
            if (NAN(*(float *)(curQuad + 10)) == (*(float *)(curQuad + 10) == 0.0)) {
              local_88 = *(float *)(curQuad + 10);
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
            AnmManager::DrawFacingCamera((AnmManager *)g_AnmManager,curQuadVm);
          }
          else {
            AnmManager::Draw3((AnmManager *)g_AnmManager,curQuadVm);
          }
        }
      }
      local_10 = local_10 + 1;
    }
LAB_00405197:
    instances = instances + 8;
  } while( true );
}

