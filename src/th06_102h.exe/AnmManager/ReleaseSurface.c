
void __thiscall AnmManager::ReleaseSurface(AnmManager *this,int surface_index)

{
  if (this->surfaces[surface_index] != (IDirect3DSurface8 *)0x0) {
    (*this->surfaces[surface_index]->lpVtbl->Release)(this->surfaces[surface_index]);
    this->surfaces[surface_index] = (IDirect3DSurface8 *)0x0;
  }
  if (this->surfacesBis[surface_index] != (IDirect3DSurface8 *)0x0) {
    (*this->surfacesBis[surface_index]->lpVtbl->Release)(this->surfacesBis[surface_index]);
    this->surfacesBis[surface_index] = (IDirect3DSurface8 *)0x0;
  }
  return;
}

