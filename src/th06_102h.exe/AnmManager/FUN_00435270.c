
void __thiscall AnmManager::FUN_00435270(AnmManager *this,int param_1)

{
  if (this->surfaces[param_1] != (IDirect3DSurface8 *)0x0) {
    (*this->surfaces[param_1]->lpVtbl->Release)(this->surfaces[param_1]);
    this->surfaces[param_1] = (IDirect3DSurface8 *)0x0;
  }
  if (this->surfacesBis[param_1] != (IDirect3DSurface8 *)0x0) {
    (*this->surfacesBis[param_1]->lpVtbl->Release)(this->surfacesBis[param_1]);
    this->surfacesBis[param_1] = (IDirect3DSurface8 *)0x0;
  }
  return;
}

