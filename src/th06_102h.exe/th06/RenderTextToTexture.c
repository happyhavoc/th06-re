
/* WARNING: Inlined function: FUN_0045c3e0 */

void th06::RenderTextToTexture
               (long xPos,long yPos,long spriteWidth,long spriteHeight,long fontHeight,int fontWidth
               ,COLORREF textColor,COLORREF shadowColor,char *string,IDirect3DTexture8 *texture)

{
  HGDIOBJ h;
  size_t strLength;
  LPDIRECT3DSURFACE8 pIStack_84;
  RECT RStack_80;
  RECT RStack_70;
  TextHelper auStack_60;
  D3DSURFACE_DESC DStack_38;
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
  TextHelper::FUN_0041e945(&auStack_60);
  uStack_8 = 0;
  (*g_TextBufferSurface->lpVtbl->GetDesc)(g_TextBufferSurface,&DStack_38);
  TextHelper::FUN_0041ea04(&auStack_60,DStack_38.Width,DStack_38.Height,DStack_38.Format);
  hdc = auStack_60.hdc;
  h = SelectObject(auStack_60.hdc,font);
  TextHelper::FUN_0041ec72(&auStack_60,0,0,spriteWidth << 1,fontHeight * 2 + 6);
  SetBkMode(hdc,1);
  if (shadowColor != 0xffffffff) {
    SetTextColor(hdc,shadowColor);
    strLength = _strlen(string);
    TextOutA(hdc,xPos * 2 + 3,2,string,strLength);
  }
  SetTextColor(hdc,textColor);
  strLength = _strlen(string);
  TextOutA(hdc,xPos << 1,0,string,strLength);
  SelectObject(hdc,h);
  TextHelper::FUN_0041ec72(&auStack_60,0,0,spriteWidth << 1,fontHeight * 2 + 6);
  TextHelper::CopyTextToSurface(&auStack_60,g_TextBufferSurface);
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
  (*texture->lpVtbl->GetSurfaceLevel)(texture,0,&pIStack_84);
  D3DXLoadSurfaceFromSurface
            (pIStack_84,(PALETTEENTRY *)0x0,&RStack_80,g_TextBufferSurface,(PALETTEENTRY *)0x0,
             &RStack_70,4,0);
  if (pIStack_84 != (IDirect3DSurface8 *)0x0) {
    (*pIStack_84->lpVtbl->Release)(pIStack_84);
    pIStack_84 = (IDirect3DSurface8 *)0x0;
  }
  uStack_8 = 0xffffffff;
  TextHelper::FUN_0041e981(&auStack_60);
  ExceptionList = pvStack_10;
  return;
}

