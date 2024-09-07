
void __thiscall th06::Ending::FadingEffect(Ending *this)

{
  ZunRect ending_rect;
  
  ending_rect.left = 0.0;
  ending_rect.top = 0.0;
  ending_rect.right = 640.0;
  ending_rect.bottom = 480.0;
  switch(this->fadeType) {
  case 0:
    this->unk_d3dcolor = 0;
    break;
  case 1:
    if (this->timeFading < this->fadeFrames) {
      this->unk_d3dcolor = (0xff - (this->timeFading * 0xff) / this->fadeFrames) * 0x1000000;
      this->timeFading = this->timeFading + 1;
    }
    else {
      this->fadeType = 0;
      this->unk_d3dcolor = 0;
    }
    break;
  case 2:
    if (this->timeFading < this->fadeFrames) {
      this->unk_d3dcolor = (this->timeFading * 0xff) / this->fadeFrames << 0x18;
      this->timeFading = this->timeFading + 1;
    }
    else {
      this->unk_d3dcolor = 0xff000000;
    }
    break;
  case 3:
                    /* Fade in */
    if (this->timeFading < this->fadeFrames) {
      this->unk_d3dcolor =
           (0xff - (this->timeFading * 0xff) / this->fadeFrames) * 0x1000000 | 0xffffff;
      this->timeFading = this->timeFading + 1;
    }
    else {
      this->fadeType = 0;
      this->unk_d3dcolor = 0;
    }
    break;
  case 4:
                    /* Fade out */
    if (this->timeFading < this->fadeFrames) {
      this->unk_d3dcolor = (this->timeFading * 0xff) / this->fadeFrames << 0x18 | 0xffffff;
      this->timeFading = this->timeFading + 1;
    }
    else {
      this->unk_d3dcolor = 0xffffffff;
    }
  }
  if ((this->unk_d3dcolor & 0xff000000) != 0) {
    ScreenEffect::DrawSquare(&ending_rect,this->unk_d3dcolor);
  }
  return;
}

