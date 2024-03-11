
void __thiscall
AnmManager::drawEndingRect
          (AnmManager *this,int surfaceIdx,LONG rectX,LONG rectY,int rectLeft,int rectTop,int width,
          int height)

{
  HRESULT getBackBuffer;
  HRESULT createRenderTarget;
  HRESULT createImageSurface;
  IDirect3DSurface8 *D3D_Surface;
  RECT rect;
  POINT point;
  
  if (this->surfacesBis[surfaceIdx] == (IDirect3DSurface8 *)0x0) {
    return;
  }
  getBackBuffer =
       (*(g_Supervisor.d3dDevice)->lpVtbl->GetBackBuffer)
                 (g_Supervisor.d3dDevice,0,D3DBACKBUFFER_TYPE_MONO,&D3D_Surface);
  if (getBackBuffer == 0) {
    if (this->surfaces[surfaceIdx] == (IDirect3DSurface8 *)0x0) {
      createRenderTarget =
           (*(g_Supervisor.d3dDevice)->lpVtbl->CreateRenderTarget)
                     (g_Supervisor.d3dDevice,this->surfaceSourceInfo[surfaceIdx].Width,
                      this->surfaceSourceInfo[surfaceIdx].Height,
                      g_Supervisor.presentParameters.BackBufferFormat,D3DMULTISAMPLE_NONE,1,
                      this->surfaces + surfaceIdx);
      if ((createRenderTarget != 0) &&
         (createImageSurface =
               (*(g_Supervisor.d3dDevice)->lpVtbl->CreateImageSurface)
                         (g_Supervisor.d3dDevice,this->surfaceSourceInfo[surfaceIdx].Width,
                          this->surfaceSourceInfo[surfaceIdx].Height,
                          g_Supervisor.presentParameters.BackBufferFormat,
                          this->surfaces + surfaceIdx), createImageSurface != 0)) {
        (*D3D_Surface->lpVtbl->Release)(D3D_Surface);
        return;
      }
      createRenderTarget =
           D3DXLoadSurfaceFromSurface
                     (this->surfaces[surfaceIdx],(PALETTEENTRY *)0x0,(RECT *)0x0,
                      this->surfacesBis[surfaceIdx],(PALETTEENTRY *)0x0,(RECT *)0x0,1,0);
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
              (g_Supervisor.d3dDevice,this->surfaces[surfaceIdx],&rect,1,D3D_Surface,&point);
    (*D3D_Surface->lpVtbl->Release)(D3D_Surface);
    return;
  }
  return;
}

