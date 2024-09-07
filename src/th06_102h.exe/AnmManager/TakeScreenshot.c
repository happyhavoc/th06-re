
void __thiscall
th06::AnmManager::TakeScreenshot
          (AnmManager *this,int textureId,int left,int top,int width,int height)

{
  HRESULT HVar1;
  int iVar2;
  LPDIRECT3DSURFACE8 sourceSurface;
  LPDIRECT3DSURFACE8 destSurface;
  RECT rect;
  
  if ((*(int *)(this + textureId * 4 + 0x1c110) != 0) &&
     (HVar1 = (*(g_Supervisor.d3dDevice)->lpVtbl->GetBackBuffer)
                        (g_Supervisor.d3dDevice,0,D3DBACKBUFFER_TYPE_MONO,&sourceSurface),
     HVar1 == 0)) {
    iVar2 = (**(code **)(**(int **)(this + textureId * 4 + 0x1c110) + 0x3c))
                      (*(undefined4 *)(this + textureId * 4 + 0x1c110),0,&destSurface);
    if (iVar2 == 0) {
      rect.left = left;
      rect.top = top;
      rect.right = left + width;
      rect.bottom = top + height;
      HVar1 = D3DXLoadSurfaceFromSurface
                        (destSurface,(PALETTEENTRY *)0x0,(RECT *)0x0,sourceSurface,
                         (PALETTEENTRY *)0x0,&rect,0xffffffff,0);
      if (HVar1 == 0) {
        (*destSurface->lpVtbl->Release)(destSurface);
        (*sourceSurface->lpVtbl->Release)(sourceSurface);
      }
      else {
        (*destSurface->lpVtbl->Release)(destSurface);
        (*sourceSurface->lpVtbl->Release)(sourceSurface);
      }
    }
    else {
      (*sourceSurface->lpVtbl->Release)(sourceSurface);
    }
  }
  return;
}

