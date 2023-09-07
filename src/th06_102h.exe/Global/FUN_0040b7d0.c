
void FUN_0040b7d0(int param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float *pfVar1;
  float10 fVar2;
  int local_18;
  float *local_14;
  float *local_10;
  float *local_c;
  float *local_8;
  
  local_c = (float *)FUN_0040afb0(param_1,&param_2,&local_18);
  if (local_18 == 1) {
    local_14 = FUN_0040b380(param_1,param_3,(undefined4 *)0x0);
    local_10 = FUN_0040b380(param_1,param_4,(undefined4 *)0x0);
    local_8 = FUN_0040b380(param_1,param_5,(undefined4 *)0x0);
    pfVar1 = FUN_0040b380(param_1,param_6,(undefined4 *)0x0);
    fVar2 = (float10)FUN_0045be40((double)(*pfVar1 - *local_10),(double)(*local_8 - *local_14));
    *local_c = (float)fVar2;
  }
  return;
}

