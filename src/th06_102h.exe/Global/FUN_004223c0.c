
void FUN_004223c0(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 *local_c;
  int local_8;
  
  local_c = *(undefined4 **)(in_ECX + 0x138);
  *(undefined4 *)(in_ECX + 0x2c8) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x2dc) = 0;
  *(undefined4 *)(in_ECX + 0x2e0) = 0;
  *(undefined4 *)(in_ECX + 0x128) = 0;
  *(undefined4 *)(in_ECX + 300) = 0;
  *(undefined4 *)(in_ECX + 0x130) = 0;
  *(undefined4 *)(in_ECX + 0x134) = 0;
  for (local_8 = 0; local_8 < *(int *)(in_ECX + 0x114); local_8 = local_8 + 1) {
    local_c[5] = local_c[4];
    local_c[6] = local_c[5];
    *local_c = 1;
    uVar1 = FUN_00421d90(local_c + 5);
    local_c[1] = uVar1;
    local_c = local_c + 8;
  }
  return;
}

