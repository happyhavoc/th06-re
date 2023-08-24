
void FUN_0041f290(undefined4 *param_1,int param_2,int param_3)

{
  VeryBigStruct *pVVar1;
  int in_ECX;
  float10 fVar2;
  short local_14;
  int local_c;
  int local_8;
  
  local_c = in_ECX + *(int *)(in_ECX + 0x28944) * 0x144;
  local_8 = 0;
  while( true ) {
    if (0x1ff < local_8) {
      return;
    }
    *(int *)(in_ECX + 0x28944) = *(int *)(in_ECX + 0x28944) + 1;
    if (*(char *)(local_c + 0x141) == '\0') break;
    if (*(int *)(in_ECX + 0x28944) < 0x200) {
      local_c = local_c + 0x144;
    }
    else {
      *(undefined4 *)(in_ECX + 0x28944) = 0;
      local_c = in_ECX;
    }
    local_8 = local_8 + 1;
  }
  if (0x1ff < *(int *)(in_ECX + 0x28944)) {
    *(undefined4 *)(in_ECX + 0x28944) = 0;
  }
  *(undefined *)(local_c + 0x141) = 1;
  *(undefined4 *)(local_c + 0x110) = *param_1;
  *(undefined4 *)(local_c + 0x114) = param_1[1];
  *(undefined4 *)(local_c + 0x118) = param_1[2];
  *(undefined4 *)(local_c + 0x11c) = 0;
  *(undefined4 *)(local_c + 0x120) = 0xc00ccccd;
  *(undefined4 *)(local_c + 0x124) = 0;
  *(undefined *)(local_c + 0x140) = (undefined)param_2;
  *(undefined *)(local_c + 0x143) = (undefined)param_3;
  *(undefined4 *)(local_c + 0x13c) = 0;
  *(undefined4 *)(local_c + 0x138) = 0;
  *(undefined4 *)(local_c + 0x134) = 0xfffffc19;
  if (param_3 == 2) {
    fVar2 = (float10)FUN_0041e820();
    *(float *)(local_c + 0x128) = (float)(fVar2 * (float10)288.0 + (float10)48.0);
    fVar2 = (float10)FUN_0041e820();
    *(float *)(local_c + 300) = (float)(fVar2 * (float10)192.0 - (float10)64.0);
    *(undefined4 *)(local_c + 0x130) = 0;
    *(undefined4 *)(local_c + 0x11c) = *(undefined4 *)(local_c + 0x110);
    *(undefined4 *)(local_c + 0x120) = *(undefined4 *)(local_c + 0x114);
    *(undefined4 *)(local_c + 0x124) = *(undefined4 *)(local_c + 0x118);
  }
  pVVar1 = VERY_BIG_STRUCT;
  local_14 = (short)param_2 + 0x215;
  *(short *)(local_c + 0xb4) = local_14;
  FUN_00432430(local_c,*(undefined4 *)(&pVVar1->field_0x1d188 + param_2 * 4));
  *(undefined4 *)(local_c + 0x7c) = 0xffffffff;
  *(undefined *)(local_c + 0x142) = 1;
  return;
}

