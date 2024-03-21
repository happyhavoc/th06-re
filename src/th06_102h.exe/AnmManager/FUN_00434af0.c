
void __thiscall
AnmManager::FUN_00434af0
          (AnmManager *this,uint spriteSrcIndex,long xPos,long yPos,long spriteWidth,
          long spriteHeight,int fontWidth,int fontHeight2,COLORREF param_8,COLORREF param_9,
          char *param_10)

{
  if (fontWidth < 1) {
    fontWidth = 0xf;
  }
  if (fontHeight2 < 1) {
    fontHeight2 = 0xf;
  }
  FUN_0041f050(xPos,yPos,spriteWidth,spriteHeight,fontWidth,fontHeight2,param_8,param_9,param_10,
               this->textures[spriteSrcIndex]);
  return;
}

