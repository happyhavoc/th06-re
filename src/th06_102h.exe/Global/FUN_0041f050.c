
void FUN_0041f050(void)

{
  HFONT pHVar1;
  HGDIOBJ pvVar2;
  size_t sVar3;
  int unaff_EBP;
  
  FUN_0045c3e0();
  pHVar1 = CreateFontA(*(int *)(unaff_EBP + 0x18) << 1,0,0,0,700,0,0,0,0x80,0,0,4,0x11,&DAT_0046b0ac
                      );
  *(HFONT *)(unaff_EBP + -0x14) = pHVar1;
  FUN_0041e945();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  (*DAT_0069e230->lpVtbl->GetDesc)(DAT_0069e230,(D3DSURFACE_DESC *)(unaff_EBP + -0x34));
  FUN_0041ea04(*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
               *(undefined4 *)(unaff_EBP + -0x34));
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x48);
  pvVar2 = SelectObject(*(HDC *)(unaff_EBP + -0x10),*(HGDIOBJ *)(unaff_EBP + -0x14));
  *(HGDIOBJ *)(unaff_EBP + -0x38) = pvVar2;
  FUN_0041ec72(0,0,*(int *)(unaff_EBP + 0x10) << 1,*(int *)(unaff_EBP + 0x18) * 2 + 6);
  SetBkMode(*(HDC *)(unaff_EBP + -0x10),1);
  if (*(int *)(unaff_EBP + 0x24) != -1) {
    SetTextColor(*(HDC *)(unaff_EBP + -0x10),*(COLORREF *)(unaff_EBP + 0x24));
    sVar3 = _strlen(*(char **)(unaff_EBP + 0x28));
    TextOutA(*(HDC *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 8) * 2 + 3,2,
             *(LPCSTR *)(unaff_EBP + 0x28),sVar3);
  }
  SetTextColor(*(HDC *)(unaff_EBP + -0x10),*(COLORREF *)(unaff_EBP + 0x20));
  sVar3 = _strlen(*(char **)(unaff_EBP + 0x28));
  TextOutA(*(HDC *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 8) << 1,0,*(LPCSTR *)(unaff_EBP + 0x28),
           sVar3);
  SelectObject(*(HDC *)(unaff_EBP + -0x10),*(HGDIOBJ *)(unaff_EBP + -0x38));
  FUN_0041ec72(0,0,*(int *)(unaff_EBP + 0x10) << 1,*(int *)(unaff_EBP + 0x18) * 2 + 6);
  FUN_0041ef11(DAT_0069e230);
  SelectObject(*(HDC *)(unaff_EBP + -0x10),*(HGDIOBJ *)(unaff_EBP + -0x38));
  DeleteObject(*(HGDIOBJ *)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + 0x10);
  *(int *)(unaff_EBP + -0x70) = *(int *)(unaff_EBP + 0xc) + 0x10;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(int *)(unaff_EBP + -100) = *(int *)(unaff_EBP + 0x10) * 2 + -2;
  *(int *)(unaff_EBP + -0x60) = *(int *)(unaff_EBP + 0x18) * 2 + -2;
  (**(code **)(**(int **)(unaff_EBP + 0x2c) + 0x3c))
            (*(undefined4 *)(unaff_EBP + 0x2c),0,unaff_EBP + -0x80);
  FUN_0043ff78(*(undefined4 *)(unaff_EBP + -0x80),0,unaff_EBP + -0x7c,DAT_0069e230,0,
               unaff_EBP + -0x6c,4,0);
  if (*(int *)(unaff_EBP + -0x80) != 0) {
    (**(code **)(**(int **)(unaff_EBP + -0x80) + 8))(*(undefined4 *)(unaff_EBP + -0x80));
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0041e981();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

