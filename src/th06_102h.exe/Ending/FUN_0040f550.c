
void __fastcall Ending::FUN_0040f550(Ending *ending)

{
  zRect local_14;
  
  local_14.left = 0.0;
  local_14.top = 0.0;
  local_14.right = 640.0;
  local_14.bottom = 480.0;
  switch(*(undefined4 *)&ending->field_0x1168) {
  case 0:
    *(undefined4 *)&ending->field_0x115c = 0;
    break;
  case 1:
    if (*(int *)&ending->field_0x1160 < *(int *)&ending->field_0x1164) {
      *(int *)&ending->field_0x115c =
           (0xff - (*(int *)&ending->field_0x1160 * 0xff) / *(int *)&ending->field_0x1164) *
           0x1000000;
      *(int *)&ending->field_0x1160 = *(int *)&ending->field_0x1160 + 1;
    }
    else {
      *(undefined4 *)&ending->field_0x1168 = 0;
      *(undefined4 *)&ending->field_0x115c = 0;
    }
    break;
  case 2:
    if (*(int *)&ending->field_0x1160 < *(int *)&ending->field_0x1164) {
      *(int *)&ending->field_0x115c =
           (*(int *)&ending->field_0x1160 * 0xff) / *(int *)&ending->field_0x1164 << 0x18;
      *(int *)&ending->field_0x1160 = *(int *)&ending->field_0x1160 + 1;
    }
    else {
      *(undefined4 *)&ending->field_0x115c = 0xff000000;
    }
    break;
  case 3:
    if (*(int *)&ending->field_0x1160 < *(int *)&ending->field_0x1164) {
      *(uint *)&ending->field_0x115c =
           (0xff - (*(int *)&ending->field_0x1160 * 0xff) / *(int *)&ending->field_0x1164) *
           0x1000000 | 0xffffff;
      *(int *)&ending->field_0x1160 = *(int *)&ending->field_0x1160 + 1;
    }
    else {
      *(undefined4 *)&ending->field_0x1168 = 0;
      *(undefined4 *)&ending->field_0x115c = 0;
    }
    break;
  case 4:
    if (*(int *)&ending->field_0x1160 < *(int *)&ending->field_0x1164) {
      *(uint *)&ending->field_0x115c =
           (*(int *)&ending->field_0x1160 * 0xff) / *(int *)&ending->field_0x1164 << 0x18 | 0xffffff
      ;
      *(int *)&ending->field_0x1160 = *(int *)&ending->field_0x1160 + 1;
    }
    else {
      *(undefined4 *)&ending->field_0x115c = 0xffffffff;
    }
  }
  if ((*(uint *)&ending->field_0x115c & 0xff000000) != 0) {
    DrawSquare(&local_14,*(D3DCOLOR *)&ending->field_0x115c);
  }
  return;
}

