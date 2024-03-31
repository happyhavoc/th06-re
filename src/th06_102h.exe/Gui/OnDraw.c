
void Gui::OnDraw(Gui *arg)

{
  char cVar1;
  uint unaff_retaddr;
  char *local_40;
  char local_34;
  undefined auStack_33 [31];
  uint local_14;
  D3DXVECTOR3 local_10;
  
  local_14 = __security_cookie ^ unaff_retaddr;
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZFUNC,8);
  if (arg->impl->field13_0x2bdc != 0) {
    local_10.x = 74.0;
    local_10.y = 128.0;
    local_10.z = 0.0;
    g_AsciiManager.color = 0xffffff40;
    if (g_GameManager.current_stage < 6) {
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Stage Clear\n\n");
    }
    else {
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"All Clear!\n\n");
    }
    local_10.y = local_10.y + 32.0;
    g_AsciiManager.color = 0xffffffff;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_10,"Stage * 1000 = %5d\n",g_GameManager.current_stage * 1000);
    local_10.y = local_10.y + 16.0;
    g_AsciiManager.color = 0xffe0e0ff;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_10,"Power *  100 = %5d\n",
               (uint)g_GameManager.current_power * 100);
    local_10.y = local_10.y + 16.0;
    g_AsciiManager.color = 0xffd0d0ff;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_10,"Graze *   10 = %5d\n",g_GameManager.graze_in_stage * 10);
    local_10.y = local_10.y + 16.0;
    g_AsciiManager.color = 0xffff8080;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_10,"    * Point Item %3d\n",
               (uint)g_GameManager.point_items_collected_in_stage);
    if (5 < g_GameManager.current_stage) {
      local_10.y = local_10.y + 16.0;
      g_AsciiManager.color = 0xffffff80;
      AsciiManager::AddFormatText
                (&g_AsciiManager,&local_10,"Player    = %8d\n",
                 (char)g_GameManager.lives_remaining * 3000000);
      local_10.y = local_10.y + 16.0;
      AsciiManager::AddFormatText
                (&g_AsciiManager,&local_10,"Bomb      = %8d\n",
                 (char)g_GameManager.bombs_remaining * 1000000);
    }
    local_10.y = local_10.y + 32.0;
    if (g_GameManager.difficulty == EASY) {
      g_AsciiManager.color = 0xffff8080;
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Easy Rank      * 0.5\n");
    }
    else if (g_GameManager.difficulty == NORMAL) {
      g_AsciiManager.color = 0xffff8080;
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Normal Rank    * 1.0\n");
    }
    else if (g_GameManager.difficulty == HARD) {
      g_AsciiManager.color = 0xffff8080;
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Hard Rank      * 1.2\n");
    }
    else if (g_GameManager.difficulty == LUNATIC) {
      g_AsciiManager.color = 0xffff8080;
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Lunatic Rank   * 1.5\n");
    }
    else if (g_GameManager.difficulty == EXTRA) {
      g_AsciiManager.color = 0xffff8080;
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Extra Rank     * 2.0\n");
    }
    local_10.y = local_10.y + 16.0;
    if (((int)g_GameManager.difficulty < 4) && (g_GameManager.field32_0x1823 == 0)) {
      if (g_Supervisor.lifeCount == 3) {
        g_AsciiManager.color = 0xffff8080;
        AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Player Penalty * 0.5\n");
        local_10.y = local_10.y + 16.0;
      }
      else if (g_Supervisor.lifeCount == 4) {
        g_AsciiManager.color = 0xffff8080;
        AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Player Penalty * 0.2\n");
        local_10.y = local_10.y + 16.0;
      }
    }
    g_AsciiManager.color = 0xffffffff;
    AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Total     = %8d",arg->impl->stage_score);
    g_AsciiManager.color = 0xffffffff;
  }
  FUN_004190ec((Gui *)arg->impl);
  FUN_0041adf3(arg);
  FUN_00419c99(arg);
  g_AsciiManager.isGui = 1;
  if ((arg->impl->field15_0x2be4).field2_0x10 != 0) {
    g_AsciiManager.color = 0xffffff80;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&(arg->impl->field15_0x2be4).field0_0x0,"BONUS %8d",
               (arg->impl->field15_0x2be4).field1_0xc);
    g_AsciiManager.color = 0xffffffff;
  }
  if ((arg->impl->field16_0x2c04).field2_0x10 != 0) {
    g_AsciiManager.color = 0xffc0b0ff;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&(arg->impl->field16_0x2c04).field0_0x0,"Full Power Mode!!",
               (arg->impl->field16_0x2c04).field1_0xc);
    g_AsciiManager.color = 0xffffffff;
  }
  if ((arg->impl->field17_0x2c24).field2_0x10 != 0) {
    g_AsciiManager.color = 0xffff0000;
    (arg->impl->field17_0x2c24).field0_0x0.x = 88.0;
    (arg->impl->field17_0x2c24).field0_0x0.y = 80.0;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&(arg->impl->field17_0x2c24).field0_0x0,"Spell Card Bonus!");
    (arg->impl->field17_0x2c24).field0_0x0.y = (arg->impl->field17_0x2c24).field0_0x0.y + 16.0;
    sprintf(&local_34,
            (char *)&
                    PTR_g_BulletManager_bullets_418__vms_spawn_effect_short_with_memset_pos2_y_3_0046a7f4
            ,(arg->impl->field17_0x2c24).field1_0xc);
    local_40 = &local_34;
    do {
      cVar1 = *local_40;
      local_40 = local_40 + 1;
    } while (cVar1 != '\0');
    (arg->impl->field17_0x2c24).field0_0x0.x =
         (384.0 - (float)(ulonglong)(uint)((int)local_40 - (int)auStack_33) * 32.0) / 2.0 + 32.0;
    g_AsciiManager.scale.x = 2.0;
    g_AsciiManager.scale.y = 2.0;
    g_AsciiManager.color = 0xffff8080;
    AsciiManager::AddString(&g_AsciiManager,&(arg->impl->field17_0x2c24).field0_0x0,&local_34);
    g_AsciiManager.scale.x = 1.0;
    g_AsciiManager.scale.y = 1.0;
    g_AsciiManager.color = 0xffffffff;
  }
  g_AsciiManager.isGui = 0;
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZFUNC,4);
  __security_check_cookie(local_14 ^ unaff_retaddr);
  return;
}

