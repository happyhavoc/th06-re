
void __thiscall AnmManager::ReleaseTexture(AnmManager *this,int texture_index)

{
  if (this->textures[texture_index] != (IDirect3DTexture8 *)0x0) {
    (*this->textures[texture_index]->lpVtbl->Release)(this->textures[texture_index]);
    this->textures[texture_index] = (IDirect3DTexture8 *)0x0;
  }
  _free(this->imageDataArray[texture_index]);
  this->imageDataArray[texture_index] = (void *)0x0;
  return;
}

