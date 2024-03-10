
void __thiscall ZunTimer::Decrement(ZunTimer *this,int value)

{
  if (g_Supervisor.framerateMultiplier <= 0.99) {
    if (value < 0) {
      Increment(this,-value);
    }
    else {
      this->previous = this->current;
      this->subFrame = this->subFrame - g_Supervisor.effectiveFramerateMultiplier * (float)value;
      while (this->subFrame < 0.0 != NAN(this->subFrame)) {
        this->current = this->current + -1;
        this->subFrame = this->subFrame + 1.0;
      }
    }
  }
  else {
    this->current = this->current - value;
  }
  return;
}

