
void FUN_0040b8e0(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  AnmVm *local_c;
  int local_8;
  
  local_c = (AnmVm *)&DAT_005ab5f8;
  iVar1 = *(int *)(param_2 + 0x10);
  FUN_0040ef50((int *)&AnmRelatedHugeStruct_00487fe0,0xc,(float *)(param_1 + 0xc6c),1,0xffffffff);
  for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
    if ((*(short *)((int)local_c[5].matrix.m[3] + 2) != 0) &&
       (*(short *)((int)local_c[5].matrix.m[3] + 2) != 5)) {
      *(undefined2 *)((int)local_c[5].matrix.m[2] + 0xe) = 0xf;
      AnmManager::FUN_004323a0
                (g_AnmManager,local_c,
                 (int)local_c->anotherSpriteNumber +
                 (int)*(short *)((int)local_c[5].matrix.m[2] + 0xe));
      if (iVar1 == 0) {
        local_c[5].currentTimeInScript.subFrame = 0.0;
        local_c[5].scaleX = 0.0;
        local_c[5].scaleInterpFinalY = 0.0;
        local_c[5].scaleInterpFinalX = 0.0;
      }
      else if (iVar1 == 1) {
        *(ushort *)(local_c[5].matrix.m[2] + 3) = *(ushort *)(local_c[5].matrix.m[2] + 3) | 0x10;
        local_c[5].matrix.m[1][3] = 3.082857e-43;
        local_c[5].matrix.m[1][2] = 0.0;
        local_c[5].matrix.m[1][1] = 0.0;
        local_c[5].matrix.m[1][0] = -NAN;
        fVar2 = (float10)FUN_0041e820();
        fVar3 = (float10)(float)(fVar2 * (float10)6.283185 - (float10)3.141593);
        fVar2 = (float10)fcos(fVar3);
        fVar3 = (float10)fsin(fVar3);
        local_c[5].uvScrollPos.x = (float)(fVar2 * (float10)0.01);
        local_c[5].uvScrollPos.y = (float)(fVar3 * (float10)0.01);
      }
    }
    local_c = (AnmVm *)(local_c[5].matrix.m[3] + 2);
  }
  return;
}

