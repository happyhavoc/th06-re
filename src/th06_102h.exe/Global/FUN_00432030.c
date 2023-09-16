
void __thiscall FUN_00432030(AnmManager *this,int param_2)

{
  int *piVar2;
  int iVar3;
  AnmLoadedSprite *pAVar4;
  AnmRawSprite **after_hdr;
  int local_14;
  int piVar1;
  
  if (this->anmFiles[param_2] != (AnmRawEntry *)0x0) {
    piVar1 = this->anmFilesSpriteIndexOffsets[param_2];
    after_hdr = this->anmFiles[param_2]->sprites;
    for (local_14 = 0; local_14 < this->anmFiles[param_2]->numSprites; local_14 = local_14 + 1) {
      piVar2 = (int *)((int)this->anmFiles[param_2]->sprites + (int)(&(*after_hdr)->id + -0x10));
      pAVar4 = this->sprites + *piVar2 + piVar1;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        pAVar4->sourceFileIndex = 0;
        pAVar4 = (AnmLoadedSprite *)&pAVar4->startPixelInclusive;
      }
      this->sprites[*piVar2 + piVar1].sourceFileIndex = 0xffffffff;
      after_hdr = after_hdr + 1;
    }
    for (local_14 = 0; local_14 < this->anmFiles[param_2]->numScripts; local_14 = local_14 + 1) {
      this->scripts[(int)&(*after_hdr)->id + piVar1] = (AnmRawInstr *)0x0;
      this->spriteIndices[(int)&(*after_hdr)->id + piVar1] = 0;
      after_hdr = after_hdr + 2;
    }
    this->anmFilesSpriteIndexOffsets[param_2] = 0;
    FUN_004321e0(this,this->anmFiles[param_2]->textureIdx);
    _free(this->anmFiles[param_2]);
    this->anmFiles[param_2] = (AnmRawEntry *)0x0;
    this->currentBlendMode = 0xff;
    this->currentColorOp = 0xff;
    this->field16_0x210be = 0xff;
    this->currentTexture = (IDirect3DTexture8 *)0x0;
  }
  return;
}

