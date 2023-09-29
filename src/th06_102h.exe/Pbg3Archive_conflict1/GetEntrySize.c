
undefined4 __thiscall Pbg3Archive_conflict1::GetEntrySize(Pbg3Archive_conflict1 *this,uint param_1)

{
  if (*(uint *)(this + 8) <= param_1) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(this + 0x10) + 8 + param_1 * 0x114);
}

