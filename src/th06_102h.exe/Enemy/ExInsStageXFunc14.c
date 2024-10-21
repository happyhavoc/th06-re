
void __cdecl th06::Enemy::ExInsStageXFunc14(Enemy *param_1,EclRawInstr *param_2)

{
  float fVar1;
  Laser *pLVar2;
  float10 fVar3;
  float10 fVar4;
  float local_24;
  int local_14;
  
  (param_1->current_context).var3 = 0;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    if ((param_1->lasers[local_14] != (Laser *)0x0) && (param_1->lasers[local_14]->in_use != 0)) {
      pLVar2 = param_1->lasers[local_14];
      local_24 = pLVar2->start_offset;
      fVar3 = (float10)fcos((float10)pLVar2->angle);
      fVar4 = (float10)fsin((float10)pLVar2->angle);
      for (; local_24 < pLVar2->end_offset; local_24 = local_24 + 48.0) {
        fVar1 = (pLVar2->pos).y;
        (param_1->bullet_props).position.x = (float)fVar3 * local_24 + (pLVar2->pos).x;
        (param_1->bullet_props).position.y = (float)fVar4 * local_24 + fVar1;
        (param_1->bullet_props).position.z = 0.0;
        BulletManager::SpawnBulletPattern(&g_BulletManager,&param_1->bullet_props);
      }
      (param_1->current_context).var3 = (param_1->current_context).var3 + 1;
    }
  }
  return;
}

