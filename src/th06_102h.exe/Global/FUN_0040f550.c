
void FUN_0040f550(void)

{
  int in_ECX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0x44200000;
  local_8 = 0x43f00000;
  switch(*(undefined4 *)(in_ECX + 0x1168)) {
  case 0:
    *(undefined4 *)(in_ECX + 0x115c) = 0;
    break;
  case 1:
    if (*(int *)(in_ECX + 0x1160) < *(int *)(in_ECX + 0x1164)) {
      *(int *)(in_ECX + 0x115c) =
           (0xff - (*(int *)(in_ECX + 0x1160) * 0xff) / *(int *)(in_ECX + 0x1164)) * 0x1000000;
      *(int *)(in_ECX + 0x1160) = *(int *)(in_ECX + 0x1160) + 1;
    }
    else {
      *(undefined4 *)(in_ECX + 0x1168) = 0;
      *(undefined4 *)(in_ECX + 0x115c) = 0;
    }
    break;
  case 2:
    if (*(int *)(in_ECX + 0x1160) < *(int *)(in_ECX + 0x1164)) {
      *(int *)(in_ECX + 0x115c) =
           (*(int *)(in_ECX + 0x1160) * 0xff) / *(int *)(in_ECX + 0x1164) << 0x18;
      *(int *)(in_ECX + 0x1160) = *(int *)(in_ECX + 0x1160) + 1;
    }
    else {
      *(undefined4 *)(in_ECX + 0x115c) = 0xff000000;
    }
    break;
  case 3:
    if (*(int *)(in_ECX + 0x1160) < *(int *)(in_ECX + 0x1164)) {
      *(uint *)(in_ECX + 0x115c) =
           (0xff - (*(int *)(in_ECX + 0x1160) * 0xff) / *(int *)(in_ECX + 0x1164)) * 0x1000000 |
           0xffffff;
      *(int *)(in_ECX + 0x1160) = *(int *)(in_ECX + 0x1160) + 1;
    }
    else {
      *(undefined4 *)(in_ECX + 0x1168) = 0;
      *(undefined4 *)(in_ECX + 0x115c) = 0;
    }
    break;
  case 4:
    if (*(int *)(in_ECX + 0x1160) < *(int *)(in_ECX + 0x1164)) {
      *(uint *)(in_ECX + 0x115c) =
           (*(int *)(in_ECX + 0x1160) * 0xff) / *(int *)(in_ECX + 0x1164) << 0x18 | 0xffffff;
      *(int *)(in_ECX + 0x1160) = *(int *)(in_ECX + 0x1160) + 1;
    }
    else {
      *(undefined4 *)(in_ECX + 0x115c) = 0xffffffff;
    }
  }
  if ((*(uint *)(in_ECX + 0x115c) & 0xff000000) != 0) {
    FUN_0042f8b0(&local_14,*(undefined4 *)(in_ECX + 0x115c));
  }
  return;
}

