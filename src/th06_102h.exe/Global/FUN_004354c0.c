
void FUN_004354c0(int param_1,LONG param_2,LONG param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  HRESULT HVar1;
  int in_ECX;
  IDirect3DSurface8 *local_20;
  RECT local_1c;
  POINT local_c;
  
  if (*(int *)(in_ECX + 0x20db4 + param_1 * 4) == 0) {
    return;
  }
  HVar1 = (*(g_GameContext.d3dDevice)->lpVtbl->GetBackBuffer)
                    (g_GameContext.d3dDevice,0,D3DBACKBUFFER_TYPE_MONO,&local_20);
  if (HVar1 == 0) {
    if (*(int *)(in_ECX + 0x20d34 + param_1 * 4) == 0) {
      HVar1 = (*(g_GameContext.d3dDevice)->lpVtbl->CreateRenderTarget)
                        (g_GameContext.d3dDevice,*(UINT *)(in_ECX + 0x20e34 + param_1 * 0x14),
                         *(UINT *)(in_ECX + 0x20e38 + param_1 * 0x14),
                         g_GameContext.presentParameters.BackBufferFormat,D3DMULTISAMPLE_NONE,1,
                         (IDirect3DSurface8 **)(in_ECX + 0x20d34 + param_1 * 4));
      if ((HVar1 != 0) &&
         (HVar1 = (*(g_GameContext.d3dDevice)->lpVtbl->CreateImageSurface)
                            (g_GameContext.d3dDevice,*(UINT *)(in_ECX + 0x20e34 + param_1 * 0x14),
                             *(UINT *)(in_ECX + 0x20e38 + param_1 * 0x14),
                             g_GameContext.presentParameters.BackBufferFormat,
                             (IDirect3DSurface8 **)(in_ECX + 0x20d34 + param_1 * 4)), HVar1 != 0)) {
        (*local_20->lpVtbl->Release)(local_20);
        return;
      }
      HVar1 = D3DXLoadSurfaceFromSurface
                        (*(LPDIRECT3DSURFACE8 *)(in_ECX + 0x20d34 + param_1 * 4),(PALETTEENTRY *)0x0
                         ,(RECT *)0x0,*(LPDIRECT3DSURFACE8 *)(in_ECX + 0x20db4 + param_1 * 4),
                         (PALETTEENTRY *)0x0,(RECT *)0x0,1,0);
      if (HVar1 != 0) {
        (*local_20->lpVtbl->Release)(local_20);
        return;
      }
    }
    local_1c.left = param_4;
    local_1c.top = param_5;
    local_1c.right = param_4 + param_6;
    local_1c.bottom = param_5 + param_7;
    local_c.x = param_2;
    local_c.y = param_3;
    (*(g_GameContext.d3dDevice)->lpVtbl->CopyRects)
              (g_GameContext.d3dDevice,*(IDirect3DSurface8 **)(in_ECX + 0x20d34 + param_1 * 4),
               &local_1c,1,local_20,&local_c);
    (*local_20->lpVtbl->Release)(local_20);
    return;
  }
  return;
}

