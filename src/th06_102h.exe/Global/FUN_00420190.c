
void FUN_00420190(void)

{
  long lVar1;
  int in_ECX;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = in_ECX;
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    if (*(char *)(local_10 + 0x141) != '\0') {
      *(float *)(local_10 + 0x90) = VIEWPORT_X + *(float *)(local_10 + 0x110);
      *(float *)(local_10 + 0x94) = VIEWPORT_Y + *(float *)(local_10 + 0x114);
      *(undefined4 *)(local_10 + 0x98) = 0x3c23d70a;
      if (*(float *)(local_10 + 0x114) < -8.0 == NAN(*(float *)(local_10 + 0x114))) {
        if (*(char *)(local_10 + 0x142) == '\0') {
          FUN_004323a0(local_10,*(char *)(local_10 + 0x140) + 0x200);
          *(undefined *)(local_10 + 0x142) = 1;
          *(undefined4 *)(local_10 + 0x7c) = 0xffffffff;
        }
      }
      else {
        *(float *)(local_10 + 0x94) = VIEWPORT_Y + 8.0;
        if (*(char *)(local_10 + 0x142) != '\0') {
          FUN_004323a0(local_10,*(char *)(local_10 + 0x140) + 0x207);
          *(undefined *)(local_10 + 0x142) = 0;
        }
        lVar1 = __ftol2((double)(((8.0 - *(float *)(local_10 + 0x114)) * 255.0) / 128.0));
        local_8 = 0xff - lVar1;
        if (local_8 < 0x40) {
          local_8 = 0x40;
        }
        *(uint *)(local_10 + 0x7c) = *(uint *)(local_10 + 0x7c) & 0xffffff | local_8 << 0x18;
      }
      FUN_00432ad0(VERY_BIG_STRUCT,local_10);
    }
    local_10 = local_10 + 0x144;
  }
  return;
}

