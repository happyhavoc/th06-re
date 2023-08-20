
void FUN_0040b7d0(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  int local_18;
  
  pfVar1 = (float *)FUN_0040afb0();
  if (local_18 == 1) {
    pfVar2 = (float *)FUN_0040b380();
    pfVar3 = (float *)FUN_0040b380();
    pfVar4 = (float *)FUN_0040b380();
    pfVar5 = (float *)FUN_0040b380();
    fVar6 = (float10)FUN_0045be40((double)(*pfVar5 - *pfVar3),(double)(*pfVar4 - *pfVar2));
    *pfVar1 = (float)fVar6;
  }
  return;
}

