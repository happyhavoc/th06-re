
void FUN_00420190(void)

{
  float fVar1;
  long lVar2;
  Unknown *in_ECX;
  Unknown *local_10;
  int local_c;
  int local_8;
  
  local_10 = in_ECX;
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    if (*(char *)((int)&local_10[1].field14_0x7c + 1) != '\0') {
      *(float *)&local_10->field_0x90 = VIEWPORT_X + (float)local_10[1].field13_0x3c.field4_0x10;
      *(float *)&local_10->field_0x94 = VIEWPORT_Y + local_10[1].field13_0x3c.field5_0x14;
      local_10->field31_0x98 = 0.01;
      fVar1 = local_10[1].field13_0x3c.field5_0x14;
      if (fVar1 < -8.0 == NAN(fVar1)) {
        if (*(char *)((int)&local_10[1].field14_0x7c + 2) == '\0') {
          FUN_004323a0(g_VeryBigStruct,local_10,*(char *)&local_10[1].field14_0x7c + 0x200);
          *(undefined *)((int)&local_10[1].field14_0x7c + 2) = 1;
          local_10->field14_0x7c = -1;
        }
      }
      else {
        *(float *)&local_10->field_0x94 = VIEWPORT_Y + 8.0;
        if (*(char *)((int)&local_10[1].field14_0x7c + 2) != '\0') {
          FUN_004323a0(g_VeryBigStruct,local_10,*(char *)&local_10[1].field14_0x7c + 0x207);
          *(undefined *)((int)&local_10[1].field14_0x7c + 2) = 0;
        }
        lVar2 = __ftol2((double)(((8.0 - local_10[1].field13_0x3c.field5_0x14) * 255.0) / 128.0));
        local_8 = 0xff - lVar2;
        if (local_8 < 0x40) {
          local_8 = 0x40;
        }
        local_10->field14_0x7c = local_10->field14_0x7c & 0xffffffU | local_8 << 0x18;
      }
      FUN_00432ad0(g_VeryBigStruct,(int)local_10);
    }
    local_10 = (Unknown *)&local_10[1].field15_0x80;
  }
  return;
}

