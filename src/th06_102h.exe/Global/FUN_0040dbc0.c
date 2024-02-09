
void FUN_0040dbc0(int param_1,int param_2)

{
  float10 fVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  EnemyBulletShooter *pEVar5;
  float10 fVar6;
  float local_68;
  EnemyBulletShooter local_64;
  int local_8;
  
  puVar4 = (undefined4 *)(param_1 + 0xd00);
  pEVar5 = &local_64;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    uVar2 = *(undefined2 *)((int)puVar4 + 2);
    pEVar5->sprite = *(undefined2 *)puVar4;
    pEVar5->color = uVar2;
    puVar4 = puVar4 + 1;
    pEVar5 = (EnemyBulletShooter *)&pEVar5->position;
  }
  iVar3 = *(int *)(param_2 + 0x10);
  local_68 = *(float *)(param_1 + 0x9bc);
  if (*(int *)(param_1 + 0x9b0) % 6 == 0) {
    for (local_8 = 0; local_8 < iVar3; local_8 = local_8 + 1) {
      fVar1 = (float10)fcos((float10)local_68);
      fVar6 = (float10)fsin((float10)local_68);
      local_64.position.x = (float)(fVar1 * (float10)*(float *)(param_1 + 0x9c0)) + 192.0;
      local_64.position.y = (float)(fVar6 * (float10)*(float *)(param_1 + 0x9c0)) + 224.0;
      local_64.angle1 = local_68 + *(float *)(param_1 + 0x9b8);
      BulletManager::FUN_004145c0(&g_BulletManager,&local_64);
      local_68 = 6.283185 / (float)iVar3 + local_68;
    }
  }
  *(int *)(param_1 + 0x9b0) = *(int *)(param_1 + 0x9b0) + 1;
  return;
}

