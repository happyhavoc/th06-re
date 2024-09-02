
int __thiscall
BulletManager::SpawnSingleBullet
          (BulletManager *this,EnemyBulletShooter *bulletProps,int bulletIdx1,int bulletIdx2,
          float angle)

{
  D3DXVECTOR3 *pDVar1;
  float fVar2;
  float10 fVar3;
  int iVar4;
  BulletTypeSprites *pBVar5;
  AnmVm *from;
  Bullet *pBVar6;
  AnmVm *to;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float bulletAngle;
  Bullet *bullet;
  int local_c;
  float bulletSpeed;
  
  bullet = this->bullets + this->next_bullet_index;
  for (local_c = 0; local_c < 0x280; local_c = local_c + 1) {
    this->next_bullet_index = this->next_bullet_index + 1;
    if (0x27f < this->next_bullet_index) {
      this->next_bullet_index = 0;
    }
    if (bullet->state == 0) break;
    bullet = bullet + 1;
    if (this->next_bullet_index == 0) {
      bullet = this->bullets;
    }
  }
  if (local_c < 0x280) {
    bulletAngle = 0.0;
    bulletSpeed = bulletProps->speed1 -
                  ((bulletProps->speed1 - bulletProps->speed2) * (float)bulletIdx2) /
                  (float)(int)(short)bulletProps->count2;
    switch(bulletProps->aim_mode) {
    case 0:
    case 1:
      if ((bulletProps->count1 & 1) == 0) {
        bulletAngle = bulletProps->angle2 * 0.5 + (float)(bulletIdx1 / 2) * bulletProps->angle2;
      }
      else {
        bulletAngle = (float)((bulletIdx1 + 1) / 2) * bulletProps->angle2;
      }
      bulletAngle = bulletAngle + 0.0;
      if ((bulletIdx1 & 1U) != 0) {
        bulletAngle = bulletAngle * -1.0;
      }
      if (bulletProps->aim_mode == 0) {
        bulletAngle = bulletAngle + angle;
      }
      bulletAngle = bulletAngle + bulletProps->angle1;
      break;
    case 2:
      bulletAngle = angle + 0.0;
    case 3:
      bulletAngle = (float)bulletIdx2 * bulletProps->angle2 + bulletProps->angle1 +
                    ((float)bulletIdx1 * 6.283185) / (float)(int)(short)bulletProps->count1 +
                    bulletAngle;
      break;
    case 4:
      bulletAngle = angle + 0.0;
    case 5:
      bulletAngle = ((float)bulletIdx1 * 6.283185) / (float)(int)(short)bulletProps->count1 +
                    3.141593 / (float)(int)(short)bulletProps->count1 + bulletAngle +
                    bulletProps->angle1;
      break;
    case 6:
      fVar9 = bulletProps->angle1;
      fVar2 = bulletProps->angle2;
      fVar8 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      bulletAngle = fVar8 * (fVar9 - fVar2) + bulletProps->angle2;
      break;
    case 7:
      fVar9 = bulletProps->speed1;
      fVar2 = bulletProps->speed2;
      fVar8 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      bulletSpeed = fVar8 * (fVar9 - fVar2) + bulletProps->speed2;
      bulletAngle = (float)bulletIdx2 * bulletProps->angle2 + bulletProps->angle1 +
                    ((float)bulletIdx1 * 6.283185) / (float)(int)(short)bulletProps->count1 + 0.0;
      break;
    case 8:
      fVar9 = bulletProps->angle1;
      fVar2 = bulletProps->angle2;
      fVar8 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      bulletAngle = fVar8 * (fVar9 - fVar2) + bulletProps->angle2;
      fVar9 = bulletProps->speed1;
      fVar2 = bulletProps->speed2;
      fVar8 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      bulletSpeed = fVar8 * (fVar9 - fVar2) + bulletProps->speed2;
    }
    bullet->state = 1;
    bullet->unk_5c2 = 1;
    bullet->speed = bulletSpeed;
    fVar9 = AddNormalizeAngle(bulletAngle,0.0);
    bullet->angle = fVar9;
    (bullet->pos).x = (bulletProps->position).x;
    (bullet->pos).y = (bulletProps->position).y;
    (bullet->pos).z = (bulletProps->position).z;
    (bullet->pos).z = 0.1;
    fVar3 = (float10)fcos((float10)bullet->angle);
    fVar7 = (float10)fsin((float10)bullet->angle);
    (bullet->velocity).x = (float)(fVar3 * (float10)bulletSpeed);
    (bullet->velocity).y = (float)(fVar7 * (float10)bulletSpeed);
    bullet->ex_flags = *(ushort *)&bulletProps->flags;
    bullet->color = bulletProps->color;
    pBVar5 = this->bullet_type_templates + (short)bulletProps->sprite;
    pBVar6 = bullet;
    for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
      (pBVar6->sprites).bulletSprite.rotation.x = (pBVar5->bulletSprite).rotation.x;
      pBVar5 = (BulletTypeSprites *)&(pBVar5->bulletSprite).rotation.y;
      pBVar6 = (Bullet *)&(pBVar6->sprites).bulletSprite.rotation.y;
    }
    from = &this->bullet_type_templates[(short)bulletProps->sprite].spriteSpawnEffectDonut;
    to = &(bullet->sprites).spriteSpawnEffectDonut;
    for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
      (to->rotation).x = (from->rotation).x;
      from = (AnmVm *)&(from->rotation).y;
      to = (AnmVm *)&(to->rotation).y;
    }
    pDVar1 = &this->bullet_type_templates[(short)bulletProps->sprite].grazeSize;
    (bullet->sprites).grazeSize.x = pDVar1->x;
    (bullet->sprites).grazeSize.y = pDVar1->y;
    (bullet->sprites).grazeSize.z = pDVar1->z;
    (bullet->sprites).unk_55c = this->bullet_type_templates[(short)bulletProps->sprite].unk_55c;
    (bullet->sprites).height = this->bullet_type_templates[(short)bulletProps->sprite].height;
    if ((bullet->ex_flags & 2) == 0) {
      if ((bullet->ex_flags & 4) == 0) {
        if ((bullet->ex_flags & 8) != 0) {
          from = &this->bullet_type_templates[(short)bulletProps->sprite].spriteSpawnEffectSlow;
          to = &(bullet->sprites).spriteSpawnEffectSlow;
          for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
            (to->rotation).x = (from->rotation).x;
            from = (AnmVm *)&(from->rotation).y;
            to = (AnmVm *)&(to->rotation).y;
          }
          fVar9 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
          if (fVar9 < 16.0 == (fVar9 == 16.0)) {
            fVar9 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
            if (fVar9 < 32.0 == (fVar9 == 32.0)) {
              AnmManager::SetActiveSprite
                        (g_AnmManager,&(bullet->sprites).spriteSpawnEffectSlow,
                         (int)(bullet->sprites).spriteSpawnEffectSlow.activeSpriteIndex +
                         (int)(short)bulletProps->color);
            }
            else if ((bullet->sprites).bulletSprite.anmFileIndex == 0x207) {
              AnmManager::SetActiveSprite
                        (g_AnmManager,&(bullet->sprites).spriteSpawnEffectSlow,
                         (int)(bullet->sprites).spriteSpawnEffectSlow.activeSpriteIndex + 1);
            }
            else {
              AnmManager::SetActiveSprite
                        (g_AnmManager,&(bullet->sprites).spriteSpawnEffectSlow,
                         (int)(bullet->sprites).spriteSpawnEffectSlow.activeSpriteIndex +
                         g_BulletSpriteOffset32Px[(short)bulletProps->color]);
            }
          }
          else {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(bullet->sprites).spriteSpawnEffectSlow,
                       (int)(bullet->sprites).spriteSpawnEffectSlow.activeSpriteIndex +
                       g_BulletSpriteOffset16Px[(short)bulletProps->color]);
          }
          bullet->state = 4;
        }
      }
      else {
        from = &this->bullet_type_templates[(short)bulletProps->sprite].spriteSpawnEffectNormal;
        to = &(bullet->sprites).spriteSpawnEffectNormal;
        for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
          (to->rotation).x = (from->rotation).x;
          from = (AnmVm *)&(from->rotation).y;
          to = (AnmVm *)&(to->rotation).y;
        }
        fVar9 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
        if (fVar9 < 16.0 == (fVar9 == 16.0)) {
          fVar9 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
          if (fVar9 < 32.0 == (fVar9 == 32.0)) {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(bullet->sprites).spriteSpawnEffectNormal,
                       (int)(bullet->sprites).spriteSpawnEffectNormal.activeSpriteIndex +
                       (int)(short)bulletProps->color);
          }
          else if ((bullet->sprites).bulletSprite.anmFileIndex == 0x207) {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(bullet->sprites).spriteSpawnEffectNormal,
                       (int)(bullet->sprites).spriteSpawnEffectNormal.activeSpriteIndex + 1);
          }
          else {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(bullet->sprites).spriteSpawnEffectNormal,
                       (int)(bullet->sprites).spriteSpawnEffectNormal.activeSpriteIndex +
                       g_BulletSpriteOffset32Px[(short)bulletProps->color]);
          }
        }
        else {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(bullet->sprites).spriteSpawnEffectNormal,
                     (int)(bullet->sprites).spriteSpawnEffectNormal.activeSpriteIndex +
                     g_BulletSpriteOffset16Px[(short)bulletProps->color]);
        }
        bullet->state = 3;
      }
    }
    else {
      from = &this->bullet_type_templates[(short)bulletProps->sprite].spriteSpawnEffectFast;
      to = &(bullet->sprites).spriteSpawnEffectFast;
      for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
        (to->rotation).x = (from->rotation).x;
        from = (AnmVm *)&(from->rotation).y;
        to = (AnmVm *)&(to->rotation).y;
      }
      fVar9 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
      if (fVar9 < 16.0 == (fVar9 == 16.0)) {
        fVar9 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
        if (fVar9 < 32.0 == (fVar9 == 32.0)) {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(bullet->sprites).spriteSpawnEffectFast,
                     (int)(bullet->sprites).spriteSpawnEffectFast.activeSpriteIndex +
                     (int)(short)bulletProps->color);
        }
        else if ((bullet->sprites).bulletSprite.anmFileIndex == 0x207) {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(bullet->sprites).spriteSpawnEffectFast,
                     (int)(bullet->sprites).spriteSpawnEffectFast.activeSpriteIndex + 1);
        }
        else {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(bullet->sprites).spriteSpawnEffectFast,
                     (int)(bullet->sprites).spriteSpawnEffectFast.activeSpriteIndex +
                     g_BulletSpriteOffset32Px[(short)bulletProps->color]);
        }
      }
      else {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(bullet->sprites).spriteSpawnEffectFast,
                   (int)(bullet->sprites).spriteSpawnEffectFast.activeSpriteIndex +
                   g_BulletSpriteOffset16Px[(short)bulletProps->color]);
      }
      bullet->state = 2;
    }
    AnmManager::SetActiveSprite
              (g_AnmManager,(AnmVm *)bullet,
               (int)(bullet->sprites).bulletSprite.activeSpriteIndex +
               (int)(short)bulletProps->color);
    fVar9 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
    if (fVar9 < 16.0 == (fVar9 == 16.0)) {
      fVar9 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
      if (fVar9 < 32.0 == (fVar9 == 32.0)) {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(bullet->sprites).spriteSpawnEffectDonut,
                   (int)(bullet->sprites).spriteSpawnEffectDonut.activeSpriteIndex +
                   (int)(short)bulletProps->color);
      }
      else if ((bullet->sprites).bulletSprite.anmFileIndex == 0x207) {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(bullet->sprites).spriteSpawnEffectDonut,
                   (int)(bullet->sprites).spriteSpawnEffectDonut.activeSpriteIndex + 1);
      }
      else {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(bullet->sprites).spriteSpawnEffectDonut,
                   (int)(bullet->sprites).spriteSpawnEffectDonut.activeSpriteIndex +
                   g_BulletSpriteOffset32Px[(short)bulletProps->color]);
      }
    }
    else {
      AnmManager::SetActiveSprite
                (g_AnmManager,&(bullet->sprites).spriteSpawnEffectDonut,
                 (int)(bullet->sprites).spriteSpawnEffectDonut.activeSpriteIndex +
                 g_BulletSpriteOffset16Px[(short)bulletProps->color]);
    }
    if ((bullet->ex_flags & 0x10) == 0) {
      if ((bullet->ex_flags & 0x20) != 0) {
        bullet->ex_5_float_0 = bulletProps->ex_floats[0];
        bullet->ex_5_float_1 = bulletProps->ex_floats[1];
        bullet->ex_5_int_0 = bulletProps->ex_ints[0];
      }
    }
    else {
      if (bulletProps->ex_floats[1] < -999.0 == (bulletProps->ex_floats[1] == -999.0)) {
        fVar9 = bulletProps->ex_floats[0];
        fVar3 = (float10)fcos((float10)bulletProps->ex_floats[1]);
        fVar7 = (float10)fsin((float10)bulletProps->ex_floats[1]);
        (bullet->ex_4_acceleration).x = (float)(fVar3 * (float10)fVar9);
        (bullet->ex_4_acceleration).y = (float)(fVar7 * (float10)fVar9);
      }
      else {
        fVar9 = bulletProps->ex_floats[0];
        fVar3 = (float10)fcos((float10)bulletAngle);
        fVar7 = (float10)fsin((float10)bulletAngle);
        (bullet->ex_4_acceleration).x = (float)(fVar3 * (float10)fVar9);
        (bullet->ex_4_acceleration).y = (float)(fVar7 * (float10)fVar9);
      }
      if (bulletProps->ex_ints[0] < 1) {
        bullet->ex_5_int_0 = 99999;
      }
      else {
        bullet->ex_5_int_0 = bulletProps->ex_ints[0];
      }
      (bullet->ex_4_acceleration).z = 0.0;
    }
    if ((bullet->ex_flags & 0x1c0) != 0) {
      bullet->dir_change__rotation_arg = bulletProps->ex_floats[0];
      if (bulletProps->ex_floats[1] < 0.0) {
        bullet->dir_change__speed_arg = bulletSpeed;
      }
      else {
        bullet->dir_change__speed_arg = bulletProps->ex_floats[1];
      }
      bullet->dir_change__interval = bulletProps->ex_ints[0];
      bullet->dir_change__max_times = bulletProps->ex_ints[1];
      bullet->dir_change__num_times = 0;
    }
    if ((bullet->ex_flags & 0xc00) != 0) {
      if (bulletProps->ex_floats[0] < 0.0) {
        bullet->dir_change__speed_arg = bulletSpeed;
      }
      else {
        bullet->dir_change__speed_arg = bulletProps->ex_floats[0];
      }
      bullet->dir_change__max_times = bulletProps->ex_ints[0];
      bullet->dir_change__num_times = 0;
    }
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  return iVar4;
}

