
void FUN_0041f02b(void)

{
  if (BACKBUFFER_SURFACE != (IDirect3DSurface8 *)0x0) {
    (*BACKBUFFER_SURFACE->lpVtbl->Release)(BACKBUFFER_SURFACE);
    BACKBUFFER_SURFACE = (IDirect3DSurface8 *)0x0;
  }
  return;
}

