
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041f4a0(AnmVm *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  float10 fVar11;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_28;
  int local_20;
  AnmVm *local_18;
  int local_c;
  int local_8;
  
  if ((DAT_0069e240 & 1) == 0) {
    DAT_0069e240 = DAT_0069e240 | 1;
    FLOAT_0069e234 = 16.0;
    FLOAT_0069e238 = 16.0;
    FLOAT_0069e23c = 16.0;
  }
  bVar8 = false;
  param_1[0x263].scaleY = 0.0;
  local_8 = 0;
  local_18 = param_1;
  do {
    if (0x1ff < local_8) {
      if (bVar8) {
        FUN_004311e0(0x15);
      }
      return;
    }
    if (*(char *)((int)&local_18[1].currentTimeInScript.previous + 1) != '\0') {
      param_1[0x263].scaleY = (float)((int)param_1[0x263].scaleY + 1);
      if (*(char *)((int)&local_18[1].currentTimeInScript.previous + 3) == '\x02') {
        if (0x3b < (int)local_18[1].uvScrollPos.y) {
          if (local_18[1].uvScrollPos.y == 8.407791e-44) {
            local_18[1].angleVel.x = 0.0;
            local_18[1].angleVel.y = 0.0;
            local_18[1].angleVel.z = 0.0;
          }
          goto LAB_0041f7c5;
        }
        fVar6 = ((float)(int)local_18[1].uvScrollPos.y + local_18[1].uvScrollPos.x) / 60.0;
        fVar7 = 1.0 - fVar6;
        fVar1 = local_18[1].angleVel.z;
        fVar2 = local_18[1].angleVel.y;
        fVar3 = local_18[1].scaleInterpFinalY;
        fVar4 = local_18[1].scaleX;
        local_18[1].rotation.x = fVar6 * local_18[1].scaleY + fVar7 * local_18[1].angleVel.x;
        local_18[1].rotation.y = fVar6 * fVar4 + fVar7 * fVar2;
        local_18[1].rotation.z = fVar6 * fVar3 + fVar7 * fVar1;
      }
      else {
        if ((*(char *)((int)&local_18[1].currentTimeInScript.previous + 3) == '\x01') ||
           ((0x7f < g_GameManager.current_power && (_DAT_006caa6c < 128.0 != NAN(_DAT_006caa6c)))))
        {
          fVar11 = Player::FUN_00428700(&g_Player,(float *)(local_18 + 1));
          fVar5 = (float10)fcos((float10)(float)fVar11);
          fVar11 = (float10)fsin((float10)(float)fVar11);
          local_18[1].angleVel.x = (float)(fVar5 * (float10)8.0);
          local_18[1].angleVel.y = (float)(fVar11 * (float10)8.0);
          *(undefined *)((int)&local_18[1].currentTimeInScript.previous + 3) = 1;
        }
        else {
          local_18[1].angleVel.x = 0.0;
          local_18[1].angleVel.z = 0.0;
          fVar1 = local_18[1].angleVel.y;
          if (fVar1 < -2.2 != NAN(fVar1)) {
            local_18[1].angleVel.y = -2.2;
          }
        }
LAB_0041f7c5:
        fVar1 = g_Supervisor.field81_0x1a8 * local_18[1].angleVel.z;
        fVar2 = g_Supervisor.field81_0x1a8 * local_18[1].angleVel.y;
        local_18[1].rotation.x =
             g_Supervisor.field81_0x1a8 * local_18[1].angleVel.x + local_18[1].rotation.x;
        local_18[1].rotation.y = fVar2 + local_18[1].rotation.y;
        local_18[1].rotation.z = fVar1 + local_18[1].rotation.z;
        fVar1 = local_18[1].rotation.y;
        if (g_GameManager.arcade_region_size.y + 16.0 < fVar1 !=
            (g_GameManager.arcade_region_size.y + 16.0 == fVar1)) {
          *(undefined *)((int)&local_18[1].currentTimeInScript.previous + 1) = 0;
          FUN_0041c5fa(3);
          goto LAB_0041f512;
        }
        fVar1 = local_18[1].angleVel.y;
        if (fVar1 < 3.0 == NAN(fVar1)) {
          local_18[1].angleVel.y = 3.0;
        }
        else {
          local_18[1].angleVel.y = g_Supervisor.field81_0x1a8 * 0.03 + local_18[1].angleVel.y;
        }
      }
      iVar9 = Player::CalcBoxCollision(local_18 + 1,&FLOAT_0069e234);
      if (iVar9 == 0) {
        local_18[1].scaleInterpFinalX = local_18[1].uvScrollPos.y;
        Supervisor::FUN_00424285
                  (&g_Supervisor,(int *)&local_18[1].uvScrollPos.y,&local_18[1].uvScrollPos.x);
        AnmManager::ExecuteScript(g_AnmManager,local_18);
      }
      else {
        switch(*(undefined *)&local_18[1].currentTimeInScript.previous) {
        case 0:
          if (g_GameManager.current_power < 0x80) {
            for (local_20 = 0; iVar9 = local_20,
                *(int *)(&DAT_004766dc + local_20 * 4) <= (int)(uint)g_GameManager.current_power;
                local_20 = local_20 + 1) {
            }
            g_GameManager.power_item_count_for_score = 0;
            g_GameManager.current_power = g_GameManager.current_power + 1;
            if (0x7f < g_GameManager.current_power) {
              g_GameManager.current_power = 0x80;
              FUN_00414340(0x5a5ff8);
              FUN_004173d9(0);
            }
            g_GameManager.score = g_GameManager.score + 10;
            DAT_0069bc30 = DAT_0069bc30 & 0xffffffcf | 0x20;
            for (; *(int *)(&DAT_004766dc + local_20 * 4) <= (int)(uint)g_GameManager.current_power;
                local_20 = local_20 + 1) {
            }
            if (local_20 == iVar9) {
              FUN_00401940(local_18 + 1,10,0xffffffff);
            }
            else {
              FUN_00401940(local_18 + 1,0xffffffff,0xff80c0ff);
              FUN_004311e0(0x1f);
            }
          }
          else {
            g_GameManager.power_item_count_for_score = g_GameManager.power_item_count_for_score + 1;
            if (0x1e < g_GameManager.power_item_count_for_score) {
              g_GameManager.power_item_count_for_score = 0x1e;
            }
            local_c = *(int *)(&DAT_00476660 + (char)g_GameManager.power_item_count_for_score * 4);
            g_GameManager.score = g_GameManager.score + local_c;
            FUN_00401940(local_18 + 1,local_c,((local_c < 0x3200) - 1 & 0xffffff01) - 1);
          }
          FUN_0041c57e(1);
          break;
        case 1:
          switch(g_GameManager.difficulty) {
          case 0:
          case 1:
            lVar10 = __ftol2((double)local_18[1].rotation.y);
            if (lVar10 < 0x80) {
              local_e0 = 100000;
            }
            else {
              lVar10 = __ftol2((double)local_18[1].rotation.y);
              local_e0 = (lVar10 + -0x80) * -100 + 60000;
            }
            local_c = local_e0;
            FUN_00401940(local_18 + 1,local_e0,((local_e0 < 100000) - 1 & 0xffffff01) - 1);
            break;
          case 2:
            lVar10 = __ftol2((double)local_18[1].rotation.y);
            if (lVar10 < 0x80) {
              local_e4 = 150000;
            }
            else {
              lVar10 = __ftol2((double)local_18[1].rotation.y);
              local_e4 = (lVar10 + -0x80) * -0xb4 + 100000;
            }
            local_c = local_e4;
            FUN_00401940(local_18 + 1,local_e4,((local_e4 < 150000) - 1 & 0xffffff01) - 1);
            break;
          case 3:
            lVar10 = __ftol2((double)local_18[1].rotation.y);
            if (lVar10 < 0x80) {
              local_e8 = 200000;
            }
            else {
              lVar10 = __ftol2((double)local_18[1].rotation.y);
              local_e8 = (lVar10 + -0x80) * -0x10e + 150000;
            }
            local_c = local_e8;
            FUN_00401940(local_18 + 1,local_e8,((local_e8 < 200000) - 1 & 0xffffff01) - 1);
            break;
          case 4:
            lVar10 = __ftol2((double)local_18[1].rotation.y);
            if (lVar10 < 0x80) {
              local_ec = 300000;
            }
            else {
              lVar10 = __ftol2((double)local_18[1].rotation.y);
              local_ec = (lVar10 + -0x80) * -400 + 200000;
            }
            local_c = local_ec;
            FUN_00401940(local_18 + 1,local_ec,((local_ec < 300000) - 1 & 0xffffff01) - 1);
          }
          g_GameManager.score = g_GameManager.score + local_c;
          g_GameManager.point_items_collected_in_stage =
               g_GameManager.point_items_collected_in_stage + 1;
          g_GameManager.field13_0x1816 = g_GameManager.field13_0x1816 + 1;
          DAT_0069bc30 = DAT_0069bc30 & 0xfffffcff | 0x200;
          fVar1 = local_18[1].rotation.y;
          if (fVar1 < 128.0 == NAN(fVar1)) {
            FUN_0041c57e(3);
          }
          else {
            FUN_0041c57e(0x1e);
          }
          break;
        case 2:
          if (g_GameManager.current_power < 0x80) {
            for (local_28 = 0; iVar9 = local_28,
                *(int *)(&DAT_004766dc + local_28 * 4) <= (int)(uint)g_GameManager.current_power;
                local_28 = local_28 + 1) {
            }
            g_GameManager.current_power = g_GameManager.current_power + 8;
            if (0x7f < g_GameManager.current_power) {
              g_GameManager.current_power = 0x80;
              FUN_00414340(0x5a5ff8);
              FUN_004173d9(0);
            }
            DAT_0069bc30 = DAT_0069bc30 & 0xffffffcf | 0x20;
            g_GameManager.score = g_GameManager.score + 10;
            for (; *(int *)(&DAT_004766dc + local_28 * 4) <= (int)(uint)g_GameManager.current_power;
                local_28 = local_28 + 1) {
            }
            if (local_28 == iVar9) {
              FUN_00401940(local_18 + 1,10,0xffffffff);
            }
            else {
              FUN_00401940(local_18 + 1,0xffffffff,0xff80c0ff);
              FUN_004311e0(0x1f);
            }
          }
          else {
            g_GameManager.power_item_count_for_score = g_GameManager.power_item_count_for_score + 8;
            if (0x1e < g_GameManager.power_item_count_for_score) {
              g_GameManager.power_item_count_for_score = 0x1e;
            }
            local_c = *(int *)(&DAT_00476660 + (char)g_GameManager.power_item_count_for_score * 4);
            g_GameManager.score = g_GameManager.score + local_c;
            FUN_00401940(local_18 + 1,local_c,((local_c < 0x3200) - 1 & 0xffffff01) - 1);
          }
          break;
        case 3:
          if ((char)g_GameManager.bombs_remaining < '\b') {
            g_GameManager.bombs_remaining = g_GameManager.bombs_remaining + 1;
            DAT_0069bc30 = DAT_0069bc30 & 0xfffffff3 | 8;
          }
          FUN_0041c57e(5);
          break;
        case 4:
          if (g_GameManager.current_power < 0x80) {
            FUN_00414340(0x5a5ff8);
            FUN_004173d9(0);
            FUN_004311e0(0x1f);
            FUN_00401940(local_18 + 1,0xffffffff,0xff80c0ff);
          }
          g_GameManager.current_power = 0x80;
          g_GameManager.score = g_GameManager.score + 1000;
          FUN_00401940(local_18 + 1,1000,0xffffffff);
          DAT_0069bc30 = DAT_0069bc30 & 0xffffffcf | 0x20;
          break;
        case 5:
          if ((char)g_GameManager.lives_remaining < '\b') {
            g_GameManager.lives_remaining = g_GameManager.lives_remaining + 1;
            DAT_0069bc30 = DAT_0069bc30 & 0xfffffffc | 2;
          }
          FUN_0041c57e(200);
          FUN_004311e0(0x1c);
          break;
        case 6:
          local_c = ((int)g_GameManager.graze_in_stage / 3) * 10 + 500;
          if (_DAT_006d1bf0 != 0) {
            local_c = 100;
          }
          g_GameManager.score = g_GameManager.score + local_c;
          FUN_00401a60(local_18 + 1,local_c,0xffffffff);
        }
        *(undefined *)((int)&local_18[1].currentTimeInScript.previous + 1) = 0;
        bVar8 = true;
      }
    }
LAB_0041f512:
    local_8 = local_8 + 1;
    local_18 = (AnmVm *)&local_18[1].currentTimeInScript.subFrame;
  } while( true );
}

