
void __thiscall ZunTimer::FUN_004241e5(ZunTimer *this,int param_1)

{
  if (g_Supervisor.framerateMultiplier <= 0.99) {
    if (param_1 < 0) {
      FUN_00424145(this,-param_1);
    }
    else {
      this->previous = this->current;
      this->subFrame = this->subFrame - g_Supervisor.effectiveFramerateMultiplier * (float)param_1;
      while (this->subFrame < 0.0 != NAN(this->subFrame)) {
        this->current = this->current + -1;
        this->subFrame = this->subFrame + 1.0;
      }
    }
  }
  else {
    this->current = this->current - param_1;
  }
  return;
}

