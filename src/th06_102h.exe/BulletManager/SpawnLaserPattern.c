
Laser * __thiscall
BulletManager::SpawnLaserPattern(BulletManager *this,EnemyLaserShooter *laser_shooter)

{
  ushort uVar1;
  uint uVar2;
  AnmManager *pAVar3;
  float fVar4;
  short local_10;
  Laser *laser;
  int local_8;
  
  pAVar3 = g_AnmManager;
  laser = this->lasers;
  local_8 = 0;
  while( true ) {
    if (0x3f < local_8) {
      return laser;
    }
    if (laser->in_use == 0) break;
    local_8 = local_8 + 1;
    laser = laser + 1;
  }
  uVar1 = laser_shooter->sprite;
  local_10 = uVar1 + 0x209;
  (laser->vm0).anmFileIndex = local_10;
  AnmManager::SetAndExecuteScript(pAVar3,&laser->vm0,pAVar3->scripts[(short)uVar1 + 0x209]);
  AnmManager::SetActiveSprite
            (g_AnmManager,&laser->vm0,
             (int)(laser->vm0).activeSpriteIndex + (int)(short)laser_shooter->color);
  pAVar3 = g_AnmManager;
  uVar2 = g_BulletSpriteOffset16Px[(short)laser_shooter->color];
  AnmVm::Initialize(&laser->vm1);
  AnmManager::SetActiveSprite(pAVar3,&laser->vm1,uVar2 + 0x28c);
  (laser->vm1).flags = (laser->vm1).flags | AnmVmFlags_2;
  (laser->pos).x = (laser_shooter->position).x;
  (laser->pos).y = (laser_shooter->position).y;
  (laser->pos).z = (laser_shooter->position).z;
  laser->color = laser_shooter->color;
  laser->in_use = 1;
  laser->angle = laser_shooter->angle;
  if (laser_shooter->type == 0) {
    fVar4 = Player::AngleToPlayer(&g_Player,&laser_shooter->position);
    laser->angle = fVar4 + laser->angle;
  }
  laser->flags = *(short *)&laser_shooter->flags;
  (laser->timer).current = 0;
  (laser->timer).subFrame = 0.0;
  (laser->timer).previous = -999;
  laser->start_offset = laser_shooter->start_offset;
  laser->end_offset = laser_shooter->end_offset;
  laser->start_length = laser_shooter->start_length;
  laser->width = laser_shooter->width;
  laser->speed = laser_shooter->speed;
  laser->start_time = laser_shooter->start_time;
  laser->duration = laser_shooter->duration;
  laser->end_time = laser_shooter->stop_time;
  laser->graze_delay = laser_shooter->graze_delay;
  laser->graze_interval = laser_shooter->graze_distance;
  if (laser->start_time == 0) {
    laser->state = 1;
    return laser;
  }
  laser->state = 0;
  return laser;
}

