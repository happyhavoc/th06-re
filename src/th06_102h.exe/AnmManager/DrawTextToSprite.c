
void __thiscall
th06::AnmManager::DrawTextToSprite
          (AnmManager *this,uint spriteDstIndex,int xPos,int yPos,int spriteWidth,int spriteHeight,
          int fontWidth,int fontHeight2,ZunColor textColor,ZunColor shadowColor,char *strToPrint)

{
  if (fontWidth < 1) {
    fontWidth = 0xf;
  }
  if (fontHeight2 < 1) {
    fontHeight2 = 0xf;
  }
  TextHelper::RenderTextToTexture
            (xPos,yPos,spriteWidth,spriteHeight,fontWidth,fontHeight2,textColor,shadowColor,
             strToPrint,this->textures[spriteDstIndex]);
  return;
}

