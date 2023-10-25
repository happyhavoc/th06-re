
undefined4 FUN_0041b5e1(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = param_3 / 2.0 + param_1;
  if (fVar1 < 0.0 == NAN(fVar1)) {
    if (param_1 - param_3 / 2.0 <= g_GameManager.arcade_region_size.x) {
      fVar1 = param_4 / 2.0 + param_2;
      if (fVar1 < 0.0 == NAN(fVar1)) {
        if (param_2 - param_4 / 2.0 <= g_GameManager.arcade_region_size.y) {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

