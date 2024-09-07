
void __thiscall
th06::AnmManager::DrawText
          (AnmManager *this,uint spriteSrcIndex,long xPos,long yPos,long spriteWidth,
          long spriteHeight,int fontWidth,int fontHeight2,D3DCOLOR textColor,COLORREF shadowColor,
          char *strToPrint)

{
  if (fontWidth < 1) {
    fontWidth = 0xf;
  }
  if (fontHeight2 < 1) {
    fontHeight2 = 0xf;
  }
  RenderTextToTexture(xPos,yPos,spriteWidth,spriteHeight,fontWidth,fontHeight2,textColor,shadowColor
                      ,strToPrint,*(IDirect3DTexture8 **)(this + spriteSrcIndex * 4 + 0x1c110));
  return;
}

