
void __thiscall
th06::AnmManager::LoadSprite(AnmManager *this,uint spriteIdx,AnmLoadedSprite *sprite)

{
  int iVar1;
  u32 *loaded_sprite;
  
  loaded_sprite = (u32 *)(this->sprites + spriteIdx);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *loaded_sprite = sprite->sourceFileIndex;
    sprite = (AnmLoadedSprite *)&sprite->startPixelInclusive;
    loaded_sprite = loaded_sprite + 1;
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

