
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00420e60(void)

{
  bool bVar1;
  int iVar2;
  undefined4 unaff_EBP;
  int *piVar3;
  int *piVar4;
  vec3f local_84;
  vec3f local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c [5];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined local_18 [12];
  int local_c;
  uint local_5;
  undefined uStack_1;
  
  uStack_1 = (undefined)((uint)unaff_EBP >> 0x18);
  local_5 = CONCAT31((int3)unaff_EBP,1);
  piVar3 = local_4c;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  (*(code *)(g_GameContext.d3d_iface)->vtbl->GetAdapterDisplayMode)
            (g_GameContext.d3d_iface,0,local_18);
  if (g_GameContext.cfg.field14_0x1e == 0) {
    if (((uint)g_GameContext.cfg.field34_0x34 >> 2 & 1) == 1) {
      local_4c[2] = 0x17;
      g_GameContext.cfg.field10_0x1a = 1;
    }
    else if (g_GameContext.cfg.field10_0x1a == 0xff) {
      if ((local_c == 0x16) || (local_c == 0x15)) {
        local_4c[2] = 0x16;
        g_GameContext.cfg.field10_0x1a = 0;
        GameErrorContextLog(&g_GameErrorContext,
                            "初回起動、画面を 32Bits で初期化しました\n");
      }
      else {
        local_4c[2] = 0x17;
        g_GameContext.cfg.field10_0x1a = 1;
        GameErrorContextLog(&g_GameErrorContext,
                            "初回起動、画面を 16Bits で初期化しました\n");
      }
    }
    else if (g_GameContext.cfg.field10_0x1a == 0) {
      local_4c[2] = 0x16;
    }
    else {
      local_4c[2] = 0x17;
    }
    if (((uint)g_GameContext.cfg.field34_0x34 >> 7 & 1) == 0) {
      local_1c = 1;
    }
    else {
      local_20 = 0x3c;
      local_1c = 1;
      GameErrorContextLog(&g_GameErrorContext,
                          "リフレッシュレートを60Hzに変更します\n");
    }
    if (g_GameContext.cfg.field15_0x1f == 0) {
      local_38 = 2;
    }
    else {
      local_38 = 4;
    }
  }
  else {
    local_4c[2] = local_c;
    local_38 = 3;
    local_30 = 1;
  }
  local_4c[0] = 0x280;
  local_4c[1] = 0x1e0;
  local_2c = 1;
  local_28 = 0x50;
  local_24 = 1;
  DAT_006c7115 = 1;
  piVar3 = local_4c;
  piVar4 = (int *)&g_GameContext.field_0xe0;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  do {
    if (((uint)g_GameContext.cfg.field34_0x34 >> 9 & 1) == 0) {
      iVar2 = (*(code *)(g_GameContext.d3d_iface)->vtbl->CreateDevice)
                        (g_GameContext.d3d_iface,0,1,GAME_WINDOW,0x40,local_4c);
      if (-1 < iVar2) {
        GameErrorContextLog(&g_GameErrorContext,"T&L HAL で動作しま〜す\n");
        DAT_006c7114 = 1;
        goto LAB_004211ab;
      }
      GameErrorContextLog(&g_GameErrorContext,"T&L HAL は使用できないようです\n");
      iVar2 = (*(code *)(g_GameContext.d3d_iface)->vtbl->CreateDevice)
                        (g_GameContext.d3d_iface,0,1,GAME_WINDOW,0x20,local_4c);
      if (iVar2 < 0) {
        GameErrorContextLog(&g_GameErrorContext,"HAL も使用できないようです\n");
        goto LAB_00421077;
      }
      GameErrorContextLog(&g_GameErrorContext,"HAL で動作します\n");
LAB_00421190:
      DAT_006c7114 = 0;
LAB_004211ab:
      local_58 = 320.0;
      local_54 = 240.0;
      local_5c = 1.333333;
      local_60 = 0.5235988;
      local_50 = fload_withFB(0);
      local_50 = local_54 / local_50;
      local_6c = 0;
      local_68 = 0x3f800000;
      local_64 = 0;
      local_78.x = local_58;
      local_78.y = -local_54;
      local_78.z = 0.0;
      local_84.x = local_58;
      local_84.y = -local_54;
      local_84.z = -local_50;
      FUN_0043f561((float *)&g_GameContext.field_0x48,&local_84,&local_78,&local_6c);
      FUN_0043efee((float *)&g_GameContext.field_0x88,local_60,local_5c,100.0,10000.0);
      (**(code **)(*(int *)g_GameContext._8_4_ + 0x94))(g_GameContext._8_4_,2,0x6c6d60);
      (**(code **)(*(int *)g_GameContext._8_4_ + 0x94))(g_GameContext._8_4_,3,0x6c6da0);
      (**(code **)(*(int *)g_GameContext._8_4_ + 0xa4))(g_GameContext._8_4_,0x6c6de0);
      (**(code **)(*(int *)g_GameContext._8_4_ + 0x1c))(g_GameContext._8_4_,&DAT_006c711c);
      if (((g_GameContext.cfg.field34_0x34 & 1U) == 0) && ((DAT_006c71ac & 0x40) == 0)) {
        GameErrorContextLog(&g_GameErrorContext,
                            "D3DTEXOPCAPS_ADD をサポートしていません、色加算エミュレートモードで動作します\n"
                           );
        g_GameContext.cfg.field34_0x34 = g_GameContext.cfg.field34_0x34 | 1;
      }
      if ((((uint)g_GameContext.cfg.field34_0x34 >> 7 & 1) == 0) ||
         (g_GameContext.field352_0x1a0 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && ((DAT_006c7130 & 0x80000000) == 0)) {
        GameErrorContextLog(&g_GameErrorContext,
                            "ビデオカードが非同期フリップをサポートしていません、Force60Frameで動作できません\n"
                           );
        g_GameContext.cfg.field34_0x34 = g_GameContext.cfg.field34_0x34 & 0xffffff7f;
      }
      if ((((uint)g_GameContext.cfg.field34_0x34 >> 2 & 1) == 0) && ((local_5 & 0xff) != 0)) {
        iVar2 = (*(code *)(g_GameContext.d3d_iface)->vtbl->CheckDeviceFormat)
                          (g_GameContext.d3d_iface,0,1,local_4c[2],0,3,0x15);
        if (iVar2 == 0) {
          DAT_006c7116 = 1;
        }
        else {
          DAT_006c7116 = 0;
          g_GameContext.cfg.field34_0x34 = g_GameContext.cfg.field34_0x34 | 4;
          GameErrorContextLog(&g_GameErrorContext,
                              "D3DFMT_A8R8G8B8 をサポートしていません、減色モードで動作します\n"
                             );
        }
      }
      FUN_00421420();
      FUN_0042f790(0);
      IS_APP_CLOSING = 0;
      _DAT_006c6ebc = 0;
      DAT_006c6ec4 = 0;
      return 0;
    }
LAB_00421077:
    iVar2 = (*(code *)(g_GameContext.d3d_iface)->vtbl->CreateDevice)
                      (g_GameContext.d3d_iface,0,2,GAME_WINDOW,0x20,local_4c);
    if (-1 < iVar2) {
      GameErrorContextLog(&g_GameErrorContext,
                          "REF で動作しますが、重すぎて恐らくゲームになりません...\n"
                         );
      local_5 = local_5 & 0xffffff00;
      goto LAB_00421190;
    }
    if ((((uint)g_GameContext.cfg.field34_0x34 >> 7 & 1) == 0) ||
       (g_GameContext.field352_0x1a0 != 0)) {
      if (local_24 != 1) {
        GameErrorContextFatal
                  (&g_GameErrorContext,
                   "Direct3D の初期化に失敗、これではゲームは出来ません\n");
        if (g_GameContext.d3d_iface != (IDirect3D8 *)0x0) {
          (*((g_GameContext.d3d_iface)->vtbl->unk).Release)((IUnknown *)g_GameContext.d3d_iface);
          g_GameContext.d3d_iface = (IDirect3D8 *)0x0;
        }
        return 1;
      }
      GameErrorContextLog(&g_GameErrorContext,
                          "バックバッファをロック不可能にしてみます\n");
      local_24 = 0;
      DAT_006c7115 = 0;
    }
    else {
      GameErrorContextLog(&g_GameErrorContext,
                          "リフレッシュレートが変更できません、vsync 非同期に変更します\n"
                         );
      local_20 = 0;
      g_GameContext.field352_0x1a0 = 1;
      local_1c = 0x80000000;
    }
  } while( true );
}

