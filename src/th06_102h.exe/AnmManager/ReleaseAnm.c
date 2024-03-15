
void __thiscall AnmManager::ReleaseAnm(AnmManager *this,int anm_index)

{
  int *sprite_index;
  int iVar1;
  AnmLoadedSprite *sprite;
  uint *after_hdr;
  int i;
  int sprite_index_offset;
  
  if (this->anmFiles[anm_index] != (AnmRawEntry *)0x0) {
    sprite_index_offset = this->anmFilesSpriteIndexOffsets[anm_index];
    after_hdr = this->anmFiles[anm_index]->spriteOffsets;
    for (i = 0; i < this->anmFiles[anm_index]->numSprites; i = i + 1) {
      sprite_index = (int *)((int)this->anmFiles[anm_index]->spriteOffsets + (*after_hdr - 0x40));
      sprite = this->sprites + *sprite_index + sprite_index_offset;
      for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
        sprite->sourceFileIndex = 0;
        sprite = (AnmLoadedSprite *)&sprite->startPixelInclusive;
      }
      this->sprites[*sprite_index + sprite_index_offset].sourceFileIndex = -1;
      after_hdr = after_hdr + 1;
    }
    for (i = 0; i < this->anmFiles[anm_index]->numScripts; i = i + 1) {
      this->scripts[*after_hdr + sprite_index_offset] = (AnmRawInstr *)0x0;
      this->spriteIndices[*after_hdr + sprite_index_offset] = 0;
      after_hdr = after_hdr + 2;
    }
    this->anmFilesSpriteIndexOffsets[anm_index] = 0;
    ReleaseTexture(this,this->anmFiles[anm_index]->textureIdx);
    _free(this->anmFiles[anm_index]);
    this->anmFiles[anm_index] = (AnmRawEntry *)0x0;
    this->currentBlendMode = 0xff;
    this->currentColorOp = 0xff;
    this->currentVertexShader = 0xff;
    this->currentTexture = (IDirect3DTexture8 *)0x0;
  }
  return;
}

