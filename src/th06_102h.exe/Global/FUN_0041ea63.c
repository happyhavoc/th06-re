
undefined4 FUN_0041ea63(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  HGDIOBJ pvVar2;
  int *in_ECX;
  void *local_90;
  HBITMAP local_8c;
  int local_88;
  BITMAPINFO local_84;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  HDC local_c;
  int local_8;
  
  FUN_0041e992(in_ECX);
  _memset(&local_84,0,0x6c);
  local_88 = FUN_0041ec22(param_3);
  if (local_88 == 0) {
    uVar1 = 0;
  }
  else {
    local_8 = (((param_1 * *(int *)(local_88 + 4)) / 8 + 3) / 4) * 4;
    local_84.bmiHeader.biSize = 0x6c;
    local_84.bmiHeader.biWidth = param_1;
    local_84.bmiHeader.biHeight = -(param_2 + 1);
    local_84.bmiHeader.biPlanes = 1;
    local_84.bmiHeader.biBitCount = *(WORD *)(local_88 + 4);
    local_84.bmiHeader.biSizeImage = param_2 * local_8;
    if ((param_3 != 0x18) && (param_3 != 0x16)) {
      local_84.bmiHeader.biCompression = 3;
      local_84.bmiColors[0] = *(RGBQUAD *)(local_88 + 0xc);
      local_58 = *(undefined4 *)(local_88 + 0x10);
      local_54 = *(undefined4 *)(local_88 + 0x14);
      local_50 = *(undefined4 *)(local_88 + 8);
    }
    local_8c = CreateDIBSection((HDC)0x0,&local_84,0,&local_90,(HANDLE)0x0,0);
    if (local_8c == (HBITMAP)0x0) {
      uVar1 = 0;
    }
    else {
      _memset(local_90,0,local_84.bmiHeader.biSizeImage);
      local_c = CreateCompatibleDC((HDC)0x0);
      pvVar2 = SelectObject(local_c,local_8c);
      in_ECX[5] = (int)local_c;
      in_ECX[7] = (int)local_8c;
      in_ECX[8] = (int)local_90;
      in_ECX[3] = local_84.bmiHeader.biSizeImage;
      in_ECX[6] = (int)pvVar2;
      in_ECX[1] = param_1;
      in_ECX[2] = param_2;
      *in_ECX = param_3;
      in_ECX[4] = local_8;
      uVar1 = 1;
    }
  }
  return uVar1;
}

