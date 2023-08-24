
void FUN_0042f8b0(undefined4 *param_1,undefined4 param_2)

{
  int local_88;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_88 = 4;
  do {
    local_88 = local_88 + -1;
  } while (-1 < local_88);
  local_50 = param_1[1];
  local_54 = *param_1;
  local_4c = 0;
  local_3c = param_1[1];
  local_40 = param_1[2];
  local_38 = 0;
  local_28 = param_1[3];
  local_2c = *param_1;
  local_24 = 0;
  local_14 = param_1[3];
  local_18 = param_1[2];
  local_10 = 0;
  local_c = 0x3f800000;
  local_20 = 0x3f800000;
  local_34 = 0x3f800000;
  local_48 = 0x3f800000;
  local_8 = param_2;
  local_1c = param_2;
  local_30 = param_2;
  local_44 = param_2;
  if (((uint)g_GameContext.cfg.field34_0x34 >> 8 & 1) == 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_ALPHAOP,2);
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_COLOROP,2);
  }
  (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3d_device,0,D3DTSS_ALPHAARG1,0);
  (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3d_device,0,D3DTSS_COLORARG1,0);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 6 & 1) == 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)(g_GameContext.d3d_device,D3DRS_ZFUNC,8);
    (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
              (g_GameContext.d3d_device,D3DRS_ZWRITEENABLE,0);
  }
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)(g_GameContext.d3d_device,D3DRS_DESTBLEND,6);
  (*(g_GameContext.d3d_device)->lpVtbl->SetVertexShader)(g_GameContext.d3d_device,0x44);
  (*(g_GameContext.d3d_device)->lpVtbl->DrawPrimitiveUP)
            (g_GameContext.d3d_device,D3DPT_TRIANGLESTRIP,2,&local_54,0x14);
  VERY_BIG_STRUCT->field_0x210be = 0xff;
  *(undefined4 *)&VERY_BIG_STRUCT->field_0x210c0 = 0;
  VERY_BIG_STRUCT->field20243_0x210b8 = 0;
  VERY_BIG_STRUCT->field_0x210bd = 0xff;
  VERY_BIG_STRUCT->field_0x210bc = 0xff;
  VERY_BIG_STRUCT->field_0x210bf = 0xff;
  if (((uint)g_GameContext.cfg.field34_0x34 >> 8 & 1) == 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_ALPHAOP,4);
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_COLOROP,4);
  }
  (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3d_device,0,D3DTSS_ALPHAARG1,2);
  (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3d_device,0,D3DTSS_COLORARG1,2);
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)(g_GameContext.d3d_device,D3DRS_ZFUNC,4);
  return;
}

