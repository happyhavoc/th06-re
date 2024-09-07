
void __thiscall th06::AnmManager::ReleaseSurface(AnmManager *this,int surface_index)

{
  if (*(int *)(this + surface_index * 4 + 0x20d34) != 0) {
    (**(code **)(**(int **)(this + surface_index * 4 + 0x20d34) + 8))
              (*(undefined4 *)(this + surface_index * 4 + 0x20d34));
    *(undefined4 *)(this + surface_index * 4 + 0x20d34) = 0;
  }
  if (*(int *)(this + surface_index * 4 + 0x20db4) != 0) {
    (**(code **)(**(int **)(this + surface_index * 4 + 0x20db4) + 8))
              (*(undefined4 *)(this + surface_index * 4 + 0x20db4));
    *(undefined4 *)(this + surface_index * 4 + 0x20db4) = 0;
  }
  return;
}

