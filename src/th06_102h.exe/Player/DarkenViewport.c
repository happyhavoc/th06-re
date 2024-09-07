
void th06::Player::DarkenViewport(Player *player)

{
  long local_38;
  long local_2c;
  ZunRect viewport;
  long local_8;
  float darkeningTimeLeft;
  
  viewport.left = 32.0;
  viewport.top = 16.0;
  viewport.right = 416.0;
  viewport.bottom = 464.0;
  if ((player->bombInfo).bombTimer.current < 60) {
    darkeningTimeLeft =
         (((float)(player->bombInfo).bombTimer.current + (player->bombInfo).bombTimer.subFrame) *
         176.0) / 60.0;
    if (darkeningTimeLeft < 176.0) {
      local_2c = __ftol2(darkeningTimeLeft);
    }
    else {
      local_2c = 176;
    }
    local_8 = local_2c;
  }
  else if ((player->bombInfo).bombTimer.current < (player->bombInfo).bombDuration + -60) {
    local_8 = 176;
  }
  else {
    darkeningTimeLeft =
         (((float)(player->bombInfo).bombDuration -
          ((float)(player->bombInfo).bombTimer.current + (player->bombInfo).bombTimer.subFrame)) *
         176.0) / 60.0;
    if (darkeningTimeLeft < 0.0 == NAN(darkeningTimeLeft)) {
      local_38 = __ftol2(darkeningTimeLeft);
    }
    else {
      local_38 = 0;
    }
    local_8 = local_38;
  }
  ScreenEffect::DrawSquare(&viewport,local_8 << 24);
  return;
}

