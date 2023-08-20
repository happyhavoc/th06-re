
void FUN_00401410(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = in_ECX;
  for (iVar1 = 0x306b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  in_ECX[0x1889] = 0xffffffff;
  in_ECX[0x188a] = 0x3f800000;
  in_ECX[0x188b] = 0x3f800000;
  in_ECX[100] = in_ECX[100] | 0x300;
  FUN_00403580();
  FUN_004323a0(in_ECX + 0x44,0);
  FUN_00403580();
  FUN_004323a0(in_ECX,0x20);
  in_ECX[0x6a] = 0x3dcccccd;
  in_ECX[0x188d] = 0;
  return;
}

