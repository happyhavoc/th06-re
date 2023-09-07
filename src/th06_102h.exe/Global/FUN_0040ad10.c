
void FUN_0040ad10(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  
  pfVar4 = FUN_0040b380(param_1,(float *)(param_2 + 0x10),(undefined4 *)0x0);
  fVar1 = *pfVar4;
  pfVar4 = FUN_0040b380(param_1,(float *)(param_2 + 0x14),(undefined4 *)0x0);
  fVar2 = *pfVar4;
  pfVar4 = FUN_0040b380(param_1,(float *)(param_2 + 0x18),(undefined4 *)0x0);
  fVar3 = *pfVar4;
  *(float *)(param_1 + 0xcac) = fVar1 - *(float *)(param_1 + 0xc6c);
  *(float *)(param_1 + 0xcb0) = fVar2 - *(float *)(param_1 + 0xc70);
  *(float *)(param_1 + 0xcb4) = fVar3 - *(float *)(param_1 + 0xc74);
  *(undefined4 *)(param_1 + 0xcb8) = *(undefined4 *)(param_1 + 0xc6c);
  *(undefined4 *)(param_1 + 0xcbc) = *(undefined4 *)(param_1 + 0xc70);
  *(undefined4 *)(param_1 + 0xcc0) = *(undefined4 *)(param_1 + 0xc74);
  *(undefined4 *)(param_1 + 0xcd0) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xccc) = *(undefined4 *)(param_1 + 0xcd0);
  *(undefined4 *)(param_1 + 0xcc8) = 0;
  *(undefined4 *)(param_1 + 0xcc4) = 0xfffffc19;
  *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xfc | 2;
  *(undefined4 *)(param_1 + 0xc84) = 0;
  *(undefined4 *)(param_1 + 0xc88) = 0;
  *(undefined4 *)(param_1 + 0xc8c) = 0;
  return;
}

