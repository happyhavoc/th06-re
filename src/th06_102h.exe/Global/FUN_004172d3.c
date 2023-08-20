
undefined4 FUN_004172d3(void)

{
  int in_ECX;
  undefined4 local_c;
  
  if ((*(short *)(*(int *)(in_ECX + 4) + 0x24d4) < 0) ||
     ((*(uint *)(*(int *)(in_ECX + 4) + 0x24a4) >> 0xd & 1) == 0)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}

