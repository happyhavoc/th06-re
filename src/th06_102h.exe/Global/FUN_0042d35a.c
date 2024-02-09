
undefined4 __fastcall FUN_0042d35a(int param_1)

{
  float local_34;
  float local_20;
  D3DXVECTOR3 local_14;
  int local_8;
  
  if ((0xe < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 0x11)) {
    local_8 = param_1 + 0x2790;
    g_AsciiManager.color = *(D3DCOLOR *)(param_1 + 0x280c);
    if ((int)g_GameManager.difficulty < 4) {
      local_34 = (float)g_GameManager.field58_0x1a6c / 89500.0;
    }
    else {
      local_34 = (float)g_GameManager.field58_0x1a6c / 39600.0;
    }
    local_14.z = *(float *)(param_1 + 0x2828);
    local_14.x = *(float *)(param_1 + 0x2820) + 224.0;
    local_14.y = *(float *)(param_1 + 0x2824) + 32.0;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_14,
               (char *)&
                       PTR_g_BulletManager_bullets_422__vms_spawn_effect_short_alphaInterpTime_subFrame_1_0046bcc0
              );
    local_14.y = local_14.y + 22.0;
    AsciiManager::AddString
              (&g_AsciiManager,&local_14,(&PTR_s__Easy_00478504)[g_GameManager.difficulty]);
    local_14.y = local_14.y + 22.0;
    if ((g_GameManager.difficulty == 0) || (g_GameManager.unk_1822 == 0)) {
      AsciiManager::AddFormatText
                (&g_AsciiManager,&local_14,"    %3.2f%%",(double)(local_34 * 100.0));
    }
    else {
      AsciiManager::AddFormatText(&g_AsciiManager,&local_14,"      100%%");
    }
    local_14.y = local_14.y + 22.0;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_14,
               (char *)&
                       PTR_g_BulletManager_bullets_422__vms_spawn_effect_short_alphaInterpTime_subFrame_1_0046bcc0
              );
    local_14.y = local_14.y + 22.0;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_14,
               (char *)&
                       PTR_g_BulletManager_bullets_422__vms_spawn_effect_short_alphaInterpTime_subFrame_1_0046bcc0
              );
    local_14.y = local_14.y + 22.0;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_14,
               (char *)&
                       PTR_g_BulletManager_bullets_422__vms_spawn_effect_short_alphaInterpTime_subFrame_1_0046bcc0
              );
    local_14.y = local_14.y + 22.0;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_14,
               (char *)&
                       PTR_g_BulletManager_bullets_422__vms_spawn_effect_short_alphaInterpTime_subFrame_1_0046bcc0
              );
    local_20 = g_Supervisor.unk1b4 / g_Supervisor.unk1b8 - 0.5;
    local_20 = local_20 + local_20;
    if (local_20 < 0.0 == NAN(local_20)) {
      if (1.0 <= local_20) {
        local_20 = 1.0;
      }
    }
    else {
      local_20 = 0.0;
    }
    local_14.y = local_14.y + 22.0;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_14,"    %3.2f%%",(double)((1.0 - local_20) * 100.0));
    g_AsciiManager.color = 0xffffffff;
  }
  return 0;
}

