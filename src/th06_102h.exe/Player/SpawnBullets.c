
void th06::Player::SpawnBullets(Player *param_1,u32 timer)

{
  FireBulletResult local_14;
  PlayerBullet *curBullet;
  int local_c;
  u32 idx;
  
  idx = 0;
  curBullet = param_1->bullets;
  local_c = 0;
  do {
    if (0x4f < local_c) {
      return;
    }
    if (curBullet->bulletState == 0) {
      do {
        if (param_1->isFocus == 0) {
          local_14 = (*param_1->fireBulletCallback)(param_1,curBullet,idx,timer);
        }
        else {
          local_14 = (*param_1->fireBulletFocusCallback)(param_1,curBullet,idx,timer);
        }
        if (SPAWN_MORE < local_14) {
          (curBullet->vm).pos.x = (curBullet->position).x;
          (curBullet->vm).pos.y = (curBullet->position).y;
          (curBullet->vm).pos.z = 0.495;
          curBullet->bulletState = 1;
        }
        if (local_14 == STOP_SPAWNING) {
          return;
        }
        if (UNK < local_14) {
          return;
        }
        idx = idx + 1;
      } while (local_14 == SPAWN_MORE);
    }
    local_c = local_c + 1;
    curBullet = curBullet + 1;
  } while( true );
}

