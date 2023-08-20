
uint FUN_0043b300(void)

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
    DebugPrint2("CSound::Stop ");
    for (local_c = 0; local_c < *(uint *)(in_ECX + 0x10); local_c = local_c + 1) {
      DebugPrint2("%d ",local_c);
      uVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 4) + local_c * 4) + 0x48))
                        (*(undefined4 *)(*(int *)(in_ECX + 4) + local_c * 4));
      local_8 = local_8 | uVar1;
    }
    DebugPrint2("\n");
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  return local_8;
}

