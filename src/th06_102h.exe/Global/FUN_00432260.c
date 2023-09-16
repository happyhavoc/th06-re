
void __thiscall FUN_00432260(AnmManager *this,int param_2,undefined4 *param_3)

{
  int iVar1;
  AnmLoadedSprite *pAVar2;
  
  pAVar2 = this->sprites + param_2;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    pAVar2->sourceFileIndex = *param_3;
    param_3 = param_3 + 1;
    pAVar2 = (AnmLoadedSprite *)&pAVar2->startPixelInclusive;
  }
  this->sprites[param_2].spriteId = this->maybeLoadedSpriteCount;
  this->maybeLoadedSpriteCount = this->maybeLoadedSpriteCount + 1;
  this->sprites[param_2].uvStart.x =
       this->sprites[param_2].startPixelInclusive.x / this->sprites[param_2].textureWidth;
  this->sprites[param_2].uvEnd.x =
       this->sprites[param_2].endPixelInclusive.x / this->sprites[param_2].textureWidth;
  this->sprites[param_2].uvStart.y =
       this->sprites[param_2].startPixelInclusive.y / this->sprites[param_2].textureHeight;
  this->sprites[param_2].uvEnd.y =
       this->sprites[param_2].endPixelInclusive.y / this->sprites[param_2].textureHeight;
  this->sprites[param_2].widthPx =
       this->sprites[param_2].endPixelInclusive.x - this->sprites[param_2].startPixelInclusive.x;
  this->sprites[param_2].heightPx =
       this->sprites[param_2].endPixelInclusive.y - this->sprites[param_2].startPixelInclusive.y;
  return;
}

