
/* WARNING: Removing unreachable block (ram,0x004300e2) */
/* WARNING: Removing unreachable block (ram,0x00430173) */

undefined4 FUN_0042ffc0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (DAT_0069bccc == '\0') {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
    FUN_00424285(&g_GameContext,(int *)(param_1 + 0x2c),(float *)(param_1 + 0x28));
    if (*(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x14)) {
      fVar1 = (((float)*(int *)(param_1 + 0x2c) + *(float *)(param_1 + 0x28)) *
              (float)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18))) /
              (float)*(int *)(param_1 + 0x14) + (float)*(int *)(param_1 + 0x18);
      uVar3 = FUN_0041e7f0();
      uVar3 = uVar3 % 3;
      if (uVar3 == 0) {
        VIEWPORT_X = 32.0;
        VIEWPORT_WIDTH = 384.0;
      }
      else if (uVar3 == 1) {
        VIEWPORT_X = fVar1 + 32.0;
        VIEWPORT_WIDTH = 384.0 - fVar1;
      }
      else if (uVar3 == 2) {
        VIEWPORT_X = 32.0;
        VIEWPORT_WIDTH = 384.0 - fVar1;
      }
      uVar3 = FUN_0041e7f0();
      uVar3 = uVar3 % 3;
      if (uVar3 == 0) {
        VIEWPORT_Y = 16.0;
        VIEWPORT_HEIGHT = 448.0;
      }
      else if (uVar3 == 1) {
        VIEWPORT_Y = fVar1 + 16.0;
        VIEWPORT_HEIGHT = 448.0 - fVar1;
      }
      else if (uVar3 == 2) {
        VIEWPORT_Y = 16.0;
        VIEWPORT_HEIGHT = 448.0 - fVar1;
      }
      uVar2 = 1;
    }
    else {
      VIEWPORT_X = 32.0;
      VIEWPORT_Y = 16.0;
      VIEWPORT_WIDTH = 384.0;
      VIEWPORT_HEIGHT = 448.0;
      uVar2 = 0;
    }
  }
  else {
    VIEWPORT_X = 32.0;
    VIEWPORT_Y = 16.0;
    VIEWPORT_WIDTH = 384.0;
    VIEWPORT_HEIGHT = 448.0;
    uVar2 = 1;
  }
  return uVar2;
}

