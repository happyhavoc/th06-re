
int __thiscall BulletManager::FUN_00414360(BulletManager *this,int param_1,int param_2)

{
  float10 fVar1;
  float10 fVar2;
  float local_34;
  Laser *local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  int local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 2000;
  local_10 = 0;
  local_1c = 0x5ab5f8;
  for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
    if (*(short *)(local_1c + 0x5be) != 0) {
      if (param_2 != 0) {
        FUN_0041f290(local_1c + 0x560,6,1);
      }
      AsciiManager::CreatePopup1
                (&g_AsciiManager,(D3DXVECTOR3 *)(local_1c + 0x560),local_8,
                 ((local_8 < param_1) - 1 & 0xffffff01) - 1);
      local_c = local_c + local_8;
      local_10 = local_10 + 1;
      local_8 = local_8 + 10;
      if (param_1 < local_8) {
        local_8 = param_1;
      }
      *(undefined2 *)(local_1c + 0x5be) = 5;
    }
    local_1c = local_1c + 0x5c4;
  }
  local_2c = this->lasers;
  for (local_14 = 0; local_14 < 0x40; local_14 = local_14 + 1) {
    if (local_2c->in_use != 0) {
      if (local_2c->state < 2) {
        local_2c->state = 2;
        (local_2c->timer).current = 0;
        (local_2c->timer).subFrame = 0.0;
        (local_2c->timer).previous = -999;
        if (param_2 != 0) {
          FUN_0041f290(&local_2c->pos,6,1);
          local_34 = local_2c->start_offset;
          fVar1 = (float10)fcos((float10)local_2c->angle);
          fVar2 = (float10)fsin((float10)local_2c->angle);
          local_18 = (float)fVar2;
          for (; local_34 < local_2c->end_offset; local_34 = local_34 + 32.0) {
            local_28 = (float)fVar1 * local_34 + (local_2c->pos).x;
            local_24 = local_18 * local_34 + (local_2c->pos).y;
            local_20 = 0;
            FUN_0041f290(&local_28,6,1);
          }
        }
      }
      local_2c->graze_interval = 0;
    }
    local_2c = local_2c + 1;
  }
  g_GameManager.score = g_GameManager.score + local_c;
  if (local_c != 0) {
    FUN_0041735a(local_c);
  }
  return local_c;
}

