
void __thiscall FUN_00424285(GameContext *param_1_00,int *param_2,float *param_3)

{
  if (param_1_00->field91_0x1ac < 0.99 == (param_1_00->field91_0x1ac == 0.99)) {
    *param_2 = *param_2 + 1;
  }
  else {
    *param_3 = *param_3 + *(float *)&param_1_00->field_0x1a8;
    if (1.0 <= *param_3) {
      *param_2 = *param_2 + 1;
      *param_3 = *param_3 - 1.0;
    }
  }
  return;
}

