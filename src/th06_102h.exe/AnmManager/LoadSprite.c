
void __thiscall
th06::AnmManager::LoadSprite(AnmManager *this,uint spriteIdx,AnmLoadedSprite *sprite)

{
  int iVar1;
  u32 *loaded_sprite;
  
  loaded_sprite = (u32 *)(this + spriteIdx * 0x38);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *loaded_sprite = sprite->sourceFileIndex;
    sprite = (AnmLoadedSprite *)&sprite->startPixelInclusive;
    loaded_sprite = loaded_sprite + 1;
  }
  *(undefined4 *)(this + spriteIdx * 0x38 + 0x34) = *(undefined4 *)(this + 0x1c930);
  *(int *)(this + 0x1c930) = *(int *)(this + 0x1c930) + 1;
  *(float *)(this + spriteIdx * 0x38 + 0x1c) =
       *(float *)(this + spriteIdx * 0x38 + 4) / *(float *)(this + spriteIdx * 0x38 + 0x18);
  *(float *)(this + spriteIdx * 0x38 + 0x24) =
       *(float *)(this + spriteIdx * 0x38 + 0xc) / *(float *)(this + spriteIdx * 0x38 + 0x18);
  *(float *)(this + spriteIdx * 0x38 + 0x20) =
       *(float *)(this + spriteIdx * 0x38 + 8) / *(float *)(this + spriteIdx * 0x38 + 0x14);
  *(float *)(this + spriteIdx * 0x38 + 0x28) =
       *(float *)(this + spriteIdx * 0x38 + 0x10) / *(float *)(this + spriteIdx * 0x38 + 0x14);
  *(float *)(this + spriteIdx * 0x38 + 0x30) =
       *(float *)(this + spriteIdx * 0x38 + 0xc) - *(float *)(this + spriteIdx * 0x38 + 4);
  *(float *)(this + spriteIdx * 0x38 + 0x2c) =
       *(float *)(this + spriteIdx * 0x38 + 0x10) - *(float *)(this + spriteIdx * 0x38 + 8);
  return;
}

