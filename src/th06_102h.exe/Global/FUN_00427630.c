
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427630(float *param_1)

{
  int in_ECX;
  float local_10;
  float local_c;
  float local_8;
  
  if (_DAT_006d1bf0 == 0) {
    if (DAT_0069bcb4 < 9999) {
      DAT_0069bcb4 = DAT_0069bcb4 + 1;
    }
    if (DAT_0069bcb8 < 999999) {
      DAT_0069bcb8 = DAT_0069bcb8 + 1;
    }
  }
  local_8 = (*(float *)(in_ECX + 0x448) + param_1[2]) * 0.5;
  local_c = (*(float *)(in_ECX + 0x444) + param_1[1]) * 0.5;
  local_10 = (*(float *)(in_ECX + 0x440) + *param_1) * 0.5;
  FUN_0040ef50(8,&local_10,1,0xffffffff);
  DAT_0069bca4 = DAT_0069bca4 + 500;
  FUN_0041c57e(6);
  DAT_0069bc30 = DAT_0069bc30 & 0xffffff3f | 0x80;
  FUN_004311e0(0x1e);
  return;
}

