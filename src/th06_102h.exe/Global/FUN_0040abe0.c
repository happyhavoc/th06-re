
void FUN_0040abe0(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  float10 fVar4;
  
  piVar2 = (int *)(param_2 + 0xc);
  pfVar3 = (float *)FUN_0040b380(param_1,param_2 + 0x10,0);
  fVar1 = *pfVar3;
  fVar4 = (float10)FUN_0045bda4((double)fVar1);
  *(float *)(param_1 + 0xcac) = ((float)fVar4 * *(float *)(param_2 + 0x14) * (float)*piVar2) / 2.0;
  fVar4 = (float10)FUN_0045bcf4((double)fVar1);
  *(float *)(param_1 + 0xcb0) = ((float)fVar4 * *(float *)(param_2 + 0x14) * (float)*piVar2) / 2.0;
  *(undefined4 *)(param_1 + 0xcb4) = 0;
  *(undefined4 *)(param_1 + 0xcb8) = *(undefined4 *)(param_1 + 0xc6c);
  *(undefined4 *)(param_1 + 0xcbc) = *(undefined4 *)(param_1 + 0xc70);
  *(undefined4 *)(param_1 + 0xcc0) = *(undefined4 *)(param_1 + 0xc74);
  *(int *)(param_1 + 0xcd0) = *piVar2;
  *(undefined4 *)(param_1 + 0xccc) = *(undefined4 *)(param_1 + 0xcd0);
  *(undefined4 *)(param_1 + 0xcc8) = 0;
  *(undefined4 *)(param_1 + 0xcc4) = 0xfffffc19;
  *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xfc | 2;
  return;
}

