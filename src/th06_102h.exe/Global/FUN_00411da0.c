
undefined4 FUN_00411da0(void)

{
  undefined4 uVar1;
  int in_ECX;
  int local_c;
  undefined *local_8;
  
  if (*(int *)(in_ECX + 0xce4) < *(int *)(in_ECX + 0xea8)) {
    *(undefined4 *)(in_ECX + 0xce4) = *(undefined4 *)(in_ECX + 0xea8);
    FUN_00407440(in_ECX + 0x990,*(undefined2 *)(in_ECX + 0xeac));
    *(undefined4 *)(in_ECX + 0xea8) = 0xffffffff;
    *(undefined4 *)(in_ECX + 0xeb4) = *(undefined4 *)(in_ECX + 0xc44);
    *(undefined4 *)(in_ECX + 0xcd4) = 0xbf000000;
    *(undefined4 *)(in_ECX + 0xcd8) = 0x3f000000;
    *(undefined2 *)(in_ECX + 0xcdc) = 0;
    *(undefined2 *)(in_ECX + 0xcde) = 0;
    *(undefined2 *)(in_ECX + 0xce0) = 0;
    *(undefined2 *)(in_ECX + 0xce2) = 0;
    *(undefined4 *)(in_ECX + 0xc3c) = 0;
    local_8 = &DAT_004b8898;
    for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
      if (((((char)local_8[0xe50] < '\0') && (((byte)local_8[0xe51] >> 3 & 1) == 0)) &&
          (*(undefined4 *)(local_8 + 0xce4) = 0, (local_8[0xe51] & 1) == 0)) &&
         (-1 < *(int *)(local_8 + 0xc44))) {
        FUN_00407440(local_8 + 0x990,*(undefined2 *)(local_8 + 0xc44));
        *(undefined4 *)(local_8 + 0xc44) = 0xffffffff;
      }
      local_8 = local_8 + 0xec8;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

