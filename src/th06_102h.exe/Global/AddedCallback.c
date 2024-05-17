
undefined4 AddedCallback(ScreenEffect *param_1)

{
  (param_1->timer).current = 0;
  (param_1->timer).subFrame = 0.0;
  (param_1->timer).previous = -999;
  return 0;
}

