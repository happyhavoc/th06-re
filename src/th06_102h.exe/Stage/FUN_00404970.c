
undefined4 __thiscall Stage::FUN_00404970(Stage *this,int unk)

{
  float fVar1;
  FLOAT local_88;
  D3DXVECTOR3 local_84;
  undefined4 local_78;
  StdRawQuadBasic *local_74;
  D3DXVECTOR3 local_70;
  D3DXVECTOR3 local_64;
  StdRawObject *local_58;
  D3DMATRIX local_54;
  StdRawInstance *local_14;
  int local_10;
  AnmVm *local_c;
  undefined4 local_8;
  
  local_14 = this->objectInstances;
  local_10 = 0;
  local_78 = 0;
  local_84.x = 0.0;
  local_84.y = 0.0;
  local_84.z = 0.0;
  D3DXMatrixIdentity(&local_54);
  do {
    if ((short)local_14->id < 0) {
      return 0;
    }
    local_58 = this->objects[(short)local_14->id];
    if ((char)local_58->field1_0x2 == unk) {
      local_74 = &local_58->firstQuad;
      local_8 = 0;
      local_54.field0_0x0.field0._41 =
           ((local_58->position).x + (local_14->position).x) - (this->position).x;
      local_54.field0_0x0.field0._42 =
           -(((local_58->position).y + (local_14->position).y) - (this->position).y);
      local_54.field0_0x0.field0._43 =
           (((local_58->position).z + (local_14->position).z) - (this->position).z) +
           (local_58->size).z;
      _D3DXVec3Project_24(&local_70,&local_84,&g_GameContext.viewport,
                          &g_GameContext.projectionMatrix,&g_GameContext.viewMatrix,&local_54);
      if ((local_70.y < (float)(ulonglong)g_GameContext.viewport.Y) ||
         (local_70.y < (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)
          == (local_70.y ==
             (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)))) {
        local_54.field0_0x0.field0._42 = local_54.field0_0x0.field0._42 - (local_58->size).y;
        _D3DXVec3Project_24(&local_70,&local_84,&g_GameContext.viewport,
                            &g_GameContext.projectionMatrix,&g_GameContext.viewMatrix,&local_54);
        if ((local_70.y < (float)(ulonglong)g_GameContext.viewport.Y) ||
           (local_70.y <
            (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height) ==
            (local_70.y ==
            (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)))) {
          local_54.field0_0x0.field0._43 = local_54.field0_0x0.field0._43 - (local_58->size).z;
          _D3DXVec3Project_24(&local_70,&local_84,&g_GameContext.viewport,
                              &g_GameContext.projectionMatrix,&g_GameContext.viewMatrix,&local_54);
          if ((local_70.y < (float)(ulonglong)g_GameContext.viewport.Y) ||
             (local_70.y <
              (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height) ==
              (local_70.y ==
              (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)))) {
            local_54.field0_0x0.field0._42 = local_54.field0_0x0.field0._42 + (local_58->size).y;
            _D3DXVec3Project_24(&local_70,&local_84,&g_GameContext.viewport,
                                &g_GameContext.projectionMatrix,&g_GameContext.viewMatrix,&local_54)
            ;
            if ((local_70.y < (float)(ulonglong)g_GameContext.viewport.Y) ||
               (local_70.y <
                (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height) ==
                (local_70.y ==
                (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)))) {
              local_54.field0_0x0.field0._41 =
                   (((local_58->position).x + (local_14->position).x) - (this->position).x) +
                   (local_58->size).x;
              local_54.field0_0x0.field0._42 =
                   -(((local_58->position).y + (local_14->position).y) - (this->position).y);
              local_54.field0_0x0.field0._43 =
                   (((local_58->position).z + (local_14->position).z) - (this->position).z) +
                   (local_58->size).z;
              _D3DXVec3Project_24(&local_70,&local_84,&g_GameContext.viewport,
                                  &g_GameContext.projectionMatrix,&g_GameContext.viewMatrix,
                                  &local_54);
              if ((local_70.y < (float)(ulonglong)g_GameContext.viewport.Y) ||
                 (local_70.y <
                  (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height) ==
                  (local_70.y ==
                  (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)))) {
                local_54.field0_0x0.field0._42 = local_54.field0_0x0.field0._42 - (local_58->size).y
                ;
                _D3DXVec3Project_24(&local_70,&local_84,&g_GameContext.viewport,
                                    &g_GameContext.projectionMatrix,&g_GameContext.viewMatrix,
                                    &local_54);
                if ((local_70.y < (float)(ulonglong)g_GameContext.viewport.Y) ||
                   (local_70.y <
                    (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height) ==
                    (local_70.y ==
                    (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height))))
                {
                  local_54.field0_0x0.field0._43 =
                       local_54.field0_0x0.field0._43 - (local_58->size).z;
                  _D3DXVec3Project_24(&local_70,&local_84,&g_GameContext.viewport,
                                      &g_GameContext.projectionMatrix,&g_GameContext.viewMatrix,
                                      &local_54);
                  if ((local_70.y < (float)(ulonglong)g_GameContext.viewport.Y) ||
                     (local_70.y <
                      (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)
                      == (local_70.y ==
                         (float)(ulonglong)
                                (g_GameContext.viewport.Y + g_GameContext.viewport.Height)))) {
                    local_54.field0_0x0.field0._42 =
                         local_54.field0_0x0.field0._42 + (local_58->size).y;
                    _D3DXVec3Project_24(&local_70,&local_84,&g_GameContext.viewport,
                                        &g_GameContext.projectionMatrix,&g_GameContext.viewMatrix,
                                        &local_54);
                    if ((local_70.y < (float)(ulonglong)g_GameContext.viewport.Y) ||
                       (local_70.y <
                        (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)
                        == (local_70.y ==
                           (float)(ulonglong)
                                  (g_GameContext.viewport.Y + g_GameContext.viewport.Height))))
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
          (local_c->pos).x = ((local_74->position).x + (local_14->position).x) - (this->position).x;
          (local_c->pos).y = ((local_74->position).y + (local_14->position).y) - (this->position).y;
          (local_c->pos).z = ((local_74->position).z + (local_14->position).z) - (this->position).z;
          fVar1 = (local_74->size).x;
          if (NAN(fVar1) == (fVar1 == 0.0)) {
            local_c->scaleY = (local_74->size).x / local_c->sprite->widthPx;
          }
          fVar1 = (local_74->size).y;
          if (NAN(fVar1) == (fVar1 == 0.0)) {
            local_c->scaleX = (local_74->size).y / local_c->sprite->heightPx;
          }
          if (local_c->autoRotate == 2) {
            fVar1 = (local_74->size).x;
            if (NAN(fVar1) == (fVar1 == 0.0)) {
              local_88 = (local_74->size).x;
            }
            else {
              local_88 = local_c->sprite->widthPx;
            }
            local_54.field0_0x0.field0._41 = (local_c->pos).x;
            local_54.field0_0x0.field0._42 = -(local_c->pos).y;
            local_54.field0_0x0.field0._43 = (local_c->pos).z;
            _D3DXVec3Project_24(&local_70,&local_84,&g_GameContext.viewport,
                                &g_GameContext.projectionMatrix,&g_GameContext.viewMatrix,&local_54)
            ;
            local_54.field0_0x0.field0._41 =
                 local_88 * local_c->scaleY + local_54.field0_0x0.field0._41;
            _D3DXVec3Project_24(&local_64,&local_84,&g_GameContext.viewport,
                                &g_GameContext.projectionMatrix,&g_GameContext.viewMatrix,&local_54)
            ;
            local_c->scaleY = (local_64.x - local_70.x) / local_88;
            local_c->scaleX = local_c->scaleY;
            (local_c->pos).x = local_70.x;
            (local_c->pos).y = local_70.y;
            (local_c->pos).z = local_70.z;
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
    local_14 = local_14 + 1;
  } while( true );
}

