
void Player::FUN_00429820(Player *param_1,undefined4 param_2)

{
  int local_14;
  PlayerBullet *local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_10 = param_1->bullets;
  local_c = 0;
  do {
    if (0x4f < local_c) {
      return;
    }
    if (local_10->field11_0x14e == 0) {
      do {
        if (param_1->field24_0x9e3 == 0) {
          local_14 = (*(code *)param_1->field36_0x75c0)(param_1,local_10,local_8,param_2);
        }
        else {
          local_14 = (*(code *)param_1->field37_0x75c4)(param_1,local_10,local_8,param_2);
        }
        if (-1 < local_14) {
          (local_10->field0_0x0).pos.x = (local_10->field1_0x110).x;
          (local_10->field0_0x0).pos.y = (local_10->field1_0x110).y;
          (local_10->field0_0x0).pos.z = 0.495;
          local_10->field11_0x14e = 1;
        }
        if (local_14 == -2) {
          return;
        }
        if (0 < local_14) {
          return;
        }
        local_8 = local_8 + 1;
      } while (local_14 == -1);
    }
    local_c = local_c + 1;
    local_10 = local_10 + 1;
  } while( true );
}

