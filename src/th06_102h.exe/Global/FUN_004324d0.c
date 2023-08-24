
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004324d0(int param_1)

{
  int in_ECX;
  
  if ((uint)*(byte *)(in_ECX + 0x210bc) != (*(uint *)(param_1 + 0x80) >> 2 & 1)) {
    *(byte *)(in_ECX + 0x210bc) = (byte)(*(uint *)(param_1 + 0x80) >> 2) & 1;
    if (*(char *)(in_ECX + 0x210bc) == '\0') {
      (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
                (g_GameContext.d3d_device,D3DRS_DESTBLEND,6);
    }
    else {
      (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
                (g_GameContext.d3d_device,D3DRS_DESTBLEND,2);
    }
  }
  if ((((g_GameContext.cfg.field34_0x34 & 1U) == 0) &&
      (((uint)g_GameContext.cfg.field34_0x34 >> 8 & 1) == 0)) &&
     ((uint)*(byte *)(in_ECX + 0x210bd) != (*(uint *)(param_1 + 0x80) >> 3 & 1))) {
    *(byte *)(in_ECX + 0x210bd) = (byte)(*(uint *)(param_1 + 0x80) >> 3) & 1;
    if (*(char *)(in_ECX + 0x210bd) == '\0') {
      (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3d_device,0,D3DTSS_COLOROP,4);
    }
    else {
      (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3d_device,0,D3DTSS_COLOROP,7);
    }
  }
  if (((uint)g_GameContext.cfg.field34_0x34 >> 1 & 1) == 0) {
    if (*(int *)(in_ECX + 0x210b4) != *(int *)(param_1 + 0x7c)) {
      *(undefined4 *)(in_ECX + 0x210b4) = *(undefined4 *)(param_1 + 0x7c);
      (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
                (g_GameContext.d3d_device,D3DRS_TEXTUREFACTOR,*(DWORD *)(in_ECX + 0x210b4));
    }
  }
  else {
    _DAT_006d45a0 = *(undefined4 *)(param_1 + 0x7c);
    _DAT_006d45bc = *(undefined4 *)(param_1 + 0x7c);
    _DAT_006d45d8 = *(undefined4 *)(param_1 + 0x7c);
    _DAT_006d45f4 = *(undefined4 *)(param_1 + 0x7c);
    _DAT_006d466c = *(undefined4 *)(param_1 + 0x7c);
    _DAT_006d4684 = *(undefined4 *)(param_1 + 0x7c);
    _DAT_006d469c = *(undefined4 *)(param_1 + 0x7c);
    _DAT_006d46b4 = *(undefined4 *)(param_1 + 0x7c);
  }
  if ((((uint)g_GameContext.cfg.field34_0x34 >> 6 & 1) == 0) &&
     ((uint)*(byte *)(in_ECX + 0x210bf) != (*(uint *)(param_1 + 0x80) >> 0xc & 1))) {
    *(byte *)(in_ECX + 0x210bf) = (byte)(*(uint *)(param_1 + 0x80) >> 0xc) & 1;
    if (*(char *)(in_ECX + 0x210bf) == '\0') {
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

