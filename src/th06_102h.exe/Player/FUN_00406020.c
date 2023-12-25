
void Player::FUN_00406020(Player *param_1)

{
  float fVar1;
  long local_38;
  long local_2c;
  zRect local_18;
  long local_8;
  
  local_18.left = 32.0;
  local_18.top = 16.0;
  local_18.right = 416.0;
  local_18.bottom = 464.0;
  if ((param_1->inner).field2_0x8.current < 0x3c) {
    fVar1 = (((float)(param_1->inner).field2_0x8.current + (param_1->inner).field2_0x8.subFrame) *
            176.0) / 60.0;
    if (fVar1 < 176.0) {
      local_2c = __ftol2((double)fVar1);
    }
    else {
      local_2c = 0xb0;
    }
    local_8 = local_2c;
  }
  else if ((param_1->inner).field2_0x8.current < (param_1->inner).field1_0x4 + -0x3c) {
    local_8 = 0xb0;
  }
  else {
    fVar1 = (((float)(param_1->inner).field1_0x4 -
             ((float)(param_1->inner).field2_0x8.current + (param_1->inner).field2_0x8.subFrame)) *
            176.0) / 60.0;
    if (fVar1 < 0.0 == NAN(fVar1)) {
      local_38 = __ftol2((double)fVar1);
    }
    else {
      local_38 = 0;
    }
    local_8 = local_38;
  }
  DrawSquare(&local_18,local_8 << 0x18);
  return;
}

