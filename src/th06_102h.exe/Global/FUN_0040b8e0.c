
void FUN_0040b8e0(Enemy *param_1,int insn)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  AnmVm *local_c;
  int local_8;
  
  local_c = (AnmVm *)g_BulletManager.bullets;
  iVar1 = *(int *)(insn + 0x10);
  EffectManager::FUN_0040ef50(&g_EffectManager,0xc,&param_1->position,1,0xffffffff);
  for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
    if ((*(short *)((int)local_c[5].matrix.m[3] + 2) != 0) &&
       (*(short *)((int)local_c[5].matrix.m[3] + 2) != 5)) {
      *(undefined2 *)((int)local_c[5].matrix.m[2] + 0xe) = 0xf;
      AnmManager::SetActiveSprite
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
        fVar4 = Rng::GetRandomF32ZeroToOne(&g_Rng);
        fVar3 = (float10)(fVar4 * 6.283185 - 3.141593);
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

