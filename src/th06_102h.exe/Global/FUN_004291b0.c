
void FUN_004291b0(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float local_38;
  int local_18;
  float local_14;
  int local_10;
  
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    if (*(int *)(param_1 + 0x9c0 + local_10 * 0xc) != 0) {
      FUN_004241e5();
    }
  }
  local_18 = param_1 + 0xa28;
  for (local_10 = 0; local_10 < 0x50; local_10 = local_10 + 1) {
    if (*(short *)(local_18 + 0x14e) != 0) {
      sVar3 = *(short *)(local_18 + 0x150);
      if (sVar3 == 1) {
        if (*(short *)(local_18 + 0x14e) == 1) {
          if (((*(float *)(param_1 + 0xa1c) <= -100.0) || (0x27 < *(int *)(local_18 + 0x148))) ||
             (*(int *)(local_18 + 0x148) == *(int *)(local_18 + 0x140))) {
            if (*(float *)(local_18 + 0x138) < 10.0 != NAN(*(float *)(local_18 + 0x138))) {
              *(float *)(local_18 + 0x138) = *(float *)(local_18 + 0x138) + 0.3333333;
              fVar2 = *(float *)(local_18 + 0x128);
              fVar4 = *(float *)(local_18 + 300);
              fVar8 = (float10)FUN_0045bc34((double)(fVar2 * fVar2 + fVar4 * fVar4));
              *(float *)(local_18 + 0x128) = (fVar2 * *(float *)(local_18 + 0x138)) / (float)fVar8;
              *(float *)(local_18 + 300) = (fVar4 * *(float *)(local_18 + 0x138)) / (float)fVar8;
            }
          }
          else {
            fVar2 = *(float *)(param_1 + 0xa1c) - *(float *)(local_18 + 0x110);
            fVar4 = *(float *)(param_1 + 0xa20) - *(float *)(local_18 + 0x114);
            fVar8 = (float10)FUN_0045bc34((double)(fVar2 * fVar2 + fVar4 * fVar4));
            local_14 = (float)fVar8 / (*(float *)(local_18 + 0x138) / 4.0);
            if (local_14 < 1.0 != NAN(local_14)) {
              local_14 = 1.0;
            }
            fVar5 = fVar2 / local_14 + *(float *)(local_18 + 0x128);
            fVar4 = fVar4 / local_14 + *(float *)(local_18 + 300);
            fVar8 = (float10)FUN_0045bc34((double)(fVar5 * fVar5 + fVar4 * fVar4));
            fVar2 = (float)fVar8;
            local_38 = fVar2;
            if (10.0 < fVar2) {
              local_38 = 10.0;
            }
            *(float *)(local_18 + 0x138) = local_38;
            if (*(float *)(local_18 + 0x138) < 1.0 != NAN(*(float *)(local_18 + 0x138))) {
              *(undefined4 *)(local_18 + 0x138) = 0x3f800000;
            }
            *(float *)(local_18 + 0x128) = (fVar5 * *(float *)(local_18 + 0x138)) / fVar2;
            *(float *)(local_18 + 300) = (fVar4 * *(float *)(local_18 + 0x138)) / fVar2;
          }
        }
      }
      else if (sVar3 == 2) {
        if (*(short *)(local_18 + 0x14e) == 1) {
          *(float *)(local_18 + 300) = *(float *)(local_18 + 300) - 0.3;
        }
      }
      else if (sVar3 == 3) {
        if (*(int *)(param_1 + 0x9c0 + *(short *)(local_18 + 0x152) * 0xc) == 0x46) {
          *(undefined2 *)(local_18 + 0x8a) = 1;
        }
        else if (*(int *)(param_1 + 0x9c0 + *(short *)(local_18 + 0x152) * 0xc) == 1) {
          *(undefined2 *)(local_18 + 0x8a) = 1;
        }
        puVar1 = (undefined4 *)(param_1 + 0x4a0 + (*(short *)(local_18 + 0x154) + -1) * 0xc);
        *(undefined4 *)(local_18 + 0x110) = *puVar1;
        *(undefined4 *)(local_18 + 0x114) = puVar1[1];
        *(undefined4 *)(local_18 + 0x118) = puVar1[2];
        *(float *)(local_18 + 0x110) = *(float *)(local_18 + 0x110) + *(float *)(local_18 + 0x130);
        *(float *)(local_18 + 0x114) = *(float *)(local_18 + 0x114) / 2.0;
        *(undefined4 *)(local_18 + 0x118) = 0x3ee147ae;
        *(float *)(local_18 + 0x18) =
             (*(float *)(local_18 + 0x114) + *(float *)(local_18 + 0x114)) / 14.0;
        *(float *)(local_18 + 0x120) = *(float *)(local_18 + 0x114) + *(float *)(local_18 + 0x114);
      }
      pfVar6 = (float *)(local_18 + 0x110);
      *pfVar6 = DAT_006c6ec0 * *(float *)(local_18 + 0x128) + *pfVar6;
      *(float *)(local_18 + 0x90) = *pfVar6;
      pfVar6 = (float *)(local_18 + 0x114);
      *pfVar6 = DAT_006c6ec0 * *(float *)(local_18 + 300) + *pfVar6;
      *(float *)(local_18 + 0x94) = *pfVar6;
      *(undefined4 *)(local_18 + 0x98) = *(undefined4 *)(local_18 + 0x118);
      if ((*(short *)(local_18 + 0x150) != 3) &&
         (iVar7 = FUN_0041b5e1(*(undefined4 *)(local_18 + 0x110),*(undefined4 *)(local_18 + 0x114),
                               *(undefined4 *)(*(int *)(local_18 + 0xc0) + 0x30),
                               *(undefined4 *)(*(int *)(local_18 + 0xc0) + 0x2c)), iVar7 == 0)) {
        *(undefined2 *)(local_18 + 0x14e) = 0;
      }
      iVar7 = FUN_00433960();
      if (iVar7 != 0) {
        *(undefined2 *)(local_18 + 0x14e) = 0;
      }
      *(undefined4 *)(local_18 + 0x140) = *(undefined4 *)(local_18 + 0x148);
      FUN_00424285(local_18 + 0x148,local_18 + 0x144);
    }
    local_18 = local_18 + 0x158;
  }
  return;
}

