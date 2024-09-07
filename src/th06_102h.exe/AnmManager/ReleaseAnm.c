
void __thiscall th06::AnmManager::ReleaseAnm(AnmManager *this,int anm_index)

{
  int iVar2;
  int iVar3;
  int iVar1;
  undefined4 *sprite;
  int *after_hdr;
  int i;
  int sprite_index_offset;
  
  if (*(int *)(this + anm_index * 4 + 0x20934) != 0) {
    sprite_index_offset = *(int *)(this + anm_index * 4 + 0x20b34);
    after_hdr = (int *)(*(int *)(this + anm_index * 4 + 0x20934) + 0x40);
    for (i = 0; i < **(int **)(this + anm_index * 4 + 0x20934); i = i + 1) {
      iVar2 = *(int *)(this + anm_index * 4 + 0x20934);
      iVar3 = *after_hdr;
      sprite = (undefined4 *)(this + (*(int *)(iVar2 + iVar3) + sprite_index_offset) * 0x38);
      for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
        *sprite = 0;
        sprite = sprite + 1;
      }
      *(undefined4 *)(this + (*(int *)(iVar2 + iVar3) + sprite_index_offset) * 0x38) = 0xffffffff;
      after_hdr = after_hdr + 1;
    }
    for (i = 0; i < *(int *)(*(int *)(this + anm_index * 4 + 0x20934) + 4); i = i + 1) {
      *(undefined4 *)(this + (*after_hdr + sprite_index_offset) * 4 + 0x1c934) = 0;
      *(undefined4 *)(this + (*after_hdr + sprite_index_offset) * 4 + 0x1e934) = 0;
      after_hdr = after_hdr + 2;
    }
    *(undefined4 *)(this + anm_index * 4 + 0x20b34) = 0;
    ReleaseTexture((AnmManager *)this,*(int *)(*(int *)(this + anm_index * 4 + 0x20934) + 8));
    _free(*(void **)(this + anm_index * 4 + 0x20934));
    *(undefined4 *)(this + anm_index * 4 + 0x20934) = 0;
    this[0x210bc] = (AnmManager)0xff;
    this[0x210bd] = (AnmManager)0xff;
    this[0x210be] = (AnmManager)0xff;
    *(undefined4 *)(this + 0x210b8) = 0;
  }
  return;
}

