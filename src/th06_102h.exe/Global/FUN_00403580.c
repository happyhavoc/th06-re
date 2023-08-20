
void FUN_00403580(void)

{
  undefined4 *in_ECX;
  
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  in_ECX[9] = 0;
  in_ECX[8] = 0;
  in_ECX[5] = 0;
  in_ECX[4] = 0;
  in_ECX[3] = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  *in_ECX = 0;
  in_ECX[7] = 0x3f800000;
  in_ECX[6] = 0x3f800000;
  *(undefined2 *)((int)in_ECX + 0x86) = 0;
  *(undefined2 *)(in_ECX + 0x21) = 0;
  in_ECX[0x1f] = 0xffffffff;
  FUN_00403670(in_ECX + 0xf);
  *(undefined2 *)(in_ECX + 0x20) = 3;
  *(undefined2 *)(in_ECX + 0x22) = 0;
  *(undefined2 *)((int)in_ECX + 0x8a) = 0;
  *(undefined2 *)(in_ECX + 0x23) = 0;
  FUN_00424127();
  return;
}

