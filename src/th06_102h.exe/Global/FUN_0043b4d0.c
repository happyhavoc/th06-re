
undefined4 __thiscall FUN_0043b4d0(void *this)

{
  if (*(int *)((int)this + 0x1c) != 0) {
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
    if (*(int *)((int)this + 0x14) < 1) {
      *(undefined4 *)((int)this + 0x1c) = 0;
      (**(code **)(***(int ***)((int)this + 4) + 0x48))(**(undefined4 **)((int)this + 4));
      return 1;
    }
    (**(code **)(***(int ***)((int)this + 4) + 0x3c))
              (**(undefined4 **)((int)this + 4),
               (*(int *)((int)this + 0x14) * 5000) / *(int *)((int)this + 0x18) + -5000);
  }
  return 0;
}

