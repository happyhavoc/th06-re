
void FUN_004219d0(void)

{
  int in_ECX;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    if (*(int *)(in_ECX + 0x20d34 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x20d34 + local_8 * 4) + 8))
                (*(undefined4 *)(in_ECX + 0x20d34 + local_8 * 4));
      *(undefined4 *)(in_ECX + 0x20d34 + local_8 * 4) = 0;
    }
  }
  return;
}

