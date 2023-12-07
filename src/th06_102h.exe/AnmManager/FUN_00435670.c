
void __thiscall
AnmManager::FUN_00435670(AnmManager *this,int textureId,int left,int top,int x,int y)

{
  HRESULT HVar1;
  LPDIRECT3DSURFACE8 backbuffer;
  LPDIRECT3DSURFACE8 local_18;
  RECT rect;
  
  if ((this->textures[textureId] != (IDirect3DTexture8 *)0x0) &&
     (HVar1 = (*(g_Supervisor.d3dDevice)->lpVtbl->GetBackBuffer)
                        (g_Supervisor.d3dDevice,0,D3DBACKBUFFER_TYPE_MONO,&backbuffer), HVar1 == 0))
  {
    HVar1 = (*this->textures[textureId]->lpVtbl->GetSurfaceLevel)
                      (this->textures[textureId],0,&local_18);
    if (HVar1 == 0) {
      rect.left = left;
      rect.top = top;
      rect.right = left + x;
      rect.bottom = top + y;
      HVar1 = D3DXLoadSurfaceFromSurface
                        (local_18,(PALETTEENTRY *)0x0,(RECT *)0x0,backbuffer,(PALETTEENTRY *)0x0,
                         &rect,0xffffffff,0);
      if (HVar1 == 0) {
        (*local_18->lpVtbl->Release)(local_18);
        (*backbuffer->lpVtbl->Release)(backbuffer);
      }
      else {
        (*local_18->lpVtbl->Release)(local_18);
        (*backbuffer->lpVtbl->Release)(backbuffer);
      }
    }
    else {
      (*backbuffer->lpVtbl->Release)(backbuffer);
    }
  }
  return;
}

