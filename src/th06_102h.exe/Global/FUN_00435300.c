
void FUN_00435300(int param_1,LONG param_2,LONG param_3,LONG param_4,LONG param_5)

{
  HRESULT HVar1;
  int iVar2;
  int in_ECX;
  IDirect3DSurface8 *local_20;
  RECT local_1c;
  POINT local_c;
  
  if (*(int *)(in_ECX + 0x20db4 + param_1 * 4) == 0) {
    return;
  }
  HVar1 = (*(g_GameContext.d3d_device)->lpVtbl->GetBackBuffer)
                    (g_GameContext.d3d_device,0,D3DBACKBUFFER_TYPE_MONO,&local_20);
  if (HVar1 == 0) {
    if (*(int *)(in_ECX + 0x20d34 + param_1 * 4) == 0) {
      HVar1 = (*(g_GameContext.d3d_device)->lpVtbl->CreateRenderTarget)
                        (g_GameContext.d3d_device,*(UINT *)(in_ECX + 0x20e34 + param_1 * 0x14),
                         *(UINT *)(in_ECX + 0x20e38 + param_1 * 0x14),
                         g_GameContext.present_parameters.BackBufferFormat,D3DMULTISAMPLE_NONE,1,
                         (IDirect3DSurface8 **)(in_ECX + 0x20d34 + param_1 * 4));
      if ((HVar1 != 0) &&
         (HVar1 = (*(g_GameContext.d3d_device)->lpVtbl->CreateImageSurface)
                            (g_GameContext.d3d_device,*(UINT *)(in_ECX + 0x20e34 + param_1 * 0x14),
                             *(UINT *)(in_ECX + 0x20e38 + param_1 * 0x14),
                             g_GameContext.present_parameters.BackBufferFormat,
                             (IDirect3DSurface8 **)(in_ECX + 0x20d34 + param_1 * 4)), HVar1 != 0)) {
        (*local_20->lpVtbl->Release)(local_20);
        return;
      }
      iVar2 = _D3DXLoadSurfaceFromSurface_32
                        (*(undefined4 *)(in_ECX + 0x20d34 + param_1 * 4),0,0,
                         *(IDirect3DSurface8 **)(in_ECX + 0x20db4 + param_1 * 4),0,0,1,0);
      if (iVar2 != 0) {
        (*local_20->lpVtbl->Release)(local_20);
        return;
      }
    }
    local_1c.left = param_2;
    local_1c.top = param_3;
    local_1c.right = *(LONG *)(in_ECX + 0x20e34 + param_1 * 0x14);
    local_1c.bottom = *(LONG *)(in_ECX + 0x20e38 + param_1 * 0x14);
    local_c.x = param_4;
    local_c.y = param_5;
    (*(g_GameContext.d3d_device)->lpVtbl->CopyRects)
              (g_GameContext.d3d_device,*(IDirect3DSurface8 **)(in_ECX + 0x20d34 + param_1 * 4),
               &local_1c,1,local_20,&local_c);
    (*local_20->lpVtbl->Release)(local_20);
    return;
  }
  return;
}

