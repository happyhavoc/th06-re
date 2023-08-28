
void __fastcall FUN_004240f0(VeryBigStruct *param_1)

{
  if (param_1->vertex_buffer != (IDirect3DVertexBuffer8 *)0x0) {
    (*param_1->vertex_buffer->lpVtbl->Release)(param_1->vertex_buffer);
    param_1->vertex_buffer = (IDirect3DVertexBuffer8 *)0x0;
  }
  return;
}

