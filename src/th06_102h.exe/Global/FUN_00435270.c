
void __thiscall FUN_00435270(VeryBigStruct *this,int param_2)

{
  if (this->surfaces[param_2] != (IDirect3DSurface8 *)0x0) {
    (*this->surfaces[param_2]->lpVtbl->Release)(this->surfaces[param_2]);
    this->surfaces[param_2] = (IDirect3DSurface8 *)0x0;
  }
  if (this->surfaces_bis[param_2] != (IDirect3DSurface8 *)0x0) {
    (*this->surfaces_bis[param_2]->lpVtbl->Release)(this->surfaces_bis[param_2]);
    this->surfaces_bis[param_2] = (IDirect3DSurface8 *)0x0;
  }
  return;
}

