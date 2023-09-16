
undefined4 __thiscall Pbg3File_conflict1::SomeKindOfDelete(Pbg3File_conflict1 *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  if (*(int **)this != (int *)0x0) {
    (**(code **)(**(int **)this + 0x1c))(1);
    *(undefined4 *)this = 0;
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    _free(*(void **)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  _free(*(void **)(this + 4));
  return 1;
}

