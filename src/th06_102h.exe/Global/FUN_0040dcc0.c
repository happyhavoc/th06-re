
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0040dcc0(Enemy *param_1,AnmRawInstr *param_2)

{
  float fVar1;
  void *pvVar2;
  float10 fVar3;
  float10 fVar4;
  float local_24;
  int local_14;
  
  (param_1->current_context).var3 = 0;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    if ((param_1->lasers[local_14] != (void *)0x0) &&
       (*(int *)((int)param_1->lasers[local_14] + 600) != 0)) {
      pvVar2 = param_1->lasers[local_14];
      local_24 = *(float *)((int)pvVar2 + 0x230);
      fVar3 = (float10)fcos((float10)*(float *)((int)pvVar2 + 0x22c));
      fVar4 = (float10)fsin((float10)*(float *)((int)pvVar2 + 0x22c));
      for (; local_24 < *(float *)((int)pvVar2 + 0x234); local_24 = local_24 + 48.0) {
        fVar1 = *(float *)((int)pvVar2 + 0x224);
        (param_1->bullet_props).position.x =
             (float)fVar3 * local_24 + *(float *)((int)pvVar2 + 0x220);
        (param_1->bullet_props).position.y = (float)fVar4 * local_24 + fVar1;
        (param_1->bullet_props).position.z = 0.0;
        BulletManager::SpawnBullet(&g_BulletManager,&param_1->bullet_props);
      }
      (param_1->current_context).var3 = (param_1->current_context).var3 + 1;
    }
  }
  return;
}

