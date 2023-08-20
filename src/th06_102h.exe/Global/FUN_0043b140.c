
undefined4 FUN_0043b140(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_ECX;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)(in_ECX + 4) == 0) {
    uVar1 = 0;
  }
  else {
    for (local_c = 0; local_c < *(uint *)(in_ECX + 0x10); local_c = local_c + 1) {
      if (*(int *)(*(int *)(in_ECX + 4) + local_c * 4) != 0) {
        local_10 = 0;
        (**(code **)(**(int **)(*(int *)(in_ECX + 4) + local_c * 4) + 0x24))
                  (*(undefined4 *)(*(int *)(in_ECX + 4) + local_c * 4),&local_10);
        if ((local_10 & 1) == 0) break;
      }
    }
    if (local_c == *(uint *)(in_ECX + 0x10)) {
      uVar2 = _rand();
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + 4) + (uVar2 % *(uint *)(in_ECX + 0x10)) * 4);
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + 4) + local_c * 4);
    }
  }
  return uVar1;
}

