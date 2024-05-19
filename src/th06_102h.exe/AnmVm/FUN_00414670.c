
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * AnmVm::FUN_00414670(EnemyLaserShooter *laser_shooter)

{
  ushort uVar1;
  uint uVar2;
  AnmManager *pAVar3;
  int in_ECX;
  float fVar4;
  short local_10;
  AnmVm *local_c;
  int local_8;
  
  pAVar3 = g_AnmManager;
  local_c = (AnmVm *)(in_ECX + 0xec000);
  local_8 = 0;
  while( true ) {
    if (0x3f < local_8) {
      return local_c;
    }
    if (local_c[2].currentTimeInScript.current == 0) break;
    local_8 = local_8 + 1;
    local_c = (AnmVm *)(local_c[2].matrix.m[1] + 1);
  }
  uVar1 = laser_shooter->sprite;
  local_10 = uVar1 + 0x209;
  local_c->anmFileIndex = local_10;
  AnmManager::SetAndExecuteScript(pAVar3,local_c,pAVar3->scripts[(short)uVar1 + 0x209]);
  AnmManager::SetActiveSprite
            (g_AnmManager,local_c,(int)local_c->activeSpriteIndex + (int)(short)laser_shooter->color
            );
  pAVar3 = g_AnmManager;
  uVar2 = UINT_ARRAY_00476440[(short)laser_shooter->color];
  Initialize(local_c + 1);
  AnmManager::SetActiveSprite(pAVar3,local_c + 1,uVar2 + 0x28c);
  *(uint *)&local_c[1].flags = *(uint *)&local_c[1].flags | 4;
  local_c[2].rotation.x = (laser_shooter->position).x;
  local_c[2].rotation.y = (laser_shooter->position).y;
  local_c[2].rotation.z = (laser_shooter->position).z;
  *(ushort *)((int)local_c[2].matrix.m[0] + 0xe) = laser_shooter->color;
  local_c[2].currentTimeInScript.current = 1;
  local_c[2].angleVel.x = laser_shooter->angle;
  if (laser_shooter->type == 0) {
    fVar4 = Player::FUN_00428700(&g_Player,&laser_shooter->position);
    local_c[2].angleVel.x = fVar4 + local_c[2].angleVel.x;
  }
  *(undefined2 *)(local_c[2].matrix.m[0] + 3) = *(undefined2 *)&laser_shooter->field18_0x4c;
  local_c[2].matrix.m[0][2] = 0.0;
  local_c[2].matrix.m[0][1] = 0.0;
  local_c[2].matrix.m[0][0] = -NAN;
  local_c[2].angleVel.y = laser_shooter->start_offset;
  local_c[2].angleVel.z = laser_shooter->end_offset;
  local_c[2].scaleY = laser_shooter->start_length;
  local_c[2].scaleX = laser_shooter->width;
  local_c[2].scaleInterpFinalY = laser_shooter->speed;
  local_c[2].scaleInterpFinalX = (float)laser_shooter->start_time;
  local_c[2].uvScrollPos.y = (FLOAT)laser_shooter->duration;
  local_c[2].currentTimeInScript.previous = laser_shooter->stop_time;
  local_c[2].uvScrollPos.x = (FLOAT)laser_shooter->graze_delay;
  local_c[2].currentTimeInScript.subFrame = (float)laser_shooter->graze_distance;
  if (local_c[2].scaleInterpFinalX == 0.0) {
    *(undefined *)local_c[2].matrix.m[1] = 1;
    return local_c;
  }
  *(undefined *)local_c[2].matrix.m[1] = 0;
  return local_c;
}

