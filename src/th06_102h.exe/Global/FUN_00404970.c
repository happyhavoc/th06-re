
undefined4 FUN_00404970(int param_1)

{
  int *in_ECX;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  short *local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64 [3];
  int local_58;
  D3DMATRIX local_54;
  short *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_14 = (short *)in_ECX[5];
  local_10 = 0;
  local_78 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  InitializeMatrix(&local_54);
  do {
    if (*local_14 < 0) {
      return 0;
    }
    local_58 = *(int *)(in_ECX[4] + *local_14 * 4);
    if (*(char *)(local_58 + 2) == param_1) {
      local_74 = (short *)(local_58 + 0x1c);
      local_8 = 0;
      local_54.field0_0x0.field0._41 =
           (*(float *)(local_58 + 4) + *(float *)(local_14 + 2)) - (float)in_ECX[0xf];
      local_54.field0_0x0.field0._42 =
           -((*(float *)(local_58 + 8) + *(float *)(local_14 + 4)) - (float)in_ECX[0x10]);
      local_54.field0_0x0.field0._43 =
           ((*(float *)(local_58 + 0xc) + *(float *)(local_14 + 6)) - (float)in_ECX[0x11]) +
           *(float *)(local_58 + 0x18);
      _D3DXVec3Project_24(&local_70,&local_84,0x6c6de0,0x6c6da0,0x6c6d60,&local_54);
      if ((local_6c < (float)(ulonglong)g_GameContext.viewport.Y) ||
         (local_6c < (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height) ==
          (local_6c == (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height))
         )) {
        local_54.field0_0x0.field0._42 =
             local_54.field0_0x0.field0._42 - *(float *)(local_58 + 0x14);
        _D3DXVec3Project_24(&local_70,&local_84,0x6c6de0,0x6c6da0,0x6c6d60,&local_54);
        if ((local_6c < (float)(ulonglong)g_GameContext.viewport.Y) ||
           (local_6c < (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)
            == (local_6c ==
               (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)))) {
          local_54.field0_0x0.field0._43 =
               local_54.field0_0x0.field0._43 - *(float *)(local_58 + 0x18);
          _D3DXVec3Project_24(&local_70,&local_84,0x6c6de0,0x6c6da0,0x6c6d60,&local_54);
          if ((local_6c < (float)(ulonglong)g_GameContext.viewport.Y) ||
             (local_6c <
              (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height) ==
              (local_6c ==
              (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)))) {
            local_54.field0_0x0.field0._42 =
                 local_54.field0_0x0.field0._42 + *(float *)(local_58 + 0x14);
            _D3DXVec3Project_24(&local_70,&local_84,0x6c6de0,0x6c6da0,0x6c6d60,&local_54);
            if ((local_6c < (float)(ulonglong)g_GameContext.viewport.Y) ||
               (local_6c <
                (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height) ==
                (local_6c ==
                (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)))) {
              local_54.field0_0x0.field0._41 =
                   ((*(float *)(local_58 + 4) + *(float *)(local_14 + 2)) - (float)in_ECX[0xf]) +
                   *(float *)(local_58 + 0x10);
              local_54.field0_0x0.field0._42 =
                   -((*(float *)(local_58 + 8) + *(float *)(local_14 + 4)) - (float)in_ECX[0x10]);
              local_54.field0_0x0.field0._43 =
                   ((*(float *)(local_58 + 0xc) + *(float *)(local_14 + 6)) - (float)in_ECX[0x11]) +
                   *(float *)(local_58 + 0x18);
              _D3DXVec3Project_24(&local_70,&local_84,0x6c6de0,0x6c6da0,0x6c6d60,&local_54);
              if ((local_6c < (float)(ulonglong)g_GameContext.viewport.Y) ||
                 (local_6c <
                  (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height) ==
                  (local_6c ==
                  (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)))) {
                local_54.field0_0x0.field0._42 =
                     local_54.field0_0x0.field0._42 - *(float *)(local_58 + 0x14);
                _D3DXVec3Project_24(&local_70,&local_84,0x6c6de0,0x6c6da0,0x6c6d60,&local_54);
                if ((local_6c < (float)(ulonglong)g_GameContext.viewport.Y) ||
                   (local_6c <
                    (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height) ==
                    (local_6c ==
                    (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height))))
                {
                  local_54.field0_0x0.field0._43 =
                       local_54.field0_0x0.field0._43 - *(float *)(local_58 + 0x18);
                  _D3DXVec3Project_24(&local_70,&local_84,0x6c6de0,0x6c6da0,0x6c6d60,&local_54);
                  if ((local_6c < (float)(ulonglong)g_GameContext.viewport.Y) ||
                     (local_6c <
                      (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)
                      == (local_6c ==
                         (float)(ulonglong)
                                (g_GameContext.viewport.Y + g_GameContext.viewport.Height)))) {
                    local_54.field0_0x0.field0._42 =
                         local_54.field0_0x0.field0._42 + *(float *)(local_58 + 0x14);
                    _D3DXVec3Project_24(&local_70,&local_84,0x6c6de0,0x6c6da0,0x6c6d60,&local_54);
                    if ((local_6c < (float)(ulonglong)g_GameContext.viewport.Y) ||
                       (local_6c <
                        (float)(ulonglong)(g_GameContext.viewport.Y + g_GameContext.viewport.Height)
                        == (local_6c ==
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
      for (; -1 < *local_74; local_74 = (short *)((int)local_74 + (int)local_74[1])) {
        local_c = local_74[3] * 0x110 + *in_ECX;
        if (*local_74 == 0) {
          *(float *)(local_c + 0x90) =
               (*(float *)(local_74 + 4) + *(float *)(local_14 + 2)) - (float)in_ECX[0xf];
          *(float *)(local_c + 0x94) =
               (*(float *)(local_74 + 6) + *(float *)(local_14 + 4)) - (float)in_ECX[0x10];
          *(float *)(local_c + 0x98) =
               (*(float *)(local_74 + 8) + *(float *)(local_14 + 6)) - (float)in_ECX[0x11];
          if (NAN(*(float *)(local_74 + 10)) == (*(float *)(local_74 + 10) == 0.0)) {
            *(float *)(local_c + 0x1c) =
                 *(float *)(local_74 + 10) / *(float *)(*(int *)(local_c + 0xc0) + 0x30);
          }
          if (NAN(*(float *)(local_74 + 0xc)) == (*(float *)(local_74 + 0xc) == 0.0)) {
            *(float *)(local_c + 0x18) =
                 *(float *)(local_74 + 0xc) / *(float *)(*(int *)(local_c + 0xc0) + 0x2c);
          }
          if (*(short *)(local_c + 0x88) == 2) {
            if (NAN(*(float *)(local_74 + 10)) == (*(float *)(local_74 + 10) == 0.0)) {
              local_88 = *(float *)(local_74 + 10);
            }
            else {
              local_88 = *(float *)(*(int *)(local_c + 0xc0) + 0x30);
            }
            local_54.field0_0x0.field0._41 = *(float *)(local_c + 0x90);
            local_54.field0_0x0.field0._42 = -*(float *)(local_c + 0x94);
            local_54.field0_0x0.field0._43 = *(float *)(local_c + 0x98);
            _D3DXVec3Project_24(&local_70,&local_84,0x6c6de0,0x6c6da0,0x6c6d60,&local_54);
            local_54.field0_0x0.field0._41 =
                 local_88 * *(float *)(local_c + 0x1c) + local_54.field0_0x0.field0._41;
            _D3DXVec3Project_24(local_64,&local_84,0x6c6de0,0x6c6da0,0x6c6d60,&local_54);
            *(float *)(local_c + 0x1c) = (local_64[0] - local_70) / local_88;
            *(undefined4 *)(local_c + 0x18) = *(undefined4 *)(local_c + 0x1c);
            *(float *)(local_c + 0x90) = local_70;
            *(float *)(local_c + 0x94) = local_6c;
            *(undefined4 *)(local_c + 0x98) = local_68;
            FUN_00432fa0(local_c);
          }
          else {
            FUN_00433150(local_c);
          }
        }
      }
      local_10 = local_10 + 1;
    }
LAB_00405197:
    local_14 = local_14 + 8;
  } while( true );
}

