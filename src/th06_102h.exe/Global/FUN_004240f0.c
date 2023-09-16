
void __fastcall FUN_004240f0(AnmManager *param_1)

{
  if (param_1->vertexBuffer != (IDirect3DVertexBuffer8 *)0x0) {
    (*param_1->vertexBuffer->lpVtbl->Release)(param_1->vertexBuffer);
    param_1->vertexBuffer = (IDirect3DVertexBuffer8 *)0x0;
  }
  return;
}

