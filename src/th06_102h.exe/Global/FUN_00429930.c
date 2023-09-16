
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00429930(AnmVm *param_1)

{
  float *pfVar1;
  
  FUN_00429b00(param_1);
  if ((param_1[0x6e].pos2.y != 0.0) && (param_1[0x6e].alphaInterpTime.previous != 0)) {
    (*(code *)param_1[0x6e].alphaInterpTime.previous)(param_1);
  }
  (param_1->pos).x = _DAT_0069d6dc + param_1[4].rotation.x;
  (param_1->pos).y = _DAT_0069d6e0 + param_1[4].rotation.y;
  (param_1->pos).z = 0.49;
  if (DAT_0069d4c0 == '\0') {
    AnmManager::FUN_00432ad0(g_AnmManager,param_1);
    if ((*(char *)((int)&param_1[9].matrix.field0_0x0 + 0x16) != '\0') &&
       ((*(char *)((int)&param_1[9].matrix.field0_0x0 + 0x14) == '\0' ||
        (*(char *)((int)&param_1[9].matrix.field0_0x0 + 0x14) == '\x03')))) {
      param_1[1].pos.x = param_1[4].matrix.field0_0x0.field0._32;
      param_1[1].pos.y = param_1[4].matrix.field0_0x0.field0._33;
      param_1[1].pos.z = param_1[4].matrix.field0_0x0.field0._34;
      param_1[2].pos.x = param_1[4].matrix.field0_0x0.field0._41;
      param_1[2].pos.y = param_1[4].matrix.field0_0x0.field0._42;
      param_1[2].pos.z = param_1[4].matrix.field0_0x0.field0._43;
      param_1[1].pos.x = _DAT_0069d6dc + param_1[1].pos.x;
      pfVar1 = &param_1[1].pos.y;
      *pfVar1 = _DAT_0069d6e0 + *pfVar1;
      param_1[2].pos.x = _DAT_0069d6dc + param_1[2].pos.x;
      pfVar1 = &param_1[2].pos.y;
      *pfVar1 = _DAT_0069d6e0 + *pfVar1;
      param_1[1].pos.z = 0.491;
      param_1[2].pos.z = 0.491;
      FUN_00432cc0(param_1 + 1);
      FUN_00432cc0(param_1 + 2);
    }
  }
  return 1;
}

