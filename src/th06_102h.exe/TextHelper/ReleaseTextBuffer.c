
void __cdecl th06::TextHelper::ReleaseTextBuffer(void)

{
  if (g_TextBufferSurface != (IDirect3DSurface8 *)0x0) {
    (*g_TextBufferSurface->lpVtbl->Release)(g_TextBufferSurface);
    g_TextBufferSurface = (IDirect3DSurface8 *)0x0;
  }
  return;
}

