
void Supervisor::ReleaseBackBuffer(void)

{
  if (g_BackBufferSurface != (IDirect3DSurface8 *)0x0) {
    (*g_BackBufferSurface->lpVtbl->Release)(g_BackBufferSurface);
    g_BackBufferSurface = (IDirect3DSurface8 *)0x0;
  }
  return;
}

