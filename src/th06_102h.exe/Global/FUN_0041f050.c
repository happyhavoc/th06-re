
/* WARNING: Inlined function: FUN_0045c3e0 */

void FUN_0041f050(long xPos,long yPos,long spriteWidth,long spriteHeight,long fontHeight,
                 int fontWidth,COLORREF color1,COLORREF color2,char *param_9,
                 IDirect3DTexture8 *param_10)

{
  HGDIOBJ h;
  size_t sVar1;
  LPDIRECT3DSURFACE8 pIStack_84;
  RECT RStack_80;
  RECT RStack_70;
  long auStack_60 [5];
  HDC pHStack_4c;
  D3DSURFACE_DESC DStack_38;
  HFONT pHStack_18;
  HDC pHStack_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004691ad;
  pvStack_10 = ExceptionList;
  pHStack_14 = (HDC)0x41f05a;
  ExceptionList = &pvStack_10;
  pHStack_18 = CreateFontA(fontHeight << 1,0,0,0,700,0,0,0,0x80,0,0,4,0x11,"ＭＳ ゴシック");
  FUN_0041e945(auStack_60);
  uStack_8 = 0;
  (*g_BackBufferSurface->lpVtbl->GetDesc)(g_BackBufferSurface,&DStack_38);
  FUN_0041ea04(DStack_38.Width,DStack_38.Height,DStack_38.Format);
  pHStack_14 = pHStack_4c;
  h = SelectObject(pHStack_4c,pHStack_18);
  FUN_0041ec72(auStack_60,0,0,spriteWidth << 1,fontHeight * 2 + 6);
  SetBkMode(pHStack_14,1);
  if (color2 != 0xffffffff) {
    SetTextColor(pHStack_14,color2);
    sVar1 = _strlen(param_9);
    TextOutA(pHStack_14,xPos * 2 + 3,2,param_9,sVar1);
  }
  SetTextColor(pHStack_14,color1);
  sVar1 = _strlen(param_9);
  TextOutA(pHStack_14,xPos << 1,0,param_9,sVar1);
  SelectObject(pHStack_14,h);
  FUN_0041ec72(auStack_60,0,0,spriteWidth << 1,fontHeight * 2 + 6);
  FUN_0041ef11(auStack_60,g_BackBufferSurface);
  SelectObject(pHStack_14,h);
  DeleteObject(pHStack_18);
  RStack_80.left = 0;
  RStack_80.top = yPos;
  RStack_80.right = spriteWidth;
  RStack_80.bottom = yPos + 0x10;
  RStack_70.left = 0;
  RStack_70.top = 0;
  RStack_70.right = spriteWidth * 2 + -2;
  RStack_70.bottom = fontHeight * 2 + -2;
  (*param_10->lpVtbl->GetSurfaceLevel)(param_10,0,&pIStack_84);
  D3DXLoadSurfaceFromSurface
            (pIStack_84,(PALETTEENTRY *)0x0,&RStack_80,g_BackBufferSurface,(PALETTEENTRY *)0x0,
             &RStack_70,4,0);
  if (pIStack_84 != (IDirect3DSurface8 *)0x0) {
    (*pIStack_84->lpVtbl->Release)(pIStack_84);
    pIStack_84 = (IDirect3DSurface8 *)0x0;
  }
  uStack_8 = 0xffffffff;
  FUN_0041e981(auStack_60);
  ExceptionList = pvStack_10;
  return;
}

