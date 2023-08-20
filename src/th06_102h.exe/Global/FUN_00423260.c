
void FUN_00423260(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint local_18;
  int local_c;
  
  if (*(int *)(in_ECX + 0x2d4) == 0) {
    for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
      iVar1 = __ftol2((float)(uint)*(byte *)(in_ECX + 0x169 + local_c * 0x17));
      uVar2 = iVar1 + param_1;
      if ((int)uVar2 < 0) {
        local_18 = 0;
      }
      else {
        local_18 = uVar2;
        if (0x7f < (int)uVar2) {
          local_18 = 0x7f;
        }
      }
      FUN_00421be0(local_c + 0xb0U & 0xff,CONCAT31((int3)(uVar2 >> 8),7),local_18 & 0xff);
    }
  }
  return;
}

