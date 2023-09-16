
undefined4 FUN_00439ad6(AnmVm *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  AnmVm *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_20 = param_1;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x44200000;
  local_c = 0x43f00000;
  if (param_1[0x7a].matrix.field0_0x0.field0._22 != 0.0) {
    g_AnmManager->currentTexture = (IDirect3DTexture8 *)0x0;
    AnmManager::FUN_00435300(g_AnmManager,0,0,0,0,0);
    if (param_1[0x7a].matrix.field0_0x0.field0._42 == 0.0) {
      if (param_1[0x7a].matrix.field0_0x0.field0._41 != 0.0) {
        param_1[0x7a].matrix.field0_0x0.field0._41 =
             (float)((int)param_1[0x7a].matrix.field0_0x0.field0._41 + -1);
        local_8 = ((uint)param_1[0x7a].matrix.field0_0x0.field0._32 >> 0x18) -
                  ((uint)param_1[0x7a].matrix.field0_0x0.field0._31 >> 0x18);
        FUN_0042f8b0(&local_18,
                     ((uint)(local_8 * *(int *)((int)&param_1[0x7a].matrix.field0_0x0 + 0x30)) /
                      *(uint *)((int)&param_1[0x7a].matrix.field0_0x0 + 0x38) +
                     ((uint)param_1[0x7a].matrix.field0_0x0.field0._31 >> 0x18)) * 0x1000000 |
                     (uint)param_1[0x7a].matrix.field0_0x0.field0._32 & 0xffffff);
      }
    }
    else {
      if ((int)param_1[0x7a].matrix.field0_0x0.field0._41 <
          (int)param_1[0x7a].matrix.field0_0x0.field0._42) {
        param_1[0x7a].matrix.field0_0x0.field0._41 =
             (float)((int)param_1[0x7a].matrix.field0_0x0.field0._41 + 1);
      }
      local_8 = ((uint)param_1[0x7a].matrix.field0_0x0.field0._32 >> 0x18) -
                ((uint)param_1[0x7a].matrix.field0_0x0.field0._31 >> 0x18);
      FUN_0042f8b0(&local_18,
                   ((uint)(local_8 * *(int *)((int)&param_1[0x7a].matrix.field0_0x0 + 0x30)) /
                    *(uint *)((int)&param_1[0x7a].matrix.field0_0x0 + 0x34) +
                   ((uint)param_1[0x7a].matrix.field0_0x0.field0._31 >> 0x18)) * 0x1000000 |
                   (uint)param_1[0x7a].matrix.field0_0x0.field0._32 & 0xffffff);
    }
    for (local_1c = 0; local_1c < 0x62; local_1c = local_1c + 1) {
      if (local_20->sprite == (AnmLoadedSprite *)0x0) {
        bVar5 = false;
      }
      else if ((int)local_20->sprite->sourceFileIndex < 0) {
        bVar5 = false;
      }
      else {
        bVar5 = g_AnmManager->textures[local_20->sprite->sourceFileIndex] !=
                (IDirect3DTexture8 *)0x0;
      }
      if (bVar5) {
        fVar1 = (local_20->pos).x;
        fVar2 = (local_20->pos).y;
        fVar3 = (local_20->pos).z;
        (local_20->pos).x = (local_20->pos).x + (local_20->pos2).x;
        (local_20->pos).y = (local_20->pos).y + (local_20->pos2).y;
        (local_20->pos).z = (local_20->pos).z + (local_20->pos2).z;
        AnmManager::FUN_00432cc0(g_AnmManager,local_20);
        (local_20->pos).x = fVar1;
        (local_20->pos).y = fVar2;
        (local_20->pos).z = fVar3;
      }
      local_20 = local_20 + 1;
    }
    iVar4 = *(int *)((int)&param_1[0x7a].matrix.field0_0x0 + 0x14);
    if ((0xc < iVar4) && (iVar4 < 0x10)) {
      FUN_00438bc1();
    }
    FUN_00439965();
  }
  return 1;
}

