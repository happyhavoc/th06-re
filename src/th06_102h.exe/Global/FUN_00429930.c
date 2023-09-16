
undefined4 FUN_00429930(int param_1)

{
  FUN_00429b00(param_1);
  if ((*(int *)(param_1 + 0x75c8) != 0) && (*(int *)(param_1 + 0x75e0) != 0)) {
    (**(code **)(param_1 + 0x75e0))(param_1);
  }
  *(float *)(param_1 + 0x90) = VIEWPORT_X + *(float *)(param_1 + 0x440);
  *(float *)(param_1 + 0x94) = VIEWPORT_Y + *(float *)(param_1 + 0x444);
  *(undefined4 *)(param_1 + 0x98) = 0x3efae148;
  if (DAT_0069d4c0 == '\0') {
    FUN_00432ad0(g_AnmManager,param_1);
    if ((*(char *)(param_1 + 0x9e2) != '\0') &&
       ((*(char *)(param_1 + 0x9e0) == '\0' || (*(char *)(param_1 + 0x9e0) == '\x03')))) {
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x4a0);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x4a4);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x4a8);
      *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_1 + 0x4ac);
      *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_1 + 0x4b0);
      *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_1 + 0x4b4);
      *(float *)(param_1 + 0x1a0) = VIEWPORT_X + *(float *)(param_1 + 0x1a0);
      *(float *)(param_1 + 0x1a4) = VIEWPORT_Y + *(float *)(param_1 + 0x1a4);
      *(float *)(param_1 + 0x2b0) = VIEWPORT_X + *(float *)(param_1 + 0x2b0);
      *(float *)(param_1 + 0x2b4) = VIEWPORT_Y + *(float *)(param_1 + 0x2b4);
      *(undefined4 *)(param_1 + 0x1a8) = 0x3efb645a;
      *(undefined4 *)(param_1 + 0x2b8) = 0x3efb645a;
      FUN_00432cc0((void *)(param_1 + 0x110));
      FUN_00432cc0((void *)(param_1 + 0x220));
    }
  }
  return 1;
}

