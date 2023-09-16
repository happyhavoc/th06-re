
void FUN_00424145(int param_1)

{
  undefined4 *in_ECX;
  
  if (g_GameContext.framerateMultiplier <= 0.99) {
    if (param_1 < 0) {
      FUN_004241e5(-param_1);
    }
    else {
      *in_ECX = in_ECX[2];
      in_ECX[1] = g_GameContext.field84_0x1a8 * (float)param_1 + (float)in_ECX[1];
      while (1.0 <= (float)in_ECX[1]) {
        in_ECX[2] = in_ECX[2] + 1;
        in_ECX[1] = (float)in_ECX[1] - 1.0;
      }
    }
  }
  else {
    in_ECX[2] = in_ECX[2] + param_1;
  }
  return;
}

