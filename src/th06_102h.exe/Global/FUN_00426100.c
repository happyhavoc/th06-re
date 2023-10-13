
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00426100(int param_1,AnmVm *param_2,int param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  short sVar2;
  AnmManager *this;
  short *psVar3;
  float *pfVar4;
  float10 fVar5;
  
  for (; param_5[1] <= (int)(uint)_DAT_0069d4b0; param_5 = param_5 + 3) {
  }
  psVar3 = (short *)(param_3 * 0x24 + param_5[2]);
  if (*(char *)((int)psVar3 + 0x1f) == '\x03') {
    sVar2 = psVar3[1];
    if (*(int *)(param_1 + 0x9c0 + sVar2 * 0xc) != 0) {
LAB_00426400:
      if (*param_5 + -1 <= param_3) {
        return 0xfffffffe;
      }
      return 0xffffffff;
    }
    puVar1 = (undefined4 *)(param_1 + 0x9b8 + sVar2 * 0xc);
    puVar1[2] = (int)*psVar3;
    puVar1[1] = 0;
    *puVar1 = 0xfffffc19;
    *(short *)((int)param_2[1].matrix.m[0] + 6) = sVar2;
    *(ushort *)(param_2[1].matrix.m[0] + 2) = (ushort)*(byte *)(psVar3 + 0xf);
    param_2[1].scaleInterpFinalY = *(float *)(psVar3 + 2);
    param_2[1].scaleInterpFinalX = *(float *)(psVar3 + 4);
  }
  else if (param_4 % (int)*psVar3 != (int)psVar3[1]) goto LAB_00426400;
  this = g_AnmManager;
  sVar2 = psVar3[0x10];
  param_2->anmFileIndex = sVar2;
  AnmManager::SetAndExecuteScript(this,param_2,this->scripts[sVar2]);
  if (*(char *)(psVar3 + 0xf) == '\0') {
    param_2[1].rotation.x = *(float *)(param_1 + 0x440);
    param_2[1].rotation.y = *(float *)(param_1 + 0x444);
    param_2[1].rotation.z = *(float *)(param_1 + 0x448);
  }
  else {
    pfVar4 = (float *)(param_1 + 0x4a0 + (*(byte *)(psVar3 + 0xf) - 1) * 0xc);
    param_2[1].rotation.x = *pfVar4;
    param_2[1].rotation.y = pfVar4[1];
    param_2[1].rotation.z = pfVar4[2];
  }
  param_2[1].rotation.x = param_2[1].rotation.x + *(float *)(psVar3 + 2);
  pfVar4 = &param_2[1].rotation.y;
  *pfVar4 = *pfVar4 + *(float *)(psVar3 + 4);
  param_2[1].rotation.z = 0.495;
  param_2[1].angleVel.x = *(float *)(psVar3 + 6);
  param_2[1].angleVel.y = *(float *)(psVar3 + 8);
  param_2[1].angleVel.z = 1.0;
  param_2[1].uvScrollPos.y = *(FLOAT *)(psVar3 + 10);
  param_2[1].uvScrollPos.x = *(FLOAT *)(psVar3 + 0xc);
  fVar5 = (float10)FUN_0045bda4((double)*(float *)(psVar3 + 10));
  param_2[1].scaleY = (float)fVar5 * *(float *)(psVar3 + 0xc);
  fVar5 = (float10)FUN_0045bcf4((double)*(float *)(psVar3 + 10));
  param_2[1].scaleX = (float)fVar5 * *(float *)(psVar3 + 0xc);
  param_2[1].currentTimeInScript.current = 0;
  param_2[1].currentTimeInScript.subFrame = 0.0;
  param_2[1].currentTimeInScript.previous = -999;
  *(ushort *)(param_2[1].matrix.m[0] + 1) = (ushort)*(byte *)((int)psVar3 + 0x1f);
  *(short *)param_2[1].matrix.m[0] = psVar3[0xe];
  if (-1 < psVar3[0x11]) {
    FUN_004311e0((int)psVar3[0x11]);
  }
  return (uint)(*param_5 + -1 <= param_3);
}

