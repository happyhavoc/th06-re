
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool calcChainElementCallback_3(ScreenEffect *param_1)

{
  bool bVar1;
  uint uVar2;
  
  if (param_1->field5_0x14 != 0) {
    uVar2 = __ftol2((((float)(param_1->timer).current + (param_1->timer).subFrame) * 255.0) /
                    (float)param_1->field5_0x14);
    param_1->field4_0x10 = uVar2;
    if ((int)param_1->field4_0x10 < 0) {
      param_1->field4_0x10 = 0;
    }
  }
  bVar1 = (param_1->timer).current < param_1->field5_0x14;
  if (bVar1) {
    (param_1->timer).previous = (param_1->timer).current;
    Supervisor::TickTimer(&g_Supervisor,&(param_1->timer).current,&(param_1->timer).subFrame);
  }
  return bVar1;
}

