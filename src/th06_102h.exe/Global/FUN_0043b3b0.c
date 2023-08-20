
uint FUN_0043b3b0(void)

{
  uint uVar1;
  int in_ECX;
  uint local_c;
  uint local_8;
  
  if (*(int *)(in_ECX + 4) == 0) {
    local_8 = 0x800401f0;
  }
  else {
    local_8 = 0;
    for (local_c = 0; local_c < *(uint *)(in_ECX + 0x10); local_c = local_c + 1) {
      uVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 4) + local_c * 4) + 0x34))
                        (*(undefined4 *)(*(int *)(in_ECX + 4) + local_c * 4),0);
      local_8 = local_8 | uVar1;
    }
  }
  return local_8;
}

