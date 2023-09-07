
void FUN_00405c10(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int local_c;
  int local_8;
  
  FUN_00406020(param_1);
  local_8 = param_1 + 0x76e4;
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    if (*(int *)(param_1 + 0x75e4 + local_c * 4) != 0) {
      pfVar1 = (float *)(param_1 + 0x7624 + local_c * 0xc);
      fVar2 = pfVar1[2];
      fVar3 = pfVar1[1];
      *(float *)(local_8 + 0x90) = *pfVar1 + *(float *)(local_8 + 0xe4);
      *(float *)(local_8 + 0x94) = fVar3 + *(float *)(local_8 + 0xe8);
      *(float *)(local_8 + 0x98) = fVar2 + *(float *)(local_8 + 0xec);
      *(float *)(local_8 + 0x90) = VIEWPORT_X + *(float *)(local_8 + 0x90);
      *(float *)(local_8 + 0x94) = VIEWPORT_Y + *(float *)(local_8 + 0x94);
      *(undefined4 *)(local_8 + 0x98) = 0;
      FUN_00432ad0(g_VeryBigStruct,local_8);
      pfVar1 = (float *)(param_1 + 0x7624 + local_c * 0xc);
      fVar2 = pfVar1[2];
      fVar3 = pfVar1[1];
      *(float *)(local_8 + 0x1a0) = *pfVar1 + *(float *)(local_8 + 500);
      *(float *)(local_8 + 0x1a4) = fVar3 + *(float *)(local_8 + 0x1f8);
      *(float *)(local_8 + 0x1a8) = fVar2 + *(float *)(local_8 + 0x1fc);
      *(float *)(local_8 + 0x1a0) = VIEWPORT_X + *(float *)(local_8 + 0x1a0);
      *(float *)(local_8 + 0x1a4) = VIEWPORT_Y + *(float *)(local_8 + 0x1a4);
      *(undefined4 *)(local_8 + 0x1a8) = 0;
      FUN_00432ad0(g_VeryBigStruct,local_8 + 0x110);
      pfVar1 = (float *)(param_1 + 0x7624 + local_c * 0xc);
      fVar2 = pfVar1[2];
      fVar3 = pfVar1[1];
      *(float *)(local_8 + 0x2b0) = *pfVar1 + *(float *)(local_8 + 0x304);
      *(float *)(local_8 + 0x2b4) = fVar3 + *(float *)(local_8 + 0x308);
      *(float *)(local_8 + 0x2b8) = fVar2 + *(float *)(local_8 + 0x30c);
      *(float *)(local_8 + 0x2b0) = VIEWPORT_X + *(float *)(local_8 + 0x2b0);
      *(float *)(local_8 + 0x2b4) = VIEWPORT_Y + *(float *)(local_8 + 0x2b4);
      *(undefined4 *)(local_8 + 0x2b8) = 0;
      FUN_00432ad0(g_VeryBigStruct,local_8 + 0x220);
      pfVar1 = (float *)(param_1 + 0x7624 + local_c * 0xc);
      fVar2 = pfVar1[2];
      fVar3 = pfVar1[1];
      *(float *)(local_8 + 0x3c0) = *pfVar1 + *(float *)(local_8 + 0x414);
      *(float *)(local_8 + 0x3c4) = fVar3 + *(float *)(local_8 + 0x418);
      *(float *)(local_8 + 0x3c8) = fVar2 + *(float *)(local_8 + 0x41c);
      *(float *)(local_8 + 0x3c0) = VIEWPORT_X + *(float *)(local_8 + 0x3c0);
      *(float *)(local_8 + 0x3c4) = VIEWPORT_Y + *(float *)(local_8 + 0x3c4);
      *(undefined4 *)(local_8 + 0x3c8) = 0;
      FUN_00432ad0(g_VeryBigStruct,local_8 + 0x330);
    }
    local_8 = local_8 + 0x440;
  }
  return;
}

