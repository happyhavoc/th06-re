
void FUN_0041e150(undefined4 param_1,int param_2,int param_3)

{
  HDC hdc;
  HFONT h;
  HGDIOBJ h_00;
  int iVar1;
  int in_ECX;
  
  hdc = CreateCompatibleDC((HDC)0x0);
  h = CreateFontA(param_3,param_2,0,0,400,0,0,0,0x80,0,0,0,0,&DAT_0046b0ac);
  if (h != (HFONT)0x0) {
    h_00 = SelectObject(hdc,h);
    iVar1 = FUN_0043f745(param_1,h,in_ECX + 4);
    if (iVar1 < 0) {
      MessageBoxA((HWND)0x0,"D3DXCreateFontIndirect FALSE","ok",0);
    }
    else {
      SelectObject(hdc,h_00);
      DeleteObject(h);
    }
  }
  return;
}

