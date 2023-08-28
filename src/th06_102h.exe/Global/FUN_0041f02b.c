
void FUN_0041f02b(void)

{
  if (D3D_IMAGE_SURFACE != (IDirect3DSurface8 *)0x0) {
    (*D3D_IMAGE_SURFACE->lpVtbl->Release)(D3D_IMAGE_SURFACE);
    D3D_IMAGE_SURFACE = (IDirect3DSurface8 *)0x0;
  }
  return;
}

