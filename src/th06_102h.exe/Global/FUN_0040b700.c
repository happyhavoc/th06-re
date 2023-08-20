
void FUN_0040b700(void)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  int local_14;
  
  pfVar1 = (float *)FUN_0040afb0();
  if (local_14 == 0) {
    piVar2 = (int *)FUN_0040afb0();
    piVar3 = (int *)FUN_0040afb0();
    *pfVar1 = (float)(*piVar2 % *piVar3);
  }
  else if (local_14 == 1) {
    pfVar4 = (float *)FUN_0040b380();
    pfVar5 = (float *)FUN_0040b380();
    fVar6 = (float10)FUN_0045be60((double)*pfVar4,(double)*pfVar5);
    *pfVar1 = (float)fVar6;
  }
  return;
}

