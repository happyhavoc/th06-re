
undefined4 FUN_0042d35a(void)

{
  int in_ECX;
  float local_34;
  float local_20;
  D3DXVECTOR3 local_14;
  int local_8;
  
  if ((0xe < *(int *)(in_ECX + 8)) && (*(int *)(in_ECX + 8) < 0x11)) {
    local_8 = in_ECX + 0x2790;
    g_AsciiManager.color = *(D3DCOLOR *)(in_ECX + 0x280c);
    if ((int)g_GameManager.difficulty < 4) {
      local_34 = (float)g_GameManager._6764_4_ / 89500.0;
    }
    else {
      local_34 = (float)g_GameManager._6764_4_ / 39600.0;
    }
    local_14.z = *(float *)(in_ECX + 0x2828);
    local_14.x = *(float *)(in_ECX + 0x2820) + 224.0;
    local_14.y = *(float *)(in_ECX + 0x2824) + 32.0;
    AsciiManager::FUN_00401650(&g_AsciiManager,&local_14.x,(char *)&PTR_DAT_0046bcc0);
    local_14.y = local_14.y + 22.0;
    AsciiManager::FUN_00401530
              (&g_AsciiManager,&local_14,(&PTR_s__Easy_00478504)[g_GameManager.difficulty]);
    local_14.y = local_14.y + 22.0;
    if ((g_GameManager.difficulty == 0) || (g_GameManager.unk_1822 == 0)) {
      AsciiManager::FUN_00401650
                (&g_AsciiManager,&local_14.x,"    %3.2f%%",(double)(local_34 * 100.0));
    }
    else {
      AsciiManager::FUN_00401650(&g_AsciiManager,&local_14.x,"      100%%");
    }
    local_14.y = local_14.y + 22.0;
    AsciiManager::FUN_00401650(&g_AsciiManager,&local_14.x,(char *)&PTR_DAT_0046bcc0);
    local_14.y = local_14.y + 22.0;
    AsciiManager::FUN_00401650(&g_AsciiManager,&local_14.x,(char *)&PTR_DAT_0046bcc0);
    local_14.y = local_14.y + 22.0;
    AsciiManager::FUN_00401650(&g_AsciiManager,&local_14.x,(char *)&PTR_DAT_0046bcc0);
    local_14.y = local_14.y + 22.0;
    AsciiManager::FUN_00401650(&g_AsciiManager,&local_14.x,(char *)&PTR_DAT_0046bcc0);
    local_20 = (float)g_GameContext._436_4_ / (float)g_GameContext._440_4_ - 0.5;
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
    AsciiManager::FUN_00401650
              (&g_AsciiManager,&local_14.x,"    %3.2f%%",(double)((1.0 - local_20) * 100.0));
    g_AsciiManager.color = 0xffffffff;
  }
  return 0;
}

