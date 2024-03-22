
void __thiscall
AnmManager::FUN_00434af0
          (AnmManager *this,uint spriteSrcIndex,long xPos,long yPos,long spriteWidth,
          long spriteHeight,int fontWidth,int fontHeight2,D3DCOLOR textColor,COLORREF param_9,
          char *param_10)

{
  if (fontWidth < 1) {
    fontWidth = 0xf;
  }
  if (fontHeight2 < 1) {
    fontHeight2 = 0xf;
  }
  FUN_0041f050(xPos,yPos,spriteWidth,spriteHeight,fontWidth,fontHeight2,textColor,param_9,param_10,
               this->textures[spriteSrcIndex]);
  return;
}

