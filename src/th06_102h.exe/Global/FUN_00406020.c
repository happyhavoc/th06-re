
void FUN_00406020(int param_1)

{
  float fVar1;
  int local_38;
  int local_2c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_18 = 0x42000000;
  local_14 = 0x41800000;
  local_10 = 0x43d00000;
  local_c = 0x43e80000;
  if (*(int *)(param_1 + 0x75d8) < 0x3c) {
    if ((((float)*(int *)(param_1 + 0x75d8) + *(float *)(param_1 + 0x75d4)) * 176.0) / 60.0 < 176.0)
    {
      local_2c = __ftol2();
    }
    else {
      local_2c = 0xb0;
    }
    local_8 = local_2c;
  }
  else if (*(int *)(param_1 + 0x75d8) < *(int *)(param_1 + 0x75cc) + -0x3c) {
    local_8 = 0xb0;
  }
  else {
    fVar1 = (((float)*(int *)(param_1 + 0x75cc) -
             ((float)*(int *)(param_1 + 0x75d8) + *(float *)(param_1 + 0x75d4))) * 176.0) / 60.0;
    if (fVar1 < 0.0 == NAN(fVar1)) {
      local_38 = __ftol2();
    }
    else {
      local_38 = 0;
    }
    local_8 = local_38;
  }
  FUN_0042f8b0(&local_18,local_8 << 0x18);
  return;
}

