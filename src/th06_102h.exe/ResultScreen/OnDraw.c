
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ChainCallbackResult th06::ResultScreen::OnDraw(ResultScreen *param_1)

{
  D3DXVECTOR3 *pDVar1;
  float fVar2;
  ChainCallbackResult CVar3;
  uint unaff_retaddr;
  int local_d0;
  int local_8c;
  int local_84;
  char local_5c;
  undefined local_5b;
  float local_4c;
  float local_48;
  int local_44;
  D3DXVECTOR3 local_40;
  ScoreListNode *local_34;
  int local_30;
  ScoreListNode *local_2c;
  AnmVm *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined local_1c;
  uint local_18;
  int local_14;
  D3DXVECTOR3 local_10;
  
  local_18 = __security_cookie ^ unaff_retaddr;
  local_28 = &param_1->unk_40;
  g_Supervisor.viewport.X = 0;
  g_Supervisor.viewport.Y = 0;
  g_Supervisor.viewport.Width = 0x280;
  g_Supervisor.viewport.Height = 0x1e0;
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)(g_Supervisor.d3dDevice,&g_Supervisor.viewport);
  AnmManager::CopySurfaceToBackBuffer(g_AnmManager,0,0,0,0,0);
  for (local_14 = 0; local_14 < 0x26; local_14 = local_14 + 1) {
    local_40.x = (local_28->pos).x;
    local_40.y = (local_28->pos).y;
    local_40.z = (local_28->pos).z;
    (local_28->pos).x = (local_28->pos).x + (local_28->offset).x;
    (local_28->pos).y = (local_28->pos).y + (local_28->offset).y;
    (local_28->pos).z = (local_28->pos).z + (local_28->offset).z;
    AnmManager::DrawNoRotation(g_AnmManager,local_28);
    (local_28->pos).x = local_40.x;
    (local_28->pos).y = local_40.y;
    (local_28->pos).z = local_40.z;
    local_28 = local_28 + 1;
  }
  local_28 = &param_1->field32_0xf20;
  fVar2 = (param_1->field32_0xf20).pos.x;
  if (fVar2 < 640.0 != NAN(fVar2)) {
    if (param_1->field3_0xc == 8) {
      local_40.x = (param_1->field32_0xf20).pos.x;
      local_40.z = (param_1->field32_0xf20).pos.z;
      local_40.y = (param_1->field32_0xf20).pos.y + 16.0;
      for (local_14 = 0;
          (local_14 < 10 &&
          (local_44 = param_1->lastSpellcardSelected * 10 + local_14, local_44 < 0x40));
          local_14 = local_14 + 1) {
        pDVar1 = &(&param_1->unk_28a0)[local_14].pos;
        pDVar1->x = local_40.x;
        pDVar1->y = local_40.y;
        pDVar1->z = local_40.z;
        if (g_GameManager.catk[local_44].num_successes == 0) {
          g_AsciiManager.color = 0x80c0c0ff;
        }
        else if (g_GameManager.catk[local_44].unk_3e == 0) {
          g_AsciiManager.color = 0xffc0a0a0;
        }
        else {
          g_AsciiManager.color = local_14 * -0x80800 - 0xf0f01;
        }
        AsciiManager::AddFormatText(&g_AsciiManager,&local_40,"No.%.2d",local_44 + 1);
        pDVar1 = &(&param_1->unk_28a0)[local_14].pos;
        pDVar1->x = pDVar1->x + 96.0;
        AnmManager::DrawNoRotation(g_AnmManager,&param_1->unk_28a0 + local_14);
        local_40.x = local_40.x + 368.0;
        AsciiManager::AddFormatText
                  (&g_AsciiManager,&local_40,"%3d/%3d",
                   (uint)(ushort)g_GameManager.catk[local_44].unk_3e,
                   (uint)(ushort)g_GameManager.catk[local_44].num_successes);
        local_40.x = local_40.x - 368.0;
        local_40.y = local_40.y + 30.0;
      }
    }
    else {
      local_40.x = (param_1->field32_0xf20).pos.x;
      local_40.y = (param_1->field32_0xf20).pos.y;
      local_40.z = (param_1->field32_0xf20).pos.z;
      (param_1->unk_28a0).pos.x = local_40.x;
      (param_1->unk_28a0).pos.y = local_40.y;
      (param_1->unk_28a0).pos.z = local_40.z;
      AnmManager::DrawNoRotation(g_AnmManager,&param_1->unk_28a0);
      local_40.x = local_40.x + 320.0;
      (param_1->field57_0x29b0).pos.x = local_40.x;
      (param_1->field57_0x29b0).pos.y = local_40.y;
      (param_1->field57_0x29b0).pos.z = local_40.z;
      AnmManager::DrawNoRotation(g_AnmManager,&param_1->field57_0x29b0);
      local_40.x = local_40.x - 320.0;
      local_40.y = local_40.y + 18.0;
      local_2c = param_1->scores[param_1->diffPlayed * 4 + param_1->charUsed * 2].next;
      local_34 = param_1->scores[param_1->diffPlayed * 4 + param_1->charUsed * 2 + 1].next;
      for (local_14 = 0; local_40.y = local_40.y + 18.0, local_14 < 10; local_14 = local_14 + 1) {
        if (param_1->resultScreenState == 9) {
          if (g_GameManager.shottype == 0) {
            if ((local_2c->data->base).field_0x9 == '\0') {
              g_AsciiManager.color = 0x80ffffc0;
            }
            else {
              g_AsciiManager.color = 0xfff0f0ff;
              local_24._0_1_ = ' ';
              local_24._1_1_ = ' ';
              local_24._2_1_ = ' ';
              local_24._3_1_ = ' ';
              local_20._0_1_ = ' ';
              local_20._1_1_ = ' ';
              local_20._2_1_ = ' ';
              local_20._3_1_ = ' ';
              local_1c = 0;
              if (param_1->cursor < 8) {
                local_84 = param_1->cursor;
              }
              else {
                local_84 = 7;
              }
              *(undefined *)((int)&local_24 + local_84) = 0x5f;
              AsciiManager::AddFormatText(&g_AsciiManager,&local_40,"   %8s",&local_24);
            }
          }
          else {
            g_AsciiManager.color = 0x80ffc0c0;
          }
        }
        else {
          g_AsciiManager.color = 0xffffc0c0;
        }
        AsciiManager::AddFormatText
                  (&g_AsciiManager,&local_40,
                   (char *)&
                           PTR_g_BulletManager_bullets_421__sprites_spriteBullet_posInterpFinal_x_1_0046bdd0
                   ,local_14 + 1);
        local_40.x = local_40.x + 36.0;
        if (local_2c->data->stage < 7) {
          AsciiManager::AddFormatText
                    (&g_AsciiManager,&local_40,"%8s %9d(%d)",local_2c->data->name,
                     local_2c->data->score,(uint)local_2c->data->stage);
        }
        else if (local_2c->data->stage == 7) {
          AsciiManager::AddFormatText
                    (&g_AsciiManager,&local_40,"%8s %9d(1)",local_2c->data->name,
                     local_2c->data->score);
        }
        else {
          AsciiManager::AddFormatText
                    (&g_AsciiManager,&local_40,"%8s %9d(C)",local_2c->data->name,
                     local_2c->data->score);
        }
        local_40.x = local_40.x + 300.0;
        if (param_1->resultScreenState == 9) {
          if (g_GameManager.shottype == 1) {
            if ((local_34->data->base).field_0x9 == '\0') {
              g_AsciiManager.color = 0xc0c0c0ff;
            }
            else {
              g_AsciiManager.color = 0xfffff0f0;
              local_24._0_1_ = ' ';
              local_24._1_1_ = ' ';
              local_24._2_1_ = ' ';
              local_24._3_1_ = ' ';
              local_20._0_1_ = ' ';
              local_20._1_1_ = ' ';
              local_20._2_1_ = ' ';
              local_20._3_1_ = ' ';
              local_1c = 0;
              if (param_1->cursor < 8) {
                local_8c = param_1->cursor;
              }
              else {
                local_8c = 7;
              }
              *(undefined *)((int)&local_24 + local_8c) = 0x5f;
              AsciiManager::AddFormatText(&g_AsciiManager,&local_40,"%8s",&local_24);
            }
          }
          else {
            g_AsciiManager.color = 0x80c0c0ff;
          }
        }
        else {
          g_AsciiManager.color = 0xffc0c0ff;
        }
        if (local_34->data->stage < 7) {
          AsciiManager::AddFormatText
                    (&g_AsciiManager,&local_40,"%8s %9d(%d)",local_34->data->name,
                     local_34->data->score,(uint)local_34->data->stage);
        }
        else if (local_34->data->stage == 7) {
          AsciiManager::AddFormatText
                    (&g_AsciiManager,&local_40,"%8s %9d(1)",local_34->data->name,
                     local_34->data->score);
        }
        else {
          AsciiManager::AddFormatText
                    (&g_AsciiManager,&local_40,"%8s %9d(C)",local_34->data->name,
                     local_34->data->score);
        }
        local_40.x = local_40.x - 336.0;
        local_2c = local_2c->next;
        local_34 = local_34->next;
      }
    }
  }
  if ((param_1->resultScreenState == 9) || (param_1->resultScreenState == 0xd)) {
    local_40.x = 160.0;
    local_40.y = 356.0;
    local_40.z = 0.0;
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      for (local_30 = 0; local_30 < 0x10; local_30 = local_30 + 1) {
        local_48 = 0.0;
        if (param_1->possibly_selected_character == local_14 * 0x10 + local_30) {
          g_AsciiManager.color = 0xffffffc0;
          if (param_1->frameTimer % 0x40 < 0x20) {
            local_48 = ((float)(param_1->frameTimer % 0x20) * 0.8) / 32.0 + 1.2;
          }
          else {
            local_48 = 2.0 - ((float)(param_1->frameTimer % 0x20) * 0.8) / 32.0;
          }
          g_AsciiManager.scale.y = local_48;
          local_48 = -(local_48 - 1.0) * 8.0;
        }
        else {
          g_AsciiManager.color = 0x60c0c0c0;
          g_AsciiManager.scale.y = 1.0;
        }
        local_10.z = local_40.z;
        local_10.x = local_40.x + local_48;
        local_10.y = local_40.y + local_48;
        local_5c = g_AlphabetList[local_14 * 0x10 + local_30];
        local_5b = 0;
        if (local_14 == 5) {
          if (local_30 == 0xe) {
            local_5c = -0x80;
          }
          else if (local_30 == 0xf) {
            local_5c = -0x7f;
          }
        }
        g_AsciiManager.scale.x = g_AsciiManager.scale.y;
        local_4c = local_48;
        AsciiManager::AddString(&g_AsciiManager,&local_10,&local_5c);
        local_40.x = local_40.x + 20.0;
      }
      local_40.x = local_40.x - (float)(local_30 * 0x14);
      local_40.y = local_40.y + 18.0;
    }
  }
  g_AsciiManager.scale.x = 1.0;
  g_AsciiManager.scale.y = 1.0;
  if ((9 < param_1->resultScreenState) && (param_1->resultScreenState < 0xf)) {
    local_28 = &param_1->field33_0x1030;
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      AnmManager::DrawNoRotation(g_AnmManager,local_28);
      local_28 = local_28 + 1;
    }
    local_40.x = (param_1->field39_0x1690).pos.x;
    local_40.y = (param_1->field39_0x1690).pos.y;
    local_40.z = (param_1->field39_0x1690).pos.z;
    local_28 = &param_1->field40_0x17a0;
    AsciiManager::AddFormatText(&g_AsciiManager,&local_40,"No.   Name     Date     Player Score");
    for (local_14 = 0; local_14 < 0xf; local_14 = local_14 + 1) {
      local_40.x = (local_28->pos).x;
      local_40.y = (local_28->pos).y;
      local_40.z = (local_28->pos).z;
      local_28 = local_28 + 1;
      if (local_14 == param_1->field7_0x1c) {
        g_AsciiManager.color = 0xffff8080;
      }
      else {
        g_AsciiManager.color = 0xff808080;
      }
      if (param_1->resultScreenState == 0xd) {
        AsciiManager::AddFormatText
                  (&g_AsciiManager,&local_40,"No.%.2d %8s %8s %7s %9d",local_14 + 1,
                   param_1->replayname,(param_1->defaultReplay).date,
                   (&PTR_s_ReimuA_00478518)
                   [(uint)g_GameManager.shottype + (uint)g_GameManager.character * 2],
                   (param_1->defaultReplay).score);
        g_AsciiManager.color = 0xfff0f0ff;
        local_24._0_1_ = ' ';
        local_24._1_1_ = ' ';
        local_24._2_1_ = ' ';
        local_24._3_1_ = ' ';
        local_20._0_1_ = ' ';
        local_20._1_1_ = ' ';
        local_20._2_1_ = ' ';
        local_20._3_1_ = ' ';
        local_1c = 0;
        if (param_1->cursor < 8) {
          local_d0 = param_1->cursor;
        }
        else {
          local_d0 = 7;
        }
        *(undefined *)((int)&local_24 + local_d0) = 0x5f;
        AsciiManager::AddFormatText(&g_AsciiManager,&local_40,"      %8s",&local_24);
      }
      else if (((char  [4])param_1->replays[local_14].magic == (char  [4])0x50523654) &&
              (param_1->replays[local_14].version == 0x102)) {
        AsciiManager::AddFormatText
                  (&g_AsciiManager,&local_40,"No.%.2d %8s %8s %7s %9d",local_14 + 1,
                   param_1->replays[local_14].name,param_1->replays[local_14].date,
                   (&PTR_s_ReimuA_00478518)[param_1->replays[local_14].shottype_chara],
                   param_1->replays[local_14].score);
      }
      else {
        AsciiManager::AddFormatText
                  (&g_AsciiManager,&local_40,"No.%.2d -------- --/--/-- -------         0",
                   local_14 + 1);
      }
    }
  }
  g_AsciiManager.color = 0xffffffff;
  DrawFinalStats(param_1);
  CVar3 = CHAIN_CALLBACK_RESULT_CONTINUE;
  __security_check_cookie(local_18 ^ unaff_retaddr);
  return CVar3;
}

