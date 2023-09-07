
void FUN_004241e5(int param_1)

{
  undefined4 *in_ECX;
  
  if (g_GameContext.field91_0x1ac <= 0.99) {
    if (param_1 < 0) {
      FUN_00424145(-param_1);
    }
    else {
      *in_ECX = in_ECX[2];
      in_ECX[1] = (float)in_ECX[1] - (float)g_GameContext._424_4_ * (float)param_1;
      while ((float)in_ECX[1] < 0.0 != NAN((float)in_ECX[1])) {
        in_ECX[2] = in_ECX[2] + -1;
        in_ECX[1] = (float)in_ECX[1] + 1.0;
      }
    }
  }
  else {
    in_ECX[2] = in_ECX[2] - param_1;
  }
  return;
}

