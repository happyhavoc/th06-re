
void FUN_0040b420(int param_1,undefined4 param_2,float *param_3,float *param_4)

{
  int *piVar1;
  float *pfVar2;
  int local_14;
  float *local_10;
  float *local_8;
  
  local_8 = (float *)FUN_0040afb0(param_1,&param_2,&local_14);
  if (local_14 == 0) {
    local_10 = (float *)FUN_0040afb0(param_1,(int *)param_3,(undefined4 *)0x0);
    piVar1 = FUN_0040afb0(param_1,(int *)param_4,(undefined4 *)0x0);
    *local_8 = (float)((int)*local_10 + *piVar1);
  }
  else if (local_14 == 1) {
    local_10 = FUN_0040b380(param_1,param_3,(undefined4 *)0x0);
    pfVar2 = FUN_0040b380(param_1,param_4,(undefined4 *)0x0);
    *local_8 = *local_10 + *pfVar2;
  }
  return;
}

