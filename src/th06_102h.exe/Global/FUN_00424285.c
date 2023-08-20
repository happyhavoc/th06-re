
void FUN_00424285(int *param_1,float *param_2)

{
  int in_ECX;
  
  if (*(float *)(in_ECX + 0x1ac) < 0.99 == (*(float *)(in_ECX + 0x1ac) == 0.99)) {
    *param_1 = *param_1 + 1;
  }
  else {
    *param_2 = *param_2 + *(float *)(in_ECX + 0x1a8);
    if (1.0 <= *param_2) {
      *param_1 = *param_1 + 1;
      *param_2 = *param_2 - 1.0;
    }
  }
  return;
}

