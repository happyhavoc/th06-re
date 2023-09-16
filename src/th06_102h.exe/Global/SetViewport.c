
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SetViewport(D3DCOLOR color)

{
  _DAT_006c6de0 = 0;
  DAT_006c6de4 = 0;
  DAT_006c6de8 = 0x280;
  DAT_006c6dec = 0x1e0;
  _DAT_006c6df0 = 0;
  _DAT_006c6df4 = 0x3f800000;
  (*DAT_006c6d20->lpVtbl->SetViewport)(DAT_006c6d20,(D3DVIEWPORT8 *)&DAT_006c6de0);
  Clear(color);
  return;
}

