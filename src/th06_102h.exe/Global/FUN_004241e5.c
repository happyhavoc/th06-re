
void __thiscall FUN_004241e5(void *this,int param_1)

{
  if (g_Supervisor.framerateMultiplier <= 0.99) {
    if (param_1 < 0) {
      FUN_00424145(-param_1);
    }
    else {
      *(undefined4 *)this = *(undefined4 *)((int)this + 8);
      *(float *)((int)this + 4) =
           *(float *)((int)this + 4) - g_Supervisor.field81_0x1a8 * (float)param_1;
      while (*(float *)((int)this + 4) < 0.0 != NAN(*(float *)((int)this + 4))) {
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
        *(float *)((int)this + 4) = *(float *)((int)this + 4) + 1.0;
      }
    }
  }
  else {
    *(int *)((int)this + 8) = *(int *)((int)this + 8) - param_1;
  }
  return;
}

