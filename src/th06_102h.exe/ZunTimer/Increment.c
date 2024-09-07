
void __thiscall th06::ZunTimer::Increment(ZunTimer *this,int value)

{
  if (g_Supervisor.framerateMultiplier <= 0.99) {
    if (value < 0) {
      Decrement(this,-value);
    }
    else {
      this->previous = this->current;
      this->subFrame = g_Supervisor.effectiveFramerateMultiplier * (float)value + this->subFrame;
      while (1.0 <= this->subFrame) {
        this->current = this->current + 1;
        this->subFrame = this->subFrame - 1.0;
      }
    }
  }
  else {
    this->current = this->current + value;
  }
  return;
}

