
void th06::EnemyEclInstr::ExInsStage6Func8(Enemy *param_1,EclRawInstr *param_2)

{
  int iVar1;
  EnemyBulletShooter *pEVar2;
  float fVar2;
  Bullet *bullets;
  int i;
  int num_bullets_changed;
  EnemyBulletShooter new_spawned_bullet;
  
  num_bullets_changed = 0;
  bullets = g_BulletManager.bullets;
  pEVar2 = &new_spawned_bullet;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    pEVar2->sprite = 0;
    pEVar2->spriteOffset = 0;
    pEVar2 = (EnemyBulletShooter *)&pEVar2->position;
  }
  for (i = 0; i < 640; i = i + 1) {
    if ((((bullets->state != 0) && (bullets->state != 5)) &&
        ((bullets->sprites).spriteBullet.sprite != (AnmLoadedSprite *)0x0)) &&
       (30.0 <= ((bullets->sprites).spriteBullet.sprite)->heightPx)) {
      new_spawned_bullet.position.x = (bullets->pos).x;
      new_spawned_bullet.position.y = (bullets->pos).y;
      new_spawned_bullet.position.z = (bullets->pos).z;
      new_spawned_bullet.sprite = 3;
      new_spawned_bullet.spriteOffset = 1;
      fVar2 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      new_spawned_bullet.angle1 = fVar2 * 6.283185 - 3.141593;
      new_spawned_bullet.speed1 = 0.0;
      new_spawned_bullet.count1 = 1;
      new_spawned_bullet.count2 = 1;
      new_spawned_bullet.flags = 8;
      new_spawned_bullet.aim_mode = 1;
      BulletManager::SpawnBulletPattern(&g_BulletManager,&new_spawned_bullet);
      num_bullets_changed = num_bullets_changed + 1;
    }
    bullets = bullets + 1;
  }
  (param_1->current_context).var3 = num_bullets_changed;
  return;
}

