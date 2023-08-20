
void FUN_00431270(void)

{
  int iVar1;
  int in_ECX;
  int local_8;
  
  if ((*(int *)(in_ECX + 0x610) != 0) && (g_GameContext.cfg._28_1_ != '\0')) {
    for (local_8 = 0; (local_8 < 3 && (-1 < *(int *)(in_ECX + 0x620 + local_8 * 4)));
        local_8 = local_8 + 1) {
      iVar1 = *(int *)(in_ECX + 0x620 + local_8 * 4);
      *(undefined4 *)(in_ECX + 0x620 + local_8 * 4) = 0xffffffff;
      if (*(int *)(in_ECX + 0x208 + iVar1 * 4) != 0) {
        (**(code **)(**(int **)(in_ECX + 0x208 + iVar1 * 4) + 0x48))
                  (*(undefined4 *)(in_ECX + 0x208 + iVar1 * 4));
        (**(code **)(**(int **)(in_ECX + 0x208 + iVar1 * 4) + 0x34))
                  (*(undefined4 *)(in_ECX + 0x208 + iVar1 * 4),0);
        (**(code **)(**(int **)(in_ECX + 0x208 + iVar1 * 4) + 0x30))
                  (*(undefined4 *)(in_ECX + 0x208 + iVar1 * 4),0,0,0);
      }
    }
  }
  return;
}

