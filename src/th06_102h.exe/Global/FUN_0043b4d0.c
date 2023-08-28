
undefined4 __fastcall FUN_0043b4d0(void *param_1)

{
  if (*(int *)((int)param_1 + 0x1c) != 0) {
    *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + -1;
    if (*(int *)((int)param_1 + 0x14) < 1) {
      *(undefined4 *)((int)param_1 + 0x1c) = 0;
      (**(code **)(***(int ***)((int)param_1 + 4) + 0x48))(**(undefined4 **)((int)param_1 + 4));
      return 1;
    }
    (**(code **)(***(int ***)((int)param_1 + 4) + 0x3c))
              (**(undefined4 **)((int)param_1 + 4),
               (*(int *)((int)param_1 + 0x14) * 5000) / *(int *)((int)param_1 + 0x18) + -5000);
  }
  return 0;
}

