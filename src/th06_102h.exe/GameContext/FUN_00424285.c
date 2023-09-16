
void __thiscall GameContext::FUN_00424285(GameContext *this,int *param_1,float *param_2)

{
  if (this->framerateMultiplier < 0.99 == (this->framerateMultiplier == 0.99)) {
    *param_1 = *param_1 + 1;
  }
  else {
    *param_2 = *param_2 + this->field84_0x1a8;
    if (1.0 <= *param_2) {
      *param_1 = *param_1 + 1;
      *param_2 = *param_2 - 1.0;
    }
  }
  return;
}

