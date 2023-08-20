
bool FUN_0041e992(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[5];
  if (iVar1 != 0) {
    SelectObject((HDC)in_ECX[5],(HGDIOBJ)in_ECX[6]);
    DeleteDC((HDC)in_ECX[5]);
    DeleteObject((HGDIOBJ)in_ECX[7]);
    *in_ECX = 0xffffffff;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    in_ECX[5] = 0;
    in_ECX[7] = 0;
    in_ECX[6] = 0;
    in_ECX[8] = 0;
  }
  return iVar1 != 0;
}

