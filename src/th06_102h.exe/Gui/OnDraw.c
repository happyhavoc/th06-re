
void Gui::OnDraw(uint *param_1)

{
  char cVar1;
  uint unaff_retaddr;
  char *local_40;
  char local_34;
  undefined auStack_33 [31];
  uint local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  
  local_14 = __security_cookie ^ unaff_retaddr;
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZFUNC,8);
  if (*(int *)(param_1[1] + 0x2bdc) != 0) {
    local_10 = 0x42940000;
    local_c = 128.0;
    local_8 = 0;
    g_AsciiManager.color = 0xffffff40;
    if ((int)g_GameManager.current_stage < 6) {
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Stage Clear\n\n");
    }
    else {
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"All Clear!\n\n");
    }
    local_c = local_c + 32.0;
    g_AsciiManager.color = 0xffffffff;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_10,"Stage * 1000 = %5d\n",g_GameManager.current_stage * 1000);
    local_c = local_c + 16.0;
    g_AsciiManager.color = 0xffe0e0ff;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_10,"Power *  100 = %5d\n",
               (uint)g_GameManager.current_power * 100);
    local_c = local_c + 16.0;
    g_AsciiManager.color = 0xffd0d0ff;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_10,"Graze *   10 = %5d\n",g_GameManager.graze_in_stage * 10);
    local_c = local_c + 16.0;
    g_AsciiManager.color = 0xffff8080;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_10,"    * Point Item %3d\n",
               (uint)g_GameManager.point_items_collected_in_stage);
    if (5 < (int)g_GameManager.current_stage) {
      local_c = local_c + 16.0;
      g_AsciiManager.color = 0xffffff80;
      AsciiManager::AddFormatText
                (&g_AsciiManager,&local_10,"Player    = %8d\n",
                 (char)g_GameManager.lives_remaining * 3000000);
      local_c = local_c + 16.0;
      AsciiManager::AddFormatText
                (&g_AsciiManager,&local_10,"Bomb      = %8d\n",
                 (char)g_GameManager.bombs_remaining * 1000000);
    }
    local_c = local_c + 32.0;
    if (g_GameManager.difficulty == 0) {
      g_AsciiManager.color = 0xffff8080;
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Easy Rank      * 0.5\n");
    }
    else if (g_GameManager.difficulty == 1) {
      g_AsciiManager.color = 0xffff8080;
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Normal Rank    * 1.0\n");
    }
    else if (g_GameManager.difficulty == 2) {
      g_AsciiManager.color = 0xffff8080;
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Hard Rank      * 1.2\n");
    }
    else if (g_GameManager.difficulty == 3) {
      g_AsciiManager.color = 0xffff8080;
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Lunatic Rank   * 1.5\n");
    }
    else if (g_GameManager.difficulty == 4) {
      g_AsciiManager.color = 0xffff8080;
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Extra Rank     * 2.0\n");
    }
    local_c = local_c + 16.0;
    if (((int)g_GameManager.difficulty < 4) && (g_GameManager.field30_0x1823 == 0)) {
      if (g_Supervisor.lifeCount == 3) {
        g_AsciiManager.color = 0xffff8080;
        AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Player Penalty * 0.5\n");
        local_c = local_c + 16.0;
      }
      else if (g_Supervisor.lifeCount == 4) {
        g_AsciiManager.color = 0xffff8080;
        AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"Player Penalty * 0.2\n");
        local_c = local_c + 16.0;
      }
    }
    g_AsciiManager.color = 0xffffffff;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_10,"Total     = %8d",*(undefined4 *)(param_1[1] + 0x2be0));
    g_AsciiManager.color = 0xffffffff;
  }
  FUN_004190ec();
  FUN_0041adf3((int)param_1);
  FUN_00419c99(param_1);
  g_AsciiManager.isGui = 1;
  if (*(int *)(param_1[1] + 0x2bf4) != 0) {
    g_AsciiManager.color = 0xffffff80;
    AsciiManager::AddFormatText
              (&g_AsciiManager,(undefined4 *)(param_1[1] + 0x2be4),"BONUS %8d",
               *(undefined4 *)(param_1[1] + 0x2bf0));
    g_AsciiManager.color = 0xffffffff;
  }
  if (*(int *)(param_1[1] + 0x2c14) != 0) {
    g_AsciiManager.color = 0xffc0b0ff;
    AsciiManager::AddFormatText
              (&g_AsciiManager,(undefined4 *)(param_1[1] + 0x2c04),"Full Power Mode!!",
               *(undefined4 *)(param_1[1] + 0x2c10));
    g_AsciiManager.color = 0xffffffff;
  }
  if (*(int *)(param_1[1] + 0x2c34) != 0) {
    g_AsciiManager.color = 0xffff0000;
    *(undefined4 *)(param_1[1] + 0x2c24) = 0x42b00000;
    *(undefined4 *)(param_1[1] + 0x2c28) = 0x42a00000;
    AsciiManager::AddFormatText
              (&g_AsciiManager,(undefined4 *)(param_1[1] + 0x2c24),"Spell Card Bonus!");
    *(float *)(param_1[1] + 0x2c28) = *(float *)(param_1[1] + 0x2c28) + 16.0;
    sprintf(&local_34,(char *)&PTR_DAT_0046a7f4,*(undefined4 *)(param_1[1] + 0x2c30));
    local_40 = &local_34;
    do {
      cVar1 = *local_40;
      local_40 = local_40 + 1;
    } while (cVar1 != '\0');
    *(float *)(param_1[1] + 0x2c24) =
         (384.0 - (float)(ulonglong)(uint)((int)local_40 - (int)auStack_33) * 32.0) / 2.0 + 32.0;
    g_AsciiManager.scale.x = 2.0;
    g_AsciiManager.scale.y = 2.0;
    g_AsciiManager.color = 0xffff8080;
    AsciiManager::AddString(&g_AsciiManager,(D3DXVECTOR3 *)(param_1[1] + 0x2c24),&local_34);
    g_AsciiManager.scale.x = 1.0;
    g_AsciiManager.scale.y = 1.0;
    g_AsciiManager.color = 0xffffffff;
  }
  g_AsciiManager.isGui = 0;
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZFUNC,4);
  __security_check_cookie(local_14 ^ unaff_retaddr);
  return;
}
