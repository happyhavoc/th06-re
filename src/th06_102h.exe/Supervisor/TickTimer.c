
void __thiscall Supervisor::TickTimer(Supervisor *this,int *frames,float *subframes)

{
  if (this->framerateMultiplier < 0.99 == (this->framerateMultiplier == 0.99)) {
    *frames = *frames + 1;
  }
  else {
    *subframes = *subframes + this->effectiveFramerateMultiplier;
    if (1.0 <= *subframes) {
      *frames = *frames + 1;
      *subframes = *subframes - 1.0;
    }
  }
  return;
}

