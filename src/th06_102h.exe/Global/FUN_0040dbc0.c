
void __cdecl FUN_0040dbc0(Enemy *param_1,AnmRawInstr *param_2)

{
  int iVar5;
  EnemyBulletShooter *bullet_props;
  EnemyBulletShooter *pEVar6;
  float10 fVar7;
  float local_68;
  EnemyBulletShooter local_64;
  int local_8;
  float fVar2;
  float10 fVar3;
  uint uVar1;
  ushort uVar4;
  
  bullet_props = &param_1->bullet_props;
  pEVar6 = &local_64;
  for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
    uVar4 = bullet_props->color;
    pEVar6->sprite = bullet_props->sprite;
    pEVar6->color = uVar4;
    bullet_props = (EnemyBulletShooter *)&bullet_props->position;
    pEVar6 = (EnemyBulletShooter *)&pEVar6->position;
  }
  uVar1 = param_2->args[3];
  local_68 = (param_1->current_context).float2;
  if ((param_1->current_context).var3 % 6 == 0) {
    for (local_8 = 0; local_8 < (int)uVar1; local_8 = local_8 + 1) {
      fVar2 = (param_1->current_context).float3;
      fVar3 = (float10)fcos((float10)local_68);
      fVar7 = (float10)fsin((float10)local_68);
      local_64.position.x = (float)(fVar3 * (float10)fVar2) + 192.0;
      local_64.position.y = (float)(fVar7 * (float10)fVar2) + 224.0;
      local_64.angle1 = local_68 + (param_1->current_context).float1;
      BulletManager::SpawnBullet(&g_BulletManager,&local_64);
      local_68 = 6.283185 / (float)uVar1 + local_68;
    }
  }
  (param_1->current_context).var3 = (param_1->current_context).var3 + 1;
  return;
}

