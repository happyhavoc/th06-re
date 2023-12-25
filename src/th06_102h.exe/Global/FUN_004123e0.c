
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004123e0(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  AnmVm *local_28;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_00411530(param_1);
  local_28 = (AnmVm *)(param_1 + 0xed0);
  *(undefined4 *)(param_1 + 0xee5bc) = 0;
  local_10 = 0;
  do {
    if (0xff < (int)local_10) {
      *(undefined4 *)(param_1 + 0xee5e0) = *(undefined4 *)(param_1 + 0xee5e8);
      Supervisor::TickTimer(&g_Supervisor,(int *)(param_1 + 0xee5e8),(float *)(param_1 + 0xee5e4));
      return 1;
    }
    if (-1 < *(char *)&local_28[0xd].flags) goto LAB_00412416;
    *(int *)(param_1 + 0xee5bc) = *(int *)(param_1 + 0xee5bc) + 1;
    FUN_00413380();
    FUN_00412240();
    if (((*(byte *)((int)&local_28[0xd].flags + 1) >> 2 & 1) == 0) &&
       (iVar3 = FUN_0041b5e1(local_28[0xb].currentInstruction,local_28[0xb].sprite,
                             local_28->sprite->widthPx,local_28->sprite->heightPx), iVar3 != 0)) {
      *(byte *)((int)&local_28[0xd].flags + 1) = *(byte *)((int)&local_28[0xd].flags + 1) | 4;
    }
    if (((*(byte *)((int)&local_28[0xd].flags + 1) >> 2 & 1) == 1) &&
       (iVar3 = FUN_0041b5e1(local_28[0xb].currentInstruction,local_28[0xb].sprite,
                             local_28->sprite->widthPx,local_28->sprite->heightPx), iVar3 == 0)) {
      *(byte *)&local_28[0xd].flags = *(byte *)&local_28[0xd].flags & 0x7f;
      FUN_004121b0();
      goto LAB_00412416;
    }
    if (-1 < (int)local_28[0xd].posInterpFinal.x) {
      FUN_00411da0((int)local_28);
    }
    if (-1 < (int)local_28[0xd].posInterpFinal.z) {
      FUN_00411f40((int)local_28);
    }
    iVar3 = EclManager::run_ecl(local_28);
    if (iVar3 == -1) {
      *(byte *)&local_28[0xd].flags = *(byte *)&local_28[0xd].flags & 0x7f;
      FUN_004121b0();
      goto LAB_00412416;
    }
    FUN_00412240();
    local_28->color = (D3DCOLOR)local_28[0xc].matrix.m[0][0];
    AnmManager::ExecuteScript(g_AnmManager,local_28);
    local_28[0xc].matrix.m[0][0] = (float)local_28->color;
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if ((-1 < local_28[local_20 + 1].anmFileIndex) &&
         (iVar3 = AnmManager::ExecuteScript(g_AnmManager,local_28 + local_20 + 1), iVar3 != 0)) {
        local_28[local_20 + 1].anmFileIndex = -1;
      }
    }
    local_8 = 0;
    if (((*(byte *)((int)&local_28[0xd].flags + 1) >> 2 & 1) == 0) ||
       ((*(byte *)((int)&local_28[0xd].flags + 2) >> 3 & 1) != 0)) goto LAB_00412dbc;
    fVar1 = local_28[0xc].scaleInterpFinalX;
    if (((*(byte *)((int)&local_28[0xd].flags + 1) >> 1 & 1) != 0) &&
       ((*(byte *)((int)&local_28[0xd].flags + 1) & 1) != 0)) {
      local_14 = local_28[0xb].posInterpInitial.y * 0.6666667;
      local_18 = local_28[0xb].posInterpInitial.x * 0.6666667;
      local_1c = (float)local_28[0xb].alphaInterpFinal * 0.6666667;
      iVar3 = Player::CalcKillBoxCollision
                        (&g_Player,(float *)&local_28[0xb].currentInstruction,&local_1c);
      if (((iVar3 == 1) && ((*(byte *)((int)&local_28[0xd].flags + 1) & 1) != 0)) &&
         ((*(byte *)((int)&local_28[0xd].flags + 1) >> 3 & 1) == 0)) {
        local_28[0xc].scaleInterpFinalX = (float)((int)local_28[0xc].scaleInterpFinalX + -10);
      }
    }
    if ((*(byte *)((int)&local_28[0xd].flags + 1) & 1) != 0) {
      local_c = Player::FUN_004264b0
                          (&g_Player,(float *)&local_28[0xb].currentInstruction,
                           (float *)&local_28[0xb].alphaInterpFinal,&local_8);
      if (0x45 < local_c) {
        local_c = 0x46;
      }
      g_GameManager.score = (local_c / 5) * 10 + g_GameManager.score;
      if (*(int *)(param_1 + 0xee5c8) != 0) {
        if (local_8 == 0) {
          if (local_c < 8) {
            if (local_c != 0) {
              local_c = 1;
            }
          }
          else {
            local_c = local_c / 7;
          }
        }
        else if (*(int *)(param_1 + 0xee5d4) == 0) {
          local_c = 0;
        }
        else if (local_c < 4) {
          if (local_c != 0) {
            local_c = 1;
          }
        }
        else {
          local_c = local_c / 3;
        }
      }
      if ((*(byte *)((int)&local_28[0xd].flags + 1) >> 4 & 1) != 0) {
        local_28[0xc].scaleInterpFinalX = (float)((int)local_28[0xc].scaleInterpFinalX - local_c);
      }
      if (g_Player.position_of_last_enemy_hit.y < (float)local_28[0xb].sprite !=
          (NAN(g_Player.position_of_last_enemy_hit.y) || NAN((float)local_28[0xb].sprite))) {
        g_Player.position_of_last_enemy_hit.x = (float)local_28[0xb].currentInstruction;
        g_Player.position_of_last_enemy_hit.y = (float)local_28[0xb].sprite;
        g_Player.position_of_last_enemy_hit.z = (float)local_28[0xb].alphaInterpInitial;
      }
    }
    if ((0 < (int)local_28[0xc].scaleInterpFinalX) ||
       ((*(byte *)((int)&local_28[0xd].flags + 1) & 1) == 0)) goto LAB_00412ce2;
    local_28[0xd].posInterpFinal.x = -NAN;
    local_28[0xd].posInterpFinal.z = -NAN;
    switch(*(byte *)((int)&local_28[0xd].flags + 1) >> 5) {
    case 0:
      g_GameManager.score = g_GameManager.score + (int)local_28[0xc].uvScrollPos.y;
      *(byte *)&local_28[0xd].flags = *(byte *)&local_28[0xd].flags & 0x7f;
      goto LAB_00412a4d;
    case 1:
      g_GameManager.score = g_GameManager.score + (int)local_28[0xc].uvScrollPos.y;
      *(byte *)((int)&local_28[0xd].flags + 1) = *(byte *)((int)&local_28[0xd].flags + 1) & 0xfe;
LAB_00412a4d:
      if ((*(byte *)((int)&local_28[0xd].flags + 1) >> 3 & 1) != 0) {
        DAT_0069bc50 = 0;
        FUN_004114c0(local_28);
      }
switchD_00412938_caseD_2:
      if (*(char *)((int)local_28[0xd].matrix.m[3] + 3) < '\0') {
        if (*(char *)((int)local_28[0xd].matrix.m[3] + 3) == -1) {
          if ((uint)*(ushort *)(param_1 + 0xee5b8) % 3 == 0) {
            EffectManager::FUN_0040ef50
                      ((int *)&g_EffectManager,*(byte *)((int)local_28[0xd].matrix.m[3] + 1) + 4,
                       (float *)&local_28[0xb].currentInstruction,6,0xffffffff);
            FUN_0041f290(&local_28[0xb].currentInstruction,
                         (&DAT_00476338)[*(ushort *)(param_1 + 0xee5ba)],local_8);
            *(short *)(param_1 + 0xee5ba) = *(short *)(param_1 + 0xee5ba) + 1;
            if (0x1f < *(ushort *)(param_1 + 0xee5ba)) {
              *(undefined2 *)(param_1 + 0xee5ba) = 0;
            }
          }
          *(short *)(param_1 + 0xee5b8) = *(short *)(param_1 + 0xee5b8) + 1;
        }
      }
      else {
        EffectManager::FUN_0040ef50
                  ((int *)&g_EffectManager,*(byte *)((int)local_28[0xd].matrix.m[3] + 1) + 4,
                   (float *)&local_28[0xb].currentInstruction,3,0xffffffff);
        FUN_0041f290(&local_28[0xb].currentInstruction,
                     (int)*(char *)((int)local_28[0xd].matrix.m[3] + 3),local_8);
      }
      if (((*(byte *)((int)&local_28[0xd].flags + 1) >> 3 & 1) != 0) && (DAT_005a5f90 == 0)) {
        BulletManager::FUN_00414360(&g_BulletManager,0x3200,0);
      }
      local_28[0xc].scaleInterpFinalX = 0.0;
      break;
    case 2:
      goto switchD_00412938_caseD_2;
    case 3:
      local_28[0xc].scaleInterpFinalX = 1.401298e-45;
      *(byte *)((int)&local_28[0xd].flags + 1) = *(byte *)((int)&local_28[0xd].flags + 1) & 0xef;
      *(byte *)((int)&local_28[0xd].flags + 1) = *(byte *)((int)&local_28[0xd].flags + 1) & 0x1f;
      DAT_0069bc50 = 0;
      EffectManager::FUN_0040ef50
                ((int *)&g_EffectManager,(uint)*(byte *)local_28[0xd].matrix.m[3],
                 (float *)&local_28[0xb].currentInstruction,1,0xffffffff);
      EffectManager::FUN_0040ef50
                ((int *)&g_EffectManager,(uint)*(byte *)local_28[0xd].matrix.m[3],
                 (float *)&local_28[0xb].currentInstruction,1,0xffffffff);
      EffectManager::FUN_0040ef50
                ((int *)&g_EffectManager,(uint)*(byte *)local_28[0xd].matrix.m[3],
                 (float *)&local_28[0xb].currentInstruction,1,0xffffffff);
    }
    uVar4 = local_10 & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    SoundPlayer::FUN_004311e0(&g_SoundPlayer,uVar4 + 2);
    EffectManager::FUN_0040ef50
              ((int *)&g_EffectManager,(uint)*(byte *)local_28[0xd].matrix.m[3],
               (float *)&local_28[0xb].currentInstruction,1,0xffffffff);
    EffectManager::FUN_0040ef50
              ((int *)&g_EffectManager,*(byte *)((int)local_28[0xd].matrix.m[3] + 1) + 4,
               (float *)&local_28[0xb].currentInstruction,4,0xffffffff);
    if (-1 < (int)local_28[0xb].pos.y) {
      local_28[0xc].angleVel.z = -0.5;
      local_28[0xc].scaleY = 0.5;
      *(undefined2 *)&local_28[0xc].scaleX = 0;
      *(undefined2 *)((int)&local_28[0xc].scaleX + 2) = 0;
      *(undefined2 *)&local_28[0xc].scaleInterpFinalY = 0;
      *(undefined2 *)((int)&local_28[0xc].scaleInterpFinalY + 2) = 0;
      *(undefined4 *)&local_28[0xb].posInterpEndTime = 0;
      FUN_00407440(local_28 + 9,
                   CONCAT22((short)((uint)local_28 >> 0x10),*(undefined2 *)&local_28[0xb].pos.y));
      local_28[0xb].pos.y = -NAN;
    }
LAB_00412ce2:
    if (((*(byte *)((int)&local_28[0xd].flags + 1) >> 3 & 1) != 0) &&
       (bVar2 = FUN_004195a2(0x69bc30), CONCAT31(extraout_var,bVar2) == 0)) {
      _DAT_0069bc54 =
           (float)(int)local_28[0xc].scaleInterpFinalX / (float)(int)local_28[0xc].uvScrollPos.x;
    }
    if (*(char *)((int)local_28[0xd].matrix.m[3] + 5) == '\0') {
      if ((int)local_28[0xc].scaleInterpFinalX < (int)fVar1) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0x14);
        local_28->flags = local_28->flags | 8;
        *(undefined *)((int)local_28[0xd].matrix.m[3] + 5) = 4;
      }
      else {
        local_28->flags = local_28->flags & 0xfffffff7;
      }
    }
    else {
      *(char *)((int)local_28[0xd].matrix.m[3] + 5) =
           *(char *)((int)local_28[0xd].matrix.m[3] + 5) + -1;
      local_28->flags = local_28->flags & 0xfffffff7;
    }
LAB_00412dbc:
    FUN_00412e50(local_28);
    if ((char)g_GameManager.field11_0x2c == '\0') {
      local_28[0xc].currentTimeInScript.previous = local_28[0xc].currentTimeInScript.current;
      Supervisor::TickTimer
                (&g_Supervisor,&local_28[0xc].currentTimeInScript.current,
                 &local_28[0xc].currentTimeInScript.subFrame);
    }
LAB_00412416:
    local_10 = local_10 + 1;
    local_28 = (AnmVm *)&local_28[0xd].posInterpTime.current;
  } while( true );
}

