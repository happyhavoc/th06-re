
void __thiscall AnmManager::LoadSprite(AnmManager *this,int spriteIdx,AnmLoadedSprite *sprite)

{
  int iVar1;
  AnmLoadedSprite *pAVar2;
  
  pAVar2 = this->sprites + spriteIdx;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    pAVar2->sourceFileIndex = sprite->sourceFileIndex;
    sprite = (AnmLoadedSprite *)&sprite->startPixelInclusive;
    pAVar2 = (AnmLoadedSprite *)&pAVar2->startPixelInclusive;
  }
  this->sprites[spriteIdx].spriteId = this->maybeLoadedSpriteCount;
  this->maybeLoadedSpriteCount = this->maybeLoadedSpriteCount + 1;
  this->sprites[spriteIdx].uvStart.x =
       this->sprites[spriteIdx].startPixelInclusive.x / this->sprites[spriteIdx].textureWidth;
  this->sprites[spriteIdx].uvEnd.x =
       this->sprites[spriteIdx].endPixelInclusive.x / this->sprites[spriteIdx].textureWidth;
  this->sprites[spriteIdx].uvStart.y =
       this->sprites[spriteIdx].startPixelInclusive.y / this->sprites[spriteIdx].textureHeight;
  this->sprites[spriteIdx].uvEnd.y =
       this->sprites[spriteIdx].endPixelInclusive.y / this->sprites[spriteIdx].textureHeight;
  this->sprites[spriteIdx].widthPx =
       this->sprites[spriteIdx].endPixelInclusive.x - this->sprites[spriteIdx].startPixelInclusive.x
  ;
  this->sprites[spriteIdx].heightPx =
       this->sprites[spriteIdx].endPixelInclusive.y - this->sprites[spriteIdx].startPixelInclusive.y
  ;
  return;
}

