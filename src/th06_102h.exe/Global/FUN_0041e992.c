
uint __fastcall FUN_0041e992(undefined4 *param_1)

{
  uint uVar1;
  
  if (param_1[5] == 0) {
    uVar1 = (uint)param_1 & 0xffffff00;
  }
  else {
    SelectObject((HDC)param_1[5],(HGDIOBJ)param_1[6]);
    DeleteDC((HDC)param_1[5]);
    DeleteObject((HGDIOBJ)param_1[7]);
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    uVar1 = CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return uVar1;
}

