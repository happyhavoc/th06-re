
void __thiscall FUN_004321e0(AnmManager *this,int idx)

{
  if (this->textures[idx] != (IDirect3DTexture8 *)0x0) {
    (*this->textures[idx]->lpVtbl->Release)(this->textures[idx]);
    this->textures[idx] = (IDirect3DTexture8 *)0x0;
  }
  _free(this->imageDataArray[idx]);
  this->imageDataArray[idx] = (void *)0x0;
  return;
}

