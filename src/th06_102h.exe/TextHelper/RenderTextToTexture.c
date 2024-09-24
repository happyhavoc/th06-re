
/* WARNING: Inlined function: FUN_0045c3e0 */

void th06::TextHelper::RenderTextToTexture
               (int xPos,int yPos,int spriteWidth,int spriteHeight,int fontHeight,int fontWidth,
               ZunColor textColor,ZunColor shadowColor,char *string,IDirect3DTexture8 *outTexture)

{
  HGDIOBJ h;
  size_t strLength;
  LPDIRECT3DSURFACE8 pIStack_84;
  RECT RStack_80;
  RECT RStack_70;
  TextHelper textHelper;
  D3DSURFACE_DESC textSurfaceDesc;
  HFONT font;
  HDC hdc;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004691ad;
  pvStack_10 = ExceptionList;
  hdc = (HDC)0x41f05a;
  ExceptionList = &pvStack_10;
  font = CreateFontA(fontHeight << 1,0,0,0,700,0,0,0,0x80,0,0,4,0x11,"ＭＳ ゴシック");
  TextHelper(&textHelper);
  uStack_8 = 0;
  (*g_TextBufferSurface->lpVtbl->GetDesc)(g_TextBufferSurface,&textSurfaceDesc);
  AllocateBufferWithFallback
            (&textHelper,textSurfaceDesc.Width,textSurfaceDesc.Height,textSurfaceDesc.Format);
  hdc = textHelper.hdc;
  h = SelectObject(textHelper.hdc,font);
  InvertAlpha(&textHelper,0,0,spriteWidth << 1,fontHeight * 2 + 6);
  SetBkMode(hdc,1);
  if (shadowColor.color != 0xffffffff) {
    SetTextColor(hdc,shadowColor.color);
    strLength = _strlen(string);
    TextOutA(hdc,xPos * 2 + 3,2,string,strLength);
  }
  SetTextColor(hdc,textColor.color);
  strLength = _strlen(string);
  TextOutA(hdc,xPos << 1,0,string,strLength);
  SelectObject(hdc,h);
  InvertAlpha(&textHelper,0,0,spriteWidth << 1,fontHeight * 2 + 6);
  CopyTextToSurface(&textHelper,g_TextBufferSurface);
  SelectObject(hdc,h);
  DeleteObject(font);
  RStack_80.left = 0;
  RStack_80.top = yPos;
  RStack_80.right = spriteWidth;
  RStack_80.bottom = yPos + 0x10;
  RStack_70.left = 0;
  RStack_70.top = 0;
  RStack_70.right = spriteWidth * 2 + -2;
  RStack_70.bottom = fontHeight * 2 + -2;
  (*outTexture->lpVtbl->GetSurfaceLevel)(outTexture,0,&pIStack_84);
  D3DXLoadSurfaceFromSurface
            (pIStack_84,(PALETTEENTRY *)0x0,&RStack_80,g_TextBufferSurface,(PALETTEENTRY *)0x0,
             &RStack_70,4,0);
  if (pIStack_84 != (IDirect3DSurface8 *)0x0) {
    (*pIStack_84->lpVtbl->Release)(pIStack_84);
    pIStack_84 = (IDirect3DSurface8 *)0x0;
  }
  uStack_8 = 0xffffffff;
  ~TextHelper(&textHelper);
  ExceptionList = pvStack_10;
  return;
}

