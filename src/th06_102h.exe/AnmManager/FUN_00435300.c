
void __thiscall
AnmManager::FUN_00435300(AnmManager *this,int surfaceIdx,LONG left,LONG top,LONG x,LONG y)

{
  int hres;
  int *destSurface;
  LONG sourceRect;
  LONG LStack_18;
  UINT UStack_14;
  UINT UStack_10;
  LONG destPoint;
  LONG LStack_8;
  
  if (this->surfacesBis[surfaceIdx] == (IDirect3DSurface8 *)0x0) {
    return;
  }
  hres = (**(code **)(*DAT_006c6d20 + 0x40))(DAT_006c6d20,0,0,&destSurface);
  if (hres == 0) {
    if (this->surfaces[surfaceIdx] == (IDirect3DSurface8 *)0x0) {
      hres = (**(code **)(*DAT_006c6d20 + 100))
                       (DAT_006c6d20,this->surfaceSourceInfo[surfaceIdx].Width,
                        this->surfaceSourceInfo[surfaceIdx].Height,DAT_006c6e00,0,1,
                        this->surfaces + surfaceIdx);
      if ((hres != 0) &&
         (hres = (**(code **)(*DAT_006c6d20 + 0x6c))
                           (DAT_006c6d20,this->surfaceSourceInfo[surfaceIdx].Width,
                            this->surfaceSourceInfo[surfaceIdx].Height,DAT_006c6e00,
                            this->surfaces + surfaceIdx), hres != 0)) {
        (**(code **)(*destSurface + 8))(destSurface);
        return;
      }
      hres = _D3DXLoadSurfaceFromSurface_32
                       (this->surfaces[surfaceIdx],0,0,this->surfacesBis[surfaceIdx],0,0,1,0);
      if (hres != 0) {
        (**(code **)(*destSurface + 8))(destSurface);
        return;
      }
    }
    sourceRect = left;
    LStack_18 = top;
    UStack_14 = this->surfaceSourceInfo[surfaceIdx].Width;
    UStack_10 = this->surfaceSourceInfo[surfaceIdx].Height;
    destPoint = x;
    LStack_8 = y;
    (**(code **)(*DAT_006c6d20 + 0x70))
              (DAT_006c6d20,this->surfaces[surfaceIdx],&sourceRect,1,destSurface,&destPoint);
    (**(code **)(*destSurface + 8))(destSurface);
    return;
  }
  return;
}

