
void __thiscall AnmManager::ReleaseAnm(AnmManager *this,int anm_index)

{
  int *piVar2;
  int iVar3;
  AnmLoadedSprite *pAVar4;
  uint *after_hdr;
  int local_14;
  int piVar1;
  
  if (this->anmFiles[anm_index] != (AnmRawEntry *)0x0) {
    piVar1 = this->anmFilesSpriteIndexOffsets[anm_index];
    after_hdr = this->anmFiles[anm_index]->spriteOffsets;
    for (local_14 = 0; local_14 < this->anmFiles[anm_index]->numSprites; local_14 = local_14 + 1) {
      piVar2 = (int *)((int)this->anmFiles[anm_index]->spriteOffsets + (*after_hdr - 0x40));
      pAVar4 = this->sprites + *piVar2 + piVar1;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        pAVar4->sourceFileIndex = 0;
        pAVar4 = (AnmLoadedSprite *)&pAVar4->startPixelInclusive;
      }
      this->sprites[*piVar2 + piVar1].sourceFileIndex = 0xffffffff;
      after_hdr = after_hdr + 1;
    }
    for (local_14 = 0; local_14 < this->anmFiles[anm_index]->numScripts; local_14 = local_14 + 1) {
      this->scripts[*after_hdr + piVar1] = (AnmRawInstr *)0x0;
      this->spriteIndices[*after_hdr + piVar1] = 0;
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

