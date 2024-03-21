
void AnmManager::FUN_00434e20
               (AnmManager *AnmMgr,AnmVm *vm,D3DCOLOR color,D3DCOLOR color2,char *print_fmt,
               int param_6)

{
  uint fontHeight;
  long spriteTextureHeight;
  long spriteTextureWidth;
  long spriteSPIYPos;
  long spriteSPIXPos;
  D3DCOLOR DVar1;
  D3DCOLOR DVar2;
  char *buf_reference;
  uint font_width;
  char buf [68];
  uint local_10;
  long local_c;
  va_list local_8;
  char current_digested_char;
  uint fontWidth;
  char *pcVar4;
  undefined *puVar3;
  uint unaff_retaddr;
  
  local_10 = __security_cookie ^ unaff_retaddr;
  if (vm->fontWidth == '\0') {
    font_width = uVar5;
  }
  else {
    font_width = (uint)vm->fontWidth;
  }
  local_8 = (va_list)&param_6;
  vsprintf(buf,print_fmt,local_8);
  local_8 = (va_list)0x0;
  puVar3 = &DAT_0046ac10;
  fontHeight = (uint)vm->fontHeight;
  fontWidth = font_width;
  DVar1 = color;
  DVar2 = color2;
  spriteTextureHeight = __ftol2(vm->sprite->textureHeight);
  spriteTextureWidth = __ftol2(vm->sprite->textureWidth);
  spriteSPIYPos = __ftol2((vm->sprite->startPixelInclusive).y);
  spriteSPIXPos = __ftol2((vm->sprite->startPixelInclusive).x);
  FUN_00434af0(AnmMgr,vm->sprite->sourceFileIndex,spriteSPIXPos,spriteSPIYPos,spriteTextureWidth,
               spriteTextureHeight,fontWidth,fontHeight,DVar1,DVar2,puVar3);
  buf_reference = buf;
  do {
    current_digested_char = *buf_reference;
    buf_reference = buf_reference + 1;
  } while (current_digested_char != '\0');
  local_c = __ftol2((vm->sprite->textureWidth / 2.0 + (vm->sprite->startPixelInclusive).x) -
                    ((float)(ulonglong)(uint)((int)buf_reference - (int)(buf + 1)) *
                    (float)(font_width + 1)) / 4.0);
  pcVar4 = buf;
  fontWidth = (uint)vm->fontHeight;
  spriteTextureHeight = __ftol2(vm->sprite->textureHeight);
  spriteTextureWidth = __ftol2(vm->sprite->textureWidth);
  spriteSPIYPos = __ftol2((vm->sprite->startPixelInclusive).y);
  FUN_00434af0(AnmMgr,vm->sprite->sourceFileIndex,local_c,spriteSPIYPos,spriteTextureWidth,
               spriteTextureHeight,font_width,fontWidth,color,color2,pcVar4);
  *(uint *)&vm->flags = *(uint *)&vm->flags | 1;
  __security_check_cookie(local_10 ^ unaff_retaddr);
  return;
}

