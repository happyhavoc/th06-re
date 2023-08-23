
undefined4 __fastcall FUN_0043b4d0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    if (*(int *)(param_1 + 0x14) < 1) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      (**(code **)(***(int ***)(param_1 + 4) + 0x48))(**(undefined4 **)(param_1 + 4));
      return 1;
    }
    (**(code **)(***(int ***)(param_1 + 4) + 0x3c))
              (**(undefined4 **)(param_1 + 4),
               (*(int *)(param_1 + 0x14) * 5000) / *(int *)(param_1 + 0x18) + -5000);
  }
  return 0;
}

