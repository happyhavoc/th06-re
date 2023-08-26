
void __thiscall FUN_004321e0(VeryBigStruct *this,int idx)

{
  if (this->texture_i_think[idx] != (IDirect3DTexture8 *)0x0) {
    (*this->texture_i_think[idx]->lpVtbl->Release)(this->texture_i_think[idx]);
    this->texture_i_think[idx] = (IDirect3DTexture8 *)0x0;
  }
  _free(this->field1059_0x1c530[idx]);
  this->field1059_0x1c530[idx] = (void *)0x0;
  return;
}

