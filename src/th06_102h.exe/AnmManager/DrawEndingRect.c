
void __thiscall
th06::AnmManager::DrawEndingRect
          (AnmManager *this,int surfaceIdx,LONG rectX,LONG rectY,int rectLeft,int rectTop,int width,
          int height)

{
  HRESULT getBackBuffer;
  HRESULT createRenderTarget;
  HRESULT createImageSurface;
  IDirect3DSurface8 *D3D_Surface;
  RECT rect;
  POINT point;
  
  if (*(int *)(this + surfaceIdx * 4 + 0x20db4) == 0) {
    return;
  }
  getBackBuffer =
       (*(g_Supervisor.d3dDevice)->lpVtbl->GetBackBuffer)
                 (g_Supervisor.d3dDevice,0,D3DBACKBUFFER_TYPE_MONO,&D3D_Surface);
  if (getBackBuffer == 0) {
    if (*(int *)(this + surfaceIdx * 4 + 0x20d34) == 0) {
      createRenderTarget =
           (*(g_Supervisor.d3dDevice)->lpVtbl->CreateRenderTarget)
                     (g_Supervisor.d3dDevice,*(UINT *)(this + surfaceIdx * 0x14 + 0x20e34),
                      *(UINT *)(this + surfaceIdx * 0x14 + 0x20e38),
                      g_Supervisor.presentParameters.BackBufferFormat,D3DMULTISAMPLE_NONE,1,
                      (IDirect3DSurface8 **)(this + surfaceIdx * 4 + 0x20d34));
      if ((createRenderTarget != 0) &&
         (createImageSurface =
               (*(g_Supervisor.d3dDevice)->lpVtbl->CreateImageSurface)
                         (g_Supervisor.d3dDevice,*(UINT *)(this + surfaceIdx * 0x14 + 0x20e34),
                          *(UINT *)(this + surfaceIdx * 0x14 + 0x20e38),
                          g_Supervisor.presentParameters.BackBufferFormat,
                          (IDirect3DSurface8 **)(this + surfaceIdx * 4 + 0x20d34)),
         createImageSurface != 0)) {
        (*D3D_Surface->lpVtbl->Release)(D3D_Surface);
        return;
      }
      createRenderTarget =
           D3DXLoadSurfaceFromSurface
                     (*(LPDIRECT3DSURFACE8 *)(this + surfaceIdx * 4 + 0x20d34),(PALETTEENTRY *)0x0,
                      (RECT *)0x0,*(LPDIRECT3DSURFACE8 *)(this + surfaceIdx * 4 + 0x20db4),
                      (PALETTEENTRY *)0x0,(RECT *)0x0,1,0);
      if (createRenderTarget != 0) {
        (*D3D_Surface->lpVtbl->Release)(D3D_Surface);
        return;
      }
    }
    rect.left = rectLeft;
    rect.top = rectTop;
    rect.right = rectLeft + width;
    rect.bottom = rectTop + height;
    point.x = rectX;
    point.y = rectY;
    (*(g_Supervisor.d3dDevice)->lpVtbl->CopyRects)
              (g_Supervisor.d3dDevice,*(IDirect3DSurface8 **)(this + surfaceIdx * 4 + 0x20d34),&rect
               ,1,D3D_Surface,&point);
    (*D3D_Surface->lpVtbl->Release)(D3D_Surface);
    return;
  }
  return;
}

