
void __thiscall
AnmManager::FUN_00434af0
          (AnmManager *this,uint spriteSrcIndex,long xPos,long yPos,long spriteWidth,
          long spriteHeight,int fontWidth,int fontHeight,undefined4 param_8,undefined4 param_9,
          undefined4 param_10)

{
  if (fontWidth < 1) {
    fontWidth = 0xf;
  }
  if (fontHeight < 1) {
    fontHeight = 0xf;
  }
  FUN_0041f050(xPos,yPos,spriteWidth,spriteHeight,fontWidth,fontHeight,param_8,param_9,param_10,
               this->textures[spriteSrcIndex]);
  return;
}

