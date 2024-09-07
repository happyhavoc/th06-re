
void __thiscall th06::AnmManager::ReleaseVertexBuffer(AnmManager *this)

{
  if (*(int *)(this + 0x210c4) != 0) {
    (**(code **)(**(int **)(this + 0x210c4) + 8))(*(undefined4 *)(this + 0x210c4));
    *(undefined4 *)(this + 0x210c4) = 0;
  }
  return;
}

