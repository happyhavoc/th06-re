
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004324d0(VeryBigStruct *param_1_00,int param_2)

{
  if ((uint)(byte)param_1_00->field_0x210bc != (*(uint *)(param_2 + 0x80) >> 2 & 1)) {
    param_1_00->field_0x210bc = (byte)(*(uint *)(param_2 + 0x80) >> 2) & 1;
    if (param_1_00->field_0x210bc == '\0') {
      (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
                (g_GameContext.d3d_device,D3DRS_DESTBLEND,6);
    }
    else {
      (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
                (g_GameContext.d3d_device,D3DRS_DESTBLEND,2);
    }
  }
  if ((((g_GameContext.cfg.render_opts & 1U) == 0) &&
      (((uint)g_GameContext.cfg.render_opts >> 8 & 1) == 0)) &&
     ((uint)(byte)param_1_00->field_0x210bd != (*(uint *)(param_2 + 0x80) >> 3 & 1))) {
    param_1_00->field_0x210bd = (byte)(*(uint *)(param_2 + 0x80) >> 3) & 1;
    if (param_1_00->field_0x210bd == '\0') {
      (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3d_device,0,D3DTSS_COLOROP,4);
    }
    else {
      (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3d_device,0,D3DTSS_COLOROP,7);
    }
  }
  if (((uint)g_GameContext.cfg.render_opts >> 1 & 1) == 0) {
    if (param_1_00->field19738_0x210b4 != *(int *)(param_2 + 0x7c)) {
      param_1_00->field19738_0x210b4 = *(int *)(param_2 + 0x7c);
      (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
                (g_GameContext.d3d_device,D3DRS_TEXTUREFACTOR,param_1_00->field19738_0x210b4);
    }
  }
  else {
    _DAT_006d45a0 = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d45bc = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d45d8 = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d45f4 = *(undefined4 *)(param_2 + 0x7c);
    VERTEX_BUFFER_CONTENTS._12_4_ = *(undefined4 *)(param_2 + 0x7c);
    VERTEX_BUFFER_CONTENTS._36_4_ = *(undefined4 *)(param_2 + 0x7c);
    VERTEX_BUFFER_CONTENTS._60_4_ = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d46b4 = *(undefined4 *)(param_2 + 0x7c);
  }
  if ((((uint)g_GameContext.cfg.render_opts >> 6 & 1) == 0) &&
     ((uint)(byte)param_1_00->field_0x210bf != (*(uint *)(param_2 + 0x80) >> 0xc & 1))) {
    param_1_00->field_0x210bf = (byte)(*(uint *)(param_2 + 0x80) >> 0xc) & 1;
    if (param_1_00->field_0x210bf == '\0') {
      (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
                (g_GameContext.d3d_device,D3DRS_ZWRITEENABLE,1);
    }
    else {
      (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
                (g_GameContext.d3d_device,D3DRS_ZWRITEENABLE,0);
    }
  }
  return;
}

