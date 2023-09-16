
void __thiscall AnmManager::ReleaseD3dSurfaces(AnmManager *this)

{
  int idx;
  
  for (idx = 0; idx < 0x20; idx = idx + 1) {
    if (this->surfaces[idx] != (IDirect3DSurface8 *)0x0) {
      (*this->surfaces[idx]->lpVtbl->Release)(this->surfaces[idx]);
      this->surfaces[idx] = (IDirect3DSurface8 *)0x0;
    }
  }
  return;
}

