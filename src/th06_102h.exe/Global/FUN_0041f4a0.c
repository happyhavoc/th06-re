
void __fastcall FUN_0041f4a0(AnmVm *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  float10 fVar10;
  float fVar11;
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
  bVar7 = false;
  param_1[0x263].scaleY = 0.0;
  local_8 = 0;
  local_18 = param_1;
  do {
    if (0x1ff < local_8) {
      if (bVar7) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0x15);
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
        fVar5 = ((float)(int)local_18[1].uvScrollPos.y + local_18[1].uvScrollPos.x) / 60.0;
        fVar6 = 1.0 - fVar5;
        fVar11 = local_18[1].angleVel.z;
        fVar1 = local_18[1].angleVel.y;
        fVar2 = local_18[1].scaleInterpFinalY;
        fVar3 = local_18[1].scaleX;
        local_18[1].rotation.x = fVar5 * local_18[1].scaleY + fVar6 * local_18[1].angleVel.x;
        local_18[1].rotation.y = fVar5 * fVar3 + fVar6 * fVar1;
        local_18[1].rotation.z = fVar5 * fVar2 + fVar6 * fVar11;
      }
      else {
        if ((*(char *)((int)&local_18[1].currentTimeInScript.previous + 3) == '\x01') ||
           ((0x7f < g_GameManager.current_power &&
            (g_Player.position.y < 128.0 != NAN(g_Player.position.y))))) {
          fVar11 = Player::FUN_00428700(&g_Player,(float *)(local_18 + 1));
          fVar4 = (float10)fcos((float10)fVar11);
          fVar10 = (float10)fsin((float10)fVar11);
          local_18[1].angleVel.x = (float)(fVar4 * (float10)8.0);
          local_18[1].angleVel.y = (float)(fVar10 * (float10)8.0);
          *(undefined *)((int)&local_18[1].currentTimeInScript.previous + 3) = 1;
        }
        else {
          local_18[1].angleVel.x = 0.0;
          local_18[1].angleVel.z = 0.0;
          fVar11 = local_18[1].angleVel.y;
          if (fVar11 < -2.2 != NAN(fVar11)) {
            local_18[1].angleVel.y = -2.2;
          }
        }
LAB_0041f7c5:
        fVar11 = g_Supervisor.effectiveFramerateMultiplier * local_18[1].angleVel.z;
        fVar1 = g_Supervisor.effectiveFramerateMultiplier * local_18[1].angleVel.y;
        local_18[1].rotation.x =
             g_Supervisor.effectiveFramerateMultiplier * local_18[1].angleVel.x +
             local_18[1].rotation.x;
        local_18[1].rotation.y = fVar1 + local_18[1].rotation.y;
        local_18[1].rotation.z = fVar11 + local_18[1].rotation.z;
        fVar11 = local_18[1].rotation.y;
        if (g_GameManager.arcade_region_size.y + 16.0 < fVar11 !=
            (g_GameManager.arcade_region_size.y + 16.0 == fVar11)) {
          *(undefined *)((int)&local_18[1].currentTimeInScript.previous + 1) = 0;
          FUN_0041c5fa(3);
          goto LAB_0041f512;
        }
        fVar11 = local_18[1].angleVel.y;
        if (fVar11 < 3.0 == NAN(fVar11)) {
          local_18[1].angleVel.y = 3.0;
        }
        else {
          local_18[1].angleVel.y =
               g_Supervisor.effectiveFramerateMultiplier * 0.03 + local_18[1].angleVel.y;
        }
      }
      iVar8 = Player::CalcBoxCollision(local_18 + 1,&FLOAT_0069e234);
      if (iVar8 == 0) {
        local_18[1].scaleInterpFinalX = local_18[1].uvScrollPos.y;
        Supervisor::TickTimer
                  (&g_Supervisor,(int *)&local_18[1].uvScrollPos.y,&local_18[1].uvScrollPos.x);
        AnmManager::ExecuteScript(g_AnmManager,local_18);
      }
      else {
        switch(*(undefined *)&local_18[1].currentTimeInScript.previous) {
        case 0:
          if (g_GameManager.current_power < 0x80) {
            for (local_20 = 0; iVar8 = local_20,
                *(int *)(&DAT_004766dc + local_20 * 4) <= (int)(uint)g_GameManager.current_power;
                local_20 = local_20 + 1) {
            }
            g_GameManager.power_item_count_for_score = 0;
            g_GameManager.current_power = g_GameManager.current_power + 1;
            if (0x7f < g_GameManager.current_power) {
              g_GameManager.current_power = 0x80;
              BulletManager::FUN_00414340(&g_BulletManager);
              FUN_004173d9(0);
            }
            g_GameManager.score = g_GameManager.score + 10;
            g_Gui.flags = g_Gui.flags & 0xffffffcf | 0x20;
            for (; *(int *)(&DAT_004766dc + local_20 * 4) <= (int)(uint)g_GameManager.current_power;
                local_20 = local_20 + 1) {
            }
            if (local_20 == iVar8) {
              AsciiManager::CreatePopup1(&g_AsciiManager,&local_18[1].rotation,10,0xffffffff);
            }
            else {
              AsciiManager::CreatePopup1(&g_AsciiManager,&local_18[1].rotation,-1,0xff80c0ff);
              SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0x1f);
            }
          }
          else {
            g_GameManager.power_item_count_for_score = g_GameManager.power_item_count_for_score + 1;
            if (0x1e < g_GameManager.power_item_count_for_score) {
              g_GameManager.power_item_count_for_score = 0x1e;
            }
            local_c = *(int *)(&DAT_00476660 + (char)g_GameManager.power_item_count_for_score * 4);
            g_GameManager.score = g_GameManager.score + local_c;
            AsciiManager::CreatePopup1
                      (&g_AsciiManager,&local_18[1].rotation,local_c,
                       ((local_c < 0x3200) - 1 & 0xffffff01) - 1);
          }
          GameManager::IncreaseSubrank(&g_GameManager,1);
          break;
        case 1:
          switch(g_GameManager.difficulty) {
          case 0:
          case 1:
            lVar9 = __ftol2(local_18[1].rotation.y);
            if (lVar9 < 0x80) {
              local_e0 = 100000;
            }
            else {
              lVar9 = __ftol2(local_18[1].rotation.y);
              local_e0 = (lVar9 + -0x80) * -100 + 60000;
            }
            local_c = local_e0;
            AsciiManager::CreatePopup1
                      (&g_AsciiManager,&local_18[1].rotation,local_e0,
                       ((local_e0 < 100000) - 1 & 0xffffff01) - 1);
            break;
          case 2:
            lVar9 = __ftol2(local_18[1].rotation.y);
            if (lVar9 < 0x80) {
              local_e4 = 150000;
            }
            else {
              lVar9 = __ftol2(local_18[1].rotation.y);
              local_e4 = (lVar9 + -0x80) * -0xb4 + 100000;
            }
            local_c = local_e4;
            AsciiManager::CreatePopup1
                      (&g_AsciiManager,&local_18[1].rotation,local_e4,
                       ((local_e4 < 150000) - 1 & 0xffffff01) - 1);
            break;
          case 3:
            lVar9 = __ftol2(local_18[1].rotation.y);
            if (lVar9 < 0x80) {
              local_e8 = 200000;
            }
            else {
              lVar9 = __ftol2(local_18[1].rotation.y);
              local_e8 = (lVar9 + -0x80) * -0x10e + 150000;
            }
            local_c = local_e8;
            AsciiManager::CreatePopup1
                      (&g_AsciiManager,&local_18[1].rotation,local_e8,
                       ((local_e8 < 200000) - 1 & 0xffffff01) - 1);
            break;
          case 4:
            lVar9 = __ftol2(local_18[1].rotation.y);
            if (lVar9 < 0x80) {
              local_ec = 300000;
            }
            else {
              lVar9 = __ftol2(local_18[1].rotation.y);
              local_ec = (lVar9 + -0x80) * -400 + 200000;
            }
            local_c = local_ec;
            AsciiManager::CreatePopup1
                      (&g_AsciiManager,&local_18[1].rotation,local_ec,
                       ((local_ec < 300000) - 1 & 0xffffff01) - 1);
          }
          g_GameManager.score = g_GameManager.score + local_c;
          g_GameManager.point_items_collected_in_stage =
               g_GameManager.point_items_collected_in_stage + 1;
          g_GameManager.field18_0x1816 = g_GameManager.field18_0x1816 + 1;
          g_Gui.flags = g_Gui.flags & 0xfffffcff | 0x200;
          fVar11 = local_18[1].rotation.y;
          if (fVar11 < 128.0 == NAN(fVar11)) {
            GameManager::IncreaseSubrank(&g_GameManager,3);
          }
          else {
            GameManager::IncreaseSubrank(&g_GameManager,0x1e);
          }
          break;
        case 2:
          if (g_GameManager.current_power < 0x80) {
            for (local_28 = 0; iVar8 = local_28,
                *(int *)(&DAT_004766dc + local_28 * 4) <= (int)(uint)g_GameManager.current_power;
                local_28 = local_28 + 1) {
            }
            g_GameManager.current_power = g_GameManager.current_power + 8;
            if (0x7f < g_GameManager.current_power) {
              g_GameManager.current_power = 0x80;
              BulletManager::FUN_00414340(&g_BulletManager);
              FUN_004173d9(0);
            }
            g_Gui.flags = g_Gui.flags & 0xffffffcf | 0x20;
            g_GameManager.score = g_GameManager.score + 10;
            for (; *(int *)(&DAT_004766dc + local_28 * 4) <= (int)(uint)g_GameManager.current_power;
                local_28 = local_28 + 1) {
            }
            if (local_28 == iVar8) {
              AsciiManager::CreatePopup1(&g_AsciiManager,&local_18[1].rotation,10,0xffffffff);
            }
            else {
              AsciiManager::CreatePopup1(&g_AsciiManager,&local_18[1].rotation,-1,0xff80c0ff);
              SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0x1f);
            }
          }
          else {
            g_GameManager.power_item_count_for_score = g_GameManager.power_item_count_for_score + 8;
            if (0x1e < g_GameManager.power_item_count_for_score) {
              g_GameManager.power_item_count_for_score = 0x1e;
            }
            local_c = *(int *)(&DAT_00476660 + (char)g_GameManager.power_item_count_for_score * 4);
            g_GameManager.score = g_GameManager.score + local_c;
            AsciiManager::CreatePopup1
                      (&g_AsciiManager,&local_18[1].rotation,local_c,
                       ((local_c < 0x3200) - 1 & 0xffffff01) - 1);
          }
          break;
        case 3:
          if ((char)g_GameManager.bombs_remaining < '\b') {
            g_GameManager.bombs_remaining = g_GameManager.bombs_remaining + 1;
            g_Gui.flags = g_Gui.flags & 0xfffffff3 | 8;
          }
          GameManager::IncreaseSubrank(&g_GameManager,5);
          break;
        case 4:
          if (g_GameManager.current_power < 0x80) {
            BulletManager::FUN_00414340(&g_BulletManager);
            FUN_004173d9(0);
            SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0x1f);
            AsciiManager::CreatePopup1(&g_AsciiManager,&local_18[1].rotation,-1,0xff80c0ff);
          }
          g_GameManager.current_power = 0x80;
          g_GameManager.score = g_GameManager.score + 1000;
          AsciiManager::CreatePopup1(&g_AsciiManager,&local_18[1].rotation,1000,0xffffffff);
          g_Gui.flags = g_Gui.flags & 0xffffffcf | 0x20;
          break;
        case 5:
          if ((char)g_GameManager.lives_remaining < '\b') {
            g_GameManager.lives_remaining = g_GameManager.lives_remaining + 1;
            g_Gui.flags = g_Gui.flags & 0xfffffffc | 2;
          }
          GameManager::IncreaseSubrank(&g_GameManager,200);
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0x1c);
          break;
        case 6:
          local_c = ((int)g_GameManager.graze_in_stage / 3) * 10 + 500;
          if (g_Player.inner.field0_0x0 != 0) {
            local_c = 100;
          }
          g_GameManager.score = g_GameManager.score + local_c;
          AsciiManager::CreatePopup2(&g_AsciiManager,&local_18[1].rotation,local_c,0xffffffff);
        }
        *(undefined *)((int)&local_18[1].currentTimeInScript.previous + 1) = 0;
        bVar7 = true;
      }
    }
LAB_0041f512:
    local_8 = local_8 + 1;
    local_18 = (AnmVm *)&local_18[1].currentTimeInScript.subFrame;
  } while( true );
}

