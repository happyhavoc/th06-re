
void __fastcall FUN_0040f550(int param_1)

{
  zRect local_14;
  
  local_14.left = 0.0;
  local_14.top = 0.0;
  local_14.right = 640.0;
  local_14.bottom = 480.0;
  switch(*(undefined4 *)(param_1 + 0x1168)) {
  case 0:
    *(undefined4 *)(param_1 + 0x115c) = 0;
    break;
  case 1:
    if (*(int *)(param_1 + 0x1160) < *(int *)(param_1 + 0x1164)) {
      *(int *)(param_1 + 0x115c) =
           (0xff - (*(int *)(param_1 + 0x1160) * 0xff) / *(int *)(param_1 + 0x1164)) * 0x1000000;
      *(int *)(param_1 + 0x1160) = *(int *)(param_1 + 0x1160) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x1168) = 0;
      *(undefined4 *)(param_1 + 0x115c) = 0;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x1160) < *(int *)(param_1 + 0x1164)) {
      *(int *)(param_1 + 0x115c) =
           (*(int *)(param_1 + 0x1160) * 0xff) / *(int *)(param_1 + 0x1164) << 0x18;
      *(int *)(param_1 + 0x1160) = *(int *)(param_1 + 0x1160) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x115c) = 0xff000000;
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x1160) < *(int *)(param_1 + 0x1164)) {
      *(uint *)(param_1 + 0x115c) =
           (0xff - (*(int *)(param_1 + 0x1160) * 0xff) / *(int *)(param_1 + 0x1164)) * 0x1000000 |
           0xffffff;
      *(int *)(param_1 + 0x1160) = *(int *)(param_1 + 0x1160) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x1168) = 0;
      *(undefined4 *)(param_1 + 0x115c) = 0;
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x1160) < *(int *)(param_1 + 0x1164)) {
      *(uint *)(param_1 + 0x115c) =
           (*(int *)(param_1 + 0x1160) * 0xff) / *(int *)(param_1 + 0x1164) << 0x18 | 0xffffff;
      *(int *)(param_1 + 0x1160) = *(int *)(param_1 + 0x1160) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x115c) = 0xffffffff;
    }
  }
  if ((*(uint *)(param_1 + 0x115c) & 0xff000000) != 0) {
    DrawSquare(&local_14,*(D3DCOLOR *)(param_1 + 0x115c));
  }
  return;
}

