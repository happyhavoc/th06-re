
void InitD3dDevice(void)

{
  if ((DAT_006c6e60 >> 6 & 1) == 0) {
    (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_ZENABLE,1);
  }
  else {
    (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_ZENABLE,0);
  }
  (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_LIGHTING,0);
  (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_CULLMODE,1);
  (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_ALPHABLENDENABLE,1);
  if ((DAT_006c6e60 >> 5 & 1) == 0) {
    (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_SHADEMODE,D3DSHADE_GOURAUD);
  }
  else {
    (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_SHADEMODE,D3DSHADE_FLAT);
  }
  (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_SRCBLEND,D3DBLEND_SRCALPHA);
  (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_DESTBLEND,D3DBLEND_INVSRCALPHA);
  if ((DAT_006c6e60 >> 6 & 1) == 0) {
    (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_ZFUNC,D3DCMP_LESSEQUAL);
  }
  else {
    (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_ZFUNC,D3DCMP_ALWAYS);
  }
  (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_ALPHATESTENABLE,1);
  (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_ALPHAREF,4);
  (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_ALPHAFUNC,7);
  if ((DAT_006c6e60 >> 10 & 1) == 0) {
    (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_FOGENABLE,1);
  }
  else {
    (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_FOGENABLE,0);
  }
  (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_FOGDENSITY,0x3f800000);
  (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_FOGTABLEMODE,3);
  (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_FOGCOLOR,0xffa0a0a0);
  (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_FOGSTART,0x447a0000);
  (*DAT_006c6d20->lpVtbl->SetRenderState)(DAT_006c6d20,D3DRS_FOGEND,0x459c4000);
  if ((DAT_006c6e60 >> 8 & 1) == 0) {
    (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_ALPHAOP,4);
  }
  else {
    (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_ALPHAOP,2);
  }
  (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_ALPHAARG1,2);
  if ((DAT_006c6e60 >> 1 & 1) == 0) {
    (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_ALPHAARG2,3);
  }
  else {
    (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_ALPHAARG2,0);
  }
  if ((DAT_006c6e60 >> 8 & 1) == 0) {
    (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_COLOROP,4);
  }
  else {
    (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_COLOROP,2);
  }
  (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_COLORARG1,2);
  if ((DAT_006c6e60 >> 1 & 1) == 0) {
    (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_COLORARG2,3);
  }
  else {
    (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_COLORARG2,0);
  }
  (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_MIPFILTER,0);
  (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_MAGFILTER,2);
  (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_MINFILTER,2);
  (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_TEXTURETRANSFORMFLAGS,2);
  (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_ADDRESSW,3);
  (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_ADDRESSU,1);
  (*DAT_006c6d20->lpVtbl->SetTextureStageState)(DAT_006c6d20,0,D3DTSS_ADDRESSV,1);
  if (DAT_006d4588 != 0) {
    *(undefined *)(DAT_006d4588 + 0x210bc) = 0xff;
    *(undefined *)(DAT_006d4588 + 0x210bd) = 0xff;
    *(undefined *)(DAT_006d4588 + 0x210be) = 0xff;
    *(undefined4 *)(DAT_006d4588 + 0x210b8) = 0;
  }
  DAT_00487b8c = 1;
  return;
}

