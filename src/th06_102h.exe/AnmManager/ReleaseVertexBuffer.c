
void __thiscall th06::AnmManager::ReleaseVertexBuffer(AnmManager *this)

{
  if (this->vertexBuffer != (IDirect3DVertexBuffer8 *)0x0) {
    (*this->vertexBuffer->lpVtbl->Release)(this->vertexBuffer);
    this->vertexBuffer = (IDirect3DVertexBuffer8 *)0x0;
  }
  return;
}

