
void FUN_0041f02b(void)

{
  if (PTR_0069e230 != (IDirect3DSurface8 *)0x0) {
    (*PTR_0069e230->lpVtbl->Release)(PTR_0069e230);
    PTR_0069e230 = (IDirect3DSurface8 *)0x0;
  }
  return;
}

