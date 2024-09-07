
void __thiscall th06::AnmManager::ReleaseSurfaces(AnmManager *this)

{
  int idx;
  
  for (idx = 0; idx < 0x20; idx = idx + 1) {
    if (*(int *)(this + idx * 4 + 0x20d34) != 0) {
      (**(code **)(**(int **)(this + idx * 4 + 0x20d34) + 8))
                (*(undefined4 *)(this + idx * 4 + 0x20d34));
      *(undefined4 *)(this + idx * 4 + 0x20d34) = 0;
    }
  }
  return;
}

