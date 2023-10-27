
/* WARNING: Inlined function: FUN_0045c3e0 */

void FUN_0041f050(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,COLORREF param_7,COLORREF param_8,char *param_9,int *param_10)

{
  size_t sVar1;
  LPDIRECT3DSURFACE8 pIStack_84;
  RECT RStack_80;
  RECT RStack_70;
  int aiStack_60 [5];
  HDC pHStack_4c;
  HGDIOBJ pvStack_3c;
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
  pHStack_18 = CreateFontA(param_5 << 1,0,0,0,700,0,0,0,0x80,0,0,4,0x11,&DAT_0046b0ac);
  FUN_0041e945(aiStack_60);
  uStack_8 = 0;
  (*PTR_0069e230->lpVtbl->GetDesc)(PTR_0069e230,&DStack_38);
  FUN_0041ea04(DStack_38.Width,DStack_38.Height,DStack_38.Format);
  pHStack_14 = pHStack_4c;
  pvStack_3c = SelectObject(pHStack_4c,pHStack_18);
  FUN_0041ec72(0,0,param_3 << 1,param_5 * 2 + 6);
  SetBkMode(pHStack_14,1);
  if (param_8 != 0xffffffff) {
    SetTextColor(pHStack_14,param_8);
    sVar1 = _strlen(param_9);
    TextOutA(pHStack_14,param_1 * 2 + 3,2,param_9,sVar1);
  }
  SetTextColor(pHStack_14,param_7);
  sVar1 = _strlen(param_9);
  TextOutA(pHStack_14,param_1 << 1,0,param_9,sVar1);
  SelectObject(pHStack_14,pvStack_3c);
  FUN_0041ec72(0,0,param_3 << 1,param_5 * 2 + 6);
  FUN_0041ef11(aiStack_60,PTR_0069e230);
  SelectObject(pHStack_14,pvStack_3c);
  DeleteObject(pHStack_18);
  RStack_80.left = 0;
  RStack_80.top = param_2;
  RStack_80.right = param_3;
  RStack_80.bottom = param_2 + 0x10;
  RStack_70.left = 0;
  RStack_70.top = 0;
  RStack_70.right = param_3 * 2 + -2;
  RStack_70.bottom = param_5 * 2 + -2;
  (**(code **)(*param_10 + 0x3c))(param_10,0,&pIStack_84);
  D3DXLoadSurfaceFromSurface
            (pIStack_84,(PALETTEENTRY *)0x0,&RStack_80,PTR_0069e230,(PALETTEENTRY *)0x0,&RStack_70,4
             ,0);
  if (pIStack_84 != (IDirect3DSurface8 *)0x0) {
    (*pIStack_84->lpVtbl->Release)(pIStack_84);
    pIStack_84 = (IDirect3DSurface8 *)0x0;
  }
  uStack_8 = 0xffffffff;
  FUN_0041e981();
  ExceptionList = pvStack_10;
  return;
}

