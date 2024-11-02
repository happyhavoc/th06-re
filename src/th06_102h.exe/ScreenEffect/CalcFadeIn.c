
ChainCallbackResult th06::ScreenEffect::CalcFadeIn(ScreenEffect *param_1)

{
  bool bVar1;
  long lVar2;
  
  if (param_1->effectLength != 0) {
    lVar2 = __ftol2(255.0 - (((float)(param_1->timer).current + (param_1->timer).subFrame) * 255.0)
                            / (float)param_1->effectLength);
    param_1->fadeAlpha = lVar2;
    if (param_1->fadeAlpha < 0) {
      param_1->fadeAlpha = 0;
    }
  }
  bVar1 = (param_1->timer).current < param_1->effectLength;
  if (bVar1) {
    (param_1->timer).previous = (param_1->timer).current;
    Supervisor::TickTimer(&g_Supervisor,&(param_1->timer).current,&(param_1->timer).subFrame);
  }
  return bVar1;
}

