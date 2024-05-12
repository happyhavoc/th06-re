
void __cdecl FUN_0040daa0(Enemy *param_1,AnmRawInstr *param_2)

{
  D3DXVECTOR3 *pDVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if ((param_1->lasers[local_8] != (void *)0x0) &&
       (*(int *)((int)param_1->lasers[local_8] + 600) != 0)) {
      (param_1->bullet_props).position.x = 64.0;
      (param_1->bullet_props).position.y = 0.0;
      (param_1->bullet_props).position.z = 0.0;
      Rotate(&(param_1->bullet_props).position,&(param_1->bullet_props).position,
             *(float *)((int)param_1->lasers[local_8] + 0x22c));
      pDVar1 = &(param_1->bullet_props).position;
      pDVar1->x = pDVar1->x + (param_1->position).x;
      (param_1->bullet_props).position.y =
           (param_1->bullet_props).position.y + (param_1->position).y;
      (param_1->bullet_props).position.z =
           (param_1->bullet_props).position.z + (param_1->position).z;
      BulletManager::SpawnBullet(&g_BulletManager,&param_1->bullet_props);
    }
  }
  return;
}

