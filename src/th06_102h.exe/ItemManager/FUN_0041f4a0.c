
void __thiscall ItemManager::FUN_0041f4a0(ItemManager *this)

{
  int iVar8;
  long lVar9;
  float10 fVar10;
  float fVar7;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  int local_28;
  int local_20;
  Item *curItem;
  uint local_c;
  int local_8;
  bool bVar7;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_0069e240 & 1) == 0) {
    DAT_0069e240 = DAT_0069e240 | 1;
    g_ItemSize.x = 16.0;
    g_ItemSize.y = 16.0;
    g_ItemSize.z = 16.0;
  }
  bVar7 = false;
  this->item_count = 0;
  local_8 = 0;
  curItem = this->items;
  do {
    if (0x1ff < local_8) {
      if (bVar7) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_15,0);
      }
      return;
    }
    if (curItem->is_in_use != 0) {
      this->item_count = this->item_count + 1;
      if (curItem->state == 2) {
        if (0x3b < (curItem->timer).current) {
          if ((curItem->timer).current == 0x3c) {
            (curItem->startPosition).x = 0.0;
            (curItem->startPosition).y = 0.0;
            (curItem->startPosition).z = 0.0;
          }
          goto LAB_0041f7c5;
        }
        fVar5 = ((float)(curItem->timer).current + (curItem->timer).subFrame) / 60.0;
        fVar6 = 1.0 - fVar5;
        fVar7 = (curItem->startPosition).z;
        fVar1 = (curItem->startPosition).y;
        fVar2 = (curItem->targetPosition).z;
        fVar3 = (curItem->targetPosition).y;
        (curItem->currentPosition).x =
             fVar5 * (curItem->targetPosition).x + fVar6 * (curItem->startPosition).x;
        (curItem->currentPosition).y = fVar5 * fVar3 + fVar6 * fVar1;
        (curItem->currentPosition).z = fVar5 * fVar2 + fVar6 * fVar7;
      }
      else {
        if ((curItem->state == 1) ||
           ((0x7f < g_GameManager.current_power &&
            (g_Player.positionCenter.y < 128.0 != NAN(g_Player.positionCenter.y))))) {
          fVar7 = Player::FUN_00428700(&g_Player,&curItem->currentPosition);
          fVar4 = (float10)fcos((float10)fVar7);
          fVar10 = (float10)fsin((float10)fVar7);
          (curItem->startPosition).x = (float)(fVar4 * (float10)8.0);
          (curItem->startPosition).y = (float)(fVar10 * (float10)8.0);
          curItem->state = 1;
        }
        else {
          (curItem->startPosition).x = 0.0;
          (curItem->startPosition).z = 0.0;
          fVar7 = (curItem->startPosition).y;
          if (fVar7 < -2.2 != NAN(fVar7)) {
            (curItem->startPosition).y = -2.2;
          }
        }
LAB_0041f7c5:
        fVar7 = g_Supervisor.effectiveFramerateMultiplier * (curItem->startPosition).z;
        fVar1 = g_Supervisor.effectiveFramerateMultiplier * (curItem->startPosition).y;
        (curItem->currentPosition).x =
             g_Supervisor.effectiveFramerateMultiplier * (curItem->startPosition).x +
             (curItem->currentPosition).x;
        (curItem->currentPosition).y = fVar1 + (curItem->currentPosition).y;
        (curItem->currentPosition).z = fVar7 + (curItem->currentPosition).z;
        fVar7 = (curItem->currentPosition).y;
        if (g_GameManager.arcade_region_size.y + 16.0 < fVar7 !=
            (g_GameManager.arcade_region_size.y + 16.0 == fVar7)) {
          curItem->is_in_use = 0;
          GameManager::DecreaseSubrank(&g_GameManager,3);
          goto LAB_0041f512;
        }
        fVar7 = (curItem->startPosition).y;
        if (fVar7 < 3.0 == NAN(fVar7)) {
          (curItem->startPosition).y = 3.0;
        }
        else {
          (curItem->startPosition).y =
               g_Supervisor.effectiveFramerateMultiplier * 0.03 + (curItem->startPosition).y;
        }
      }
      iVar8 = Player::CalcBoxCollision(&g_Player,&curItem->currentPosition,&g_ItemSize);
      if (iVar8 == 0) {
        (curItem->timer).previous = (curItem->timer).current;
        Supervisor::TickTimer(&g_Supervisor,&(curItem->timer).current,&(curItem->timer).subFrame);
        AnmManager::ExecuteScript(g_AnmManager,&curItem->sprite);
      }
      else {
        switch(curItem->item_type) {
        case ITEM_POWER_SMALL:
          if (g_GameManager.current_power < 0x80) {
            for (local_20 = 0; iVar8 = local_20,
                g_PowerUpThresholds[local_20] <= (int)(uint)g_GameManager.current_power;
                local_20 = local_20 + 1) {
            }
            g_GameManager.power_item_count_for_score = 0;
            g_GameManager.current_power = g_GameManager.current_power + 1;
            if (0x7f < g_GameManager.current_power) {
              g_GameManager.current_power = 0x80;
              BulletManager::FUN_00414340(&g_BulletManager);
              Gui::FUN_004173d9(&g_Gui,0);
            }
            g_GameManager.score = g_GameManager.score + 10;
            g_Gui.flags = g_Gui.flags & 0xffffffcf | 0x20;
            for (; g_PowerUpThresholds[local_20] <= (int)(uint)g_GameManager.current_power;
                local_20 = local_20 + 1) {
            }
            if (local_20 == iVar8) {
              AsciiManager::CreatePopup1(&g_AsciiManager,&curItem->currentPosition,10,0xffffffff);
            }
            else {
              AsciiManager::CreatePopup1(&g_AsciiManager,&curItem->currentPosition,-1,0xff80c0ff);
              SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_POWERUP,0);
            }
          }
          else {
            g_GameManager.power_item_count_for_score = g_GameManager.power_item_count_for_score + 1;
            if (0x1e < g_GameManager.power_item_count_for_score) {
              g_GameManager.power_item_count_for_score = 0x1e;
            }
            local_c = g_PowerItemScore[(char)g_GameManager.power_item_count_for_score];
            g_GameManager.score = g_GameManager.score + local_c;
            AsciiManager::CreatePopup1
                      (&g_AsciiManager,&curItem->currentPosition,local_c,
                       (((int)local_c < 0x3200) - 1 & 0xffffff01) - 1);
          }
          GameManager::IncreaseSubrank(&g_GameManager,1);
          break;
        case ITEM_POINT:
          switch(g_GameManager.difficulty) {
          case EASY:
          case NORMAL:
            lVar9 = __ftol2((curItem->currentPosition).y);
            if (lVar9 < 0x80) {
              local_e0 = 100000;
            }
            else {
              lVar9 = __ftol2((curItem->currentPosition).y);
              local_e0 = (lVar9 + -0x80) * -100 + 60000;
            }
            local_c = local_e0;
            AsciiManager::CreatePopup1
                      (&g_AsciiManager,&curItem->currentPosition,local_e0,
                       (((int)local_e0 < 100000) - 1 & 0xffffff01) - 1);
            break;
          case HARD:
            lVar9 = __ftol2((curItem->currentPosition).y);
            if (lVar9 < 0x80) {
              local_e4 = 150000;
            }
            else {
              lVar9 = __ftol2((curItem->currentPosition).y);
              local_e4 = (lVar9 + -0x80) * -0xb4 + 100000;
            }
            local_c = local_e4;
            AsciiManager::CreatePopup1
                      (&g_AsciiManager,&curItem->currentPosition,local_e4,
                       (((int)local_e4 < 150000) - 1 & 0xffffff01) - 1);
            break;
          case LUNATIC:
            lVar9 = __ftol2((curItem->currentPosition).y);
            if (lVar9 < 0x80) {
              local_e8 = 200000;
            }
            else {
              lVar9 = __ftol2((curItem->currentPosition).y);
              local_e8 = (lVar9 + -0x80) * -0x10e + 150000;
            }
            local_c = local_e8;
            AsciiManager::CreatePopup1
                      (&g_AsciiManager,&curItem->currentPosition,local_e8,
                       (((int)local_e8 < 200000) - 1 & 0xffffff01) - 1);
            break;
          case EXTRA:
            lVar9 = __ftol2((curItem->currentPosition).y);
            if (lVar9 < 0x80) {
              local_ec = 300000;
            }
            else {
              lVar9 = __ftol2((curItem->currentPosition).y);
              local_ec = (lVar9 + -0x80) * -400 + 200000;
            }
            local_c = local_ec;
            AsciiManager::CreatePopup1
                      (&g_AsciiManager,&curItem->currentPosition,local_ec,
                       (((int)local_ec < 300000) - 1 & 0xffffff01) - 1);
          }
          g_GameManager.score = g_GameManager.score + local_c;
          g_GameManager.point_items_collected_in_stage =
               g_GameManager.point_items_collected_in_stage + 1;
          g_GameManager.field19_0x1816 = g_GameManager.field19_0x1816 + 1;
          g_Gui.flags = g_Gui.flags & 0xfffffcff | 0x200;
          fVar7 = (curItem->currentPosition).y;
          if (fVar7 < 128.0 == NAN(fVar7)) {
            GameManager::IncreaseSubrank(&g_GameManager,3);
          }
          else {
            GameManager::IncreaseSubrank(&g_GameManager,0x1e);
          }
          break;
        case ITEM_POWER_BIG:
          if (g_GameManager.current_power < 0x80) {
            for (local_28 = 0; iVar8 = local_28,
                g_PowerUpThresholds[local_28] <= (int)(uint)g_GameManager.current_power;
                local_28 = local_28 + 1) {
            }
            g_GameManager.current_power = g_GameManager.current_power + 8;
            if (0x7f < g_GameManager.current_power) {
              g_GameManager.current_power = 0x80;
              BulletManager::FUN_00414340(&g_BulletManager);
              Gui::FUN_004173d9(&g_Gui,0);
            }
            g_Gui.flags = g_Gui.flags & 0xffffffcf | 0x20;
            g_GameManager.score = g_GameManager.score + 10;
            for (; g_PowerUpThresholds[local_28] <= (int)(uint)g_GameManager.current_power;
                local_28 = local_28 + 1) {
            }
            if (local_28 == iVar8) {
              AsciiManager::CreatePopup1(&g_AsciiManager,&curItem->currentPosition,10,0xffffffff);
            }
            else {
              AsciiManager::CreatePopup1(&g_AsciiManager,&curItem->currentPosition,-1,0xff80c0ff);
              SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_POWERUP,0);
            }
          }
          else {
            g_GameManager.power_item_count_for_score = g_GameManager.power_item_count_for_score + 8;
            if (0x1e < g_GameManager.power_item_count_for_score) {
              g_GameManager.power_item_count_for_score = 0x1e;
            }
            local_c = g_PowerItemScore[(char)g_GameManager.power_item_count_for_score];
            g_GameManager.score = g_GameManager.score + local_c;
            AsciiManager::CreatePopup1
                      (&g_AsciiManager,&curItem->currentPosition,local_c,
                       (((int)local_c < 0x3200) - 1 & 0xffffff01) - 1);
          }
          break;
        case ITEM_BOMB:
          if ((char)g_GameManager.bombs_remaining < '\b') {
            g_GameManager.bombs_remaining = g_GameManager.bombs_remaining + 1;
            g_Gui.flags = g_Gui.flags & 0xfffffff3 | 8;
          }
          GameManager::IncreaseSubrank(&g_GameManager,5);
          break;
        case ITEM_FULL_POWER:
          if (g_GameManager.current_power < 0x80) {
            BulletManager::FUN_00414340(&g_BulletManager);
            Gui::FUN_004173d9(&g_Gui,0);
            SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_POWERUP,0);
            AsciiManager::CreatePopup1(&g_AsciiManager,&curItem->currentPosition,-1,0xff80c0ff);
          }
          g_GameManager.current_power = 0x80;
          g_GameManager.score = g_GameManager.score + 1000;
          AsciiManager::CreatePopup1(&g_AsciiManager,&curItem->currentPosition,1000,0xffffffff);
          g_Gui.flags = g_Gui.flags & 0xffffffcf | 0x20;
          break;
        case ITEM_LIFE:
          if ((char)g_GameManager.lives_remaining < '\b') {
            g_GameManager.lives_remaining = g_GameManager.lives_remaining + 1;
            g_Gui.flags = g_Gui.flags & 0xfffffffc | 2;
          }
          GameManager::IncreaseSubrank(&g_GameManager,200);
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_1UP,0);
          break;
        case ITEM_POINT_BULLET:
          local_c = ((int)g_GameManager.graze_in_stage / 3) * 10 + 500;
          if (g_Player.bombInfo.isInUse != 0) {
            local_c = 100;
          }
          g_GameManager.score = g_GameManager.score + local_c;
          AsciiManager::CreatePopup2(&g_AsciiManager,&curItem->currentPosition,local_c,0xffffffff);
        }
        curItem->is_in_use = 0;
        bVar7 = true;
      }
    }
LAB_0041f512:
    local_8 = local_8 + 1;
    curItem = curItem + 1;
  } while( true );
}

