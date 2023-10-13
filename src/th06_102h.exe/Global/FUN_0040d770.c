
void FUN_0040d770(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  AnmVm *local_64;
  int local_60;
  undefined4 local_5c [22];
  
  local_64 = (AnmVm *)&DAT_005ab5f8;
  puVar3 = local_5c;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_0041e820();
  FUN_0040ef50((int *)&AnmRelatedHugeStruct_00487fe0,0xc,(float *)(param_1 + 0xc6c),1,0xffffffff);
  for (local_60 = 0; local_60 < 0x280; local_60 = local_60 + 1) {
    if ((((*(short *)((int)local_64[5].matrix.m[3] + 2) != 0) &&
         (*(short *)((int)local_64[5].matrix.m[3] + 2) != 5)) &&
        (local_64->sprite != (AnmLoadedSprite *)0x0)) &&
       ((fVar1 = local_64->sprite->heightPx, fVar1 < 30.0 != NAN(fVar1) &&
        (fVar1 = local_64[5].currentTimeInScript.subFrame, NAN(fVar1) != (fVar1 == 0.0))))) {
      *(ushort *)(local_64[5].matrix.m[2] + 3) = *(ushort *)(local_64[5].matrix.m[2] + 3) | 0x10;
      *(undefined2 *)((int)local_64[5].matrix.m[2] + 0xe) = 2;
      AnmManager::FUN_004323a0
                (g_AnmManager,local_64,
                 (int)local_64->anotherSpriteNumber +
                 (int)*(short *)((int)local_64[5].matrix.m[2] + 0xe));
      local_64[5].currentTimeInScript.subFrame = 0.01;
      local_64[5].matrix.m[1][2] = 0.0;
      local_64[5].matrix.m[1][1] = 0.0;
      local_64[5].matrix.m[1][0] = -NAN;
      local_64[5].matrix.m[1][3] = 1.681558e-43;
      fVar4 = (float10)FUN_0041e820();
      fVar5 = (float10)(float)(fVar4 * (float10)6.283185 - (float10)3.141593);
      fVar4 = (float10)fcos(fVar5);
      fVar5 = (float10)fsin(fVar5);
      local_64[5].uvScrollPos.x = (float)(fVar4 * (float10)0.01);
      local_64[5].uvScrollPos.y = (float)(fVar5 * (float10)0.01);
    }
    local_64 = (AnmVm *)(local_64[5].matrix.m[3] + 2);
  }
  return;
}

