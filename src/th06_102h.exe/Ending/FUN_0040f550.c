
void __thiscall Ending::FUN_0040f550(Ending *this)

{
  zRect local_14;
  
  local_14.left = 0.0;
  local_14.top = 0.0;
  local_14.right = 640.0;
  local_14.bottom = 480.0;
  switch(*(undefined4 *)&this->field_0x1168) {
  case 0:
    *(undefined4 *)&this->field_0x115c = 0;
    break;
  case 1:
    if (*(int *)&this->field_0x1160 < *(int *)&this->field_0x1164) {
      *(int *)&this->field_0x115c =
           (0xff - (*(int *)&this->field_0x1160 * 0xff) / *(int *)&this->field_0x1164) * 0x1000000;
      *(int *)&this->field_0x1160 = *(int *)&this->field_0x1160 + 1;
    }
    else {
      *(undefined4 *)&this->field_0x1168 = 0;
      *(undefined4 *)&this->field_0x115c = 0;
    }
    break;
  case 2:
    if (*(int *)&this->field_0x1160 < *(int *)&this->field_0x1164) {
      *(int *)&this->field_0x115c =
           (*(int *)&this->field_0x1160 * 0xff) / *(int *)&this->field_0x1164 << 0x18;
      *(int *)&this->field_0x1160 = *(int *)&this->field_0x1160 + 1;
    }
    else {
      *(undefined4 *)&this->field_0x115c = 0xff000000;
    }
    break;
  case 3:
    if (*(int *)&this->field_0x1160 < *(int *)&this->field_0x1164) {
      *(uint *)&this->field_0x115c =
           (0xff - (*(int *)&this->field_0x1160 * 0xff) / *(int *)&this->field_0x1164) * 0x1000000 |
           0xffffff;
      *(int *)&this->field_0x1160 = *(int *)&this->field_0x1160 + 1;
    }
    else {
      *(undefined4 *)&this->field_0x1168 = 0;
      *(undefined4 *)&this->field_0x115c = 0;
    }
    break;
  case 4:
    if (*(int *)&this->field_0x1160 < *(int *)&this->field_0x1164) {
      *(uint *)&this->field_0x115c =
           (*(int *)&this->field_0x1160 * 0xff) / *(int *)&this->field_0x1164 << 0x18 | 0xffffff;
      *(int *)&this->field_0x1160 = *(int *)&this->field_0x1160 + 1;
    }
    else {
      *(undefined4 *)&this->field_0x115c = 0xffffffff;
    }
  }
  if ((*(uint *)&this->field_0x115c & 0xff000000) != 0) {
    DrawSquare(&local_14,*(D3DCOLOR *)&this->field_0x115c);
  }
  return;
}

