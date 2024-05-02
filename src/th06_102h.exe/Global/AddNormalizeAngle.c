
float AddNormalizeAngle(float param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  param_1 = param_1 + param_2;
  do {
    if (param_1 <= 3.141593) break;
    param_1 = param_1 - 6.283185;
    iVar2 = local_8 + 1;
    bVar1 = local_8 < 0x11;
    local_8 = iVar2;
  } while (bVar1);
  do {
    if (param_1 < -3.141593 == NAN(param_1)) {
      return param_1;
    }
    param_1 = param_1 + 6.283185;
    bVar1 = local_8 < 0x11;
    local_8 = local_8 + 1;
  } while (bVar1);
  return param_1;
}

