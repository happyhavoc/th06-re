
void __fastcall FUN_00411530(int param_1)

{
  float fVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined3 extraout_var_00;
  undefined2 uVar4;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0xee5dc) == 0) {
    *(undefined4 *)(param_1 + 0xee5dc) = DAT_00487e58;
  }
  bVar2 = FUN_004195a2(0x69bc30);
  if (((CONCAT31(extraout_var,bVar2) == 0) &&
      (local_c = (char)g_GameManager.lives_remaining * -0xf0 + 0x960,
      *(int *)(param_1 + 0xee5e8) != *(int *)(param_1 + 0xee5e0))) &&
     (*(int *)(param_1 + 0xee5e8) % local_c == 0)) {
    GameManager::FUN_0041c57e(&g_GameManager,100);
  }
  while (fVar1 = g_GameManager.field51_0x1a54, -1 < **(short **)(param_1 + 0xee5dc)) {
    if (*(int *)(param_1 + 0xee5e8) == (int)**(short **)(param_1 + 0xee5dc)) {
      switch(*(undefined2 *)(*(int *)(param_1 + 0xee5dc) + 4)) {
      case 0:
        if (g_Gui.boss_present == false) {
          iVar3 = *(int *)(param_1 + 0xee5dc);
          local_10 = iVar3 + 8;
          uVar4 = (undefined2)((uint)local_10 >> 0x10);
          FUN_00411390((int)*(short *)(*(int *)(param_1 + 0xee5dc) + 2),local_10,
                       CONCAT22(uVar4,*(undefined2 *)(iVar3 + 0x14)),
                       CONCAT22(uVar4,*(undefined2 *)(iVar3 + 0x16)),*(undefined4 *)(iVar3 + 0x18));
        }
        break;
      case 1:
        if (g_Gui.boss_present == false) {
          FUN_00411390((int)*(short *)(*(int *)(param_1 + 0xee5dc) + 2),
                       *(int *)(param_1 + 0xee5dc) + 8,0xffffffff,0xffffffff,0xffffffff);
        }
        break;
      case 2:
        if (g_Gui.boss_present == false) {
          iVar3 = *(int *)(param_1 + 0xee5dc);
          local_14 = iVar3 + 8;
          uVar4 = (undefined2)((uint)local_14 >> 0x10);
          local_8 = FUN_00411390((int)*(short *)(*(int *)(param_1 + 0xee5dc) + 2),local_14,
                                 CONCAT22(uVar4,*(undefined2 *)(iVar3 + 0x14)),
                                 CONCAT22(uVar4,*(undefined2 *)(iVar3 + 0x16)),
                                 *(undefined4 *)(iVar3 + 0x18));
          *(byte *)(local_8 + 0xe50) = *(byte *)(local_8 + 0xe50) | 0x40;
        }
        break;
      case 3:
        if (g_Gui.boss_present == false) {
          local_8 = FUN_00411390((int)*(short *)(*(int *)(param_1 + 0xee5dc) + 2),
                                 *(int *)(param_1 + 0xee5dc) + 8,0xffffffff,0xffffffff,0xffffffff);
          *(byte *)(local_8 + 0xe50) = *(byte *)(local_8 + 0xe50) | 0x40;
        }
        break;
      case 4:
        if (g_Gui.boss_present == false) {
          iVar3 = *(int *)(param_1 + 0xee5dc);
          local_18 = (float *)(iVar3 + 8);
          local_24 = *local_18;
          local_20 = *(float *)(iVar3 + 0xc);
          local_1c = *(float *)(iVar3 + 0x10);
          if (*local_18 < -990.0 != (*local_18 == -990.0)) {
            local_24 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_24 = local_24 * fVar1;
          }
          fVar1 = g_GameManager.field52_0x1a58;
          if (local_18[1] < -990.0 != (local_18[1] == -990.0)) {
            local_20 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_20 = local_20 * fVar1;
          }
          if (local_18[2] < -990.0 != (local_18[2] == -990.0)) {
            local_1c = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_1c = local_1c * 800.0;
          }
          FUN_00411390((int)*(short *)(*(int *)(param_1 + 0xee5dc) + 2),&local_24,
                       *(undefined2 *)(local_18 + 3),*(undefined2 *)((int)local_18 + 0xe),
                       local_18[4]);
        }
        break;
      case 5:
        if (g_Gui.boss_present == false) {
          iVar3 = *(int *)(param_1 + 0xee5dc);
          local_30 = *(float *)(iVar3 + 8);
          local_2c = *(float *)(iVar3 + 0xc);
          local_28 = *(float *)(iVar3 + 0x10);
          if (local_30 < -990.0 != (local_30 == -990.0)) {
            local_30 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_30 = local_30 * fVar1;
          }
          fVar1 = g_GameManager.field52_0x1a58;
          if (local_2c < -990.0 != (local_2c == -990.0)) {
            local_2c = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_2c = local_2c * fVar1;
          }
          if (local_28 < -990.0 != (local_28 == -990.0)) {
            local_28 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_28 = local_28 * 800.0;
          }
          FUN_00411390((int)*(short *)(*(int *)(param_1 + 0xee5dc) + 2),&local_30,0xffffffff,
                       0xffffffff,0xffffffff);
        }
        break;
      case 6:
        if (g_Gui.boss_present == false) {
          iVar3 = *(int *)(param_1 + 0xee5dc);
          local_34 = (float *)(iVar3 + 8);
          local_40 = *local_34;
          local_3c = *(float *)(iVar3 + 0xc);
          local_38 = *(float *)(iVar3 + 0x10);
          if (*local_34 < -990.0 != (*local_34 == -990.0)) {
            local_40 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_40 = local_40 * fVar1;
          }
          fVar1 = g_GameManager.field52_0x1a58;
          if (local_34[1] < -990.0 != (local_34[1] == -990.0)) {
            local_3c = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_3c = local_3c * fVar1;
          }
          if (local_34[2] < -990.0 != (local_34[2] == -990.0)) {
            local_38 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_38 = local_38 * 800.0;
          }
          local_8 = FUN_00411390((int)*(short *)(*(int *)(param_1 + 0xee5dc) + 2),&local_40,
                                 *(undefined2 *)(local_34 + 3),*(undefined2 *)((int)local_34 + 0xe),
                                 local_34[4]);
          *(byte *)(local_8 + 0xe50) = *(byte *)(local_8 + 0xe50) | 0x40;
        }
        break;
      case 7:
        if (g_Gui.boss_present == false) {
          iVar3 = *(int *)(param_1 + 0xee5dc);
          local_4c = *(float *)(iVar3 + 8);
          local_48 = *(float *)(iVar3 + 0xc);
          local_44 = *(float *)(iVar3 + 0x10);
          if (local_4c < -990.0 != (local_4c == -990.0)) {
            local_4c = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_4c = local_4c * fVar1;
          }
          fVar1 = g_GameManager.field52_0x1a58;
          if (local_48 < -990.0 != (local_48 == -990.0)) {
            local_48 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_48 = local_48 * fVar1;
          }
          if (local_44 < -990.0 != (local_44 == -990.0)) {
            local_44 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_44 = local_44 * 800.0;
          }
          local_8 = FUN_00411390((int)*(short *)(*(int *)(param_1 + 0xee5dc) + 2),&local_4c,
                                 0xffffffff,0xffffffff,0xffffffff);
          *(byte *)(local_8 + 0xe50) = *(byte *)(local_8 + 0xe50) | 0x40;
        }
        break;
      case 8:
        if (((g_GameManager.difficulty == 0) && (g_GameManager.current_stage == 5)) &&
           (*(short *)(*(int *)(param_1 + 0xee5dc) + 2) == 1)) {
          FUN_00418768((uint)g_GameManager.character * 10 + 3);
        }
        else {
          FUN_00418768((int)*(short *)(*(int *)(param_1 + 0xee5dc) + 2) +
                       (uint)g_GameManager.character * 10);
        }
        break;
      case 9:
        iVar3 = FUN_00419572();
        if (iVar3 != 0) {
          AnmTimer::FUN_004241e5((AnmTimer *)(param_1 + 0xee5e0),1);
          return;
        }
        break;
      case 10:
        *(undefined4 *)
         (*(int *)(param_1 + 0xee598 + *(int *)(*(int *)(param_1 + 0xee5dc) + 8) * 4) + 0xc68) =
             *(undefined4 *)(*(int *)(param_1 + 0xee5dc) + 0xc);
        break;
      case 0xb:
        g_GameManager.current_power = *(ushort *)(*(int *)(param_1 + 0xee5dc) + 2);
        break;
      case 0xc:
        if ((*(int *)(param_1 + 0xee598 + *(short *)(*(int *)(param_1 + 0xee5dc) + 2) * 4) != 0) &&
           (*(char *)(*(int *)(param_1 + 0xee598 + *(short *)(*(int *)(param_1 + 0xee5dc) + 2) * 4)
                     + 0xe50) < '\0')) {
          AnmTimer::FUN_004241e5((AnmTimer *)(param_1 + 0xee5e0),1);
          return;
        }
      }
    }
    else if (*(int *)(param_1 + 0xee5e8) < (int)**(short **)(param_1 + 0xee5dc)) break;
    *(int *)(param_1 + 0xee5dc) =
         (int)*(short *)(*(int *)(param_1 + 0xee5dc) + 6) + *(int *)(param_1 + 0xee5dc);
  }
  bVar2 = FUN_004195a2(0x69bc30);
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    g_GameManager.field58_0x1a6c = g_GameManager.field58_0x1a6c + 1;
  }
  return;
}

