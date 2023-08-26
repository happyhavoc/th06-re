
undefined4 FUN_004190ec(void)

{
  undefined4 uVar1;
  int in_ECX;
  int local_94;
  float local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_8;
  
  if (*(int *)(in_ECX + 0x253c) < 0) {
    uVar1 = 0xffffffff;
  }
  else if ((CUR_STAGE == 6) &&
          ((*(int *)(in_ECX + 0x253c) == 1 || (*(int *)(in_ECX + 0x253c) == 0xb)))) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(in_ECX + 0x2548) < 0x3c) {
      local_8 = (((float)*(int *)(in_ECX + 0x2548) + *(float *)(in_ECX + 0x2544)) * 48.0) / 60.0;
    }
    else {
      local_8 = 48.0;
    }
    local_94 = 4;
    do {
      local_94 = local_94 + -1;
    } while (-1 < local_94);
    local_5c = ((VIEWPORT_WIDTH - 256.0) / 2.0 + VIEWPORT_X) - 16.0;
    uStack_58 = 0x43c00000;
    uStack_54 = 0;
    local_48 = (VIEWPORT_WIDTH - 256.0) / 2.0 + VIEWPORT_X + 256.0 + 16.0;
    uStack_44 = 0x43c00000;
    uStack_40 = 0;
    local_34 = ((VIEWPORT_WIDTH - 256.0) / 2.0 + VIEWPORT_X) - 16.0;
    fStack_30 = local_8 + 384.0;
    uStack_2c = 0;
    local_20 = (VIEWPORT_WIDTH - 256.0) / 2.0 + VIEWPORT_X + 256.0 + 16.0;
    fStack_1c = local_8 + 384.0;
    uStack_18 = 0;
    local_38 = 0xd0000000;
    local_4c = 0xd0000000;
    local_10 = 0x90000000;
    local_24 = 0x90000000;
    local_14 = 0x3f800000;
    local_28 = 0x3f800000;
    local_3c = 0x3f800000;
    local_50 = 0x3f800000;
    FUN_00432ad0(in_ECX + 0x2550);
    FUN_00432ad0(in_ECX + 0x2660);
    if (((uint)g_GameContext.cfg.render_opts >> NO_COLOR_COMP & 1) == 0) {
      (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3d_device,0,D3DTSS_ALPHAOP,2);
      (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3d_device,0,D3DTSS_COLOROP,2);
    }
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_ALPHAARG1,0);
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_COLORARG1,0);
    if (((uint)g_GameContext.cfg.render_opts >> TURN_OFF_DEPTH_TEST & 1) == 0) {
      (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
                (g_GameContext.d3d_device,D3DRS_ZWRITEENABLE,0);
    }
    (*(g_GameContext.d3d_device)->lpVtbl->SetVertexShader)(g_GameContext.d3d_device,0x44);
    (*(g_GameContext.d3d_device)->lpVtbl->DrawPrimitiveUP)
              (g_GameContext.d3d_device,D3DPT_TRIANGLESTRIP,2,&local_5c,0x14);
    VERY_BIG_STRUCT->field_0x210be = 0xff;
    VERY_BIG_STRUCT->field_0x210bd = 0xff;
    VERY_BIG_STRUCT->field_0x210bc = 0xff;
    VERY_BIG_STRUCT->field_0x210bf = 0xff;
    if (((uint)g_GameContext.cfg.render_opts >> NO_COLOR_COMP & 1) == 0) {
      (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3d_device,0,D3DTSS_ALPHAOP,4);
      (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3d_device,0,D3DTSS_COLOROP,4);
    }
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_ALPHAARG1,2);
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_COLORARG1,2);
    FUN_00432ad0(in_ECX + 0x2770);
    FUN_00432ad0(in_ECX + 0x2880);
    FUN_00432ad0(in_ECX + 0x2990);
    FUN_00432ad0(in_ECX + 0x2aa0);
    uVar1 = 0;
  }
  return uVar1;
}

