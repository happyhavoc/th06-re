
AnmManager * __thiscall AnmManager::AnmManager(AnmManager *this)

{
  int iVar1;
  AnmManager *pAVar2;
  int local_1c;
  int sprite_index;
  
  AnmVm::AnmVm(&this->virtualMachine);
  local_1c = 4;
  do {
    local_1c = local_1c + -1;
  } while (-1 < local_1c);
  this->maybeLoadedSpriteCount = 0;
  pAVar2 = this;
                    /* memset(this, 0, sizeof(this));
                       
                       Yes, this makes everything that happened above useless.
                       
                       Could this be UB? Probably? */
  for (iVar1 = 0x844b; iVar1 != 0; iVar1 = iVar1 + -1) {
    pAVar2->sprites[0].sourceFileIndex = 0;
    pAVar2 = (AnmManager *)&pAVar2->sprites[0].startPixelInclusive;
  }
  for (sprite_index = 0; sprite_index < 0x800; sprite_index = sprite_index + 1) {
    this->sprites[sprite_index].sourceFileIndex = 0xffffffff;
  }
  g_PrimitivesToDrawVertexBuf[3].pos.w = 1.0;
  g_PrimitivesToDrawVertexBuf[2].pos.w = 1.0;
  g_PrimitivesToDrawVertexBuf[1].pos.w = 1.0;
  g_PrimitivesToDrawVertexBuf[0].pos.w = 1.0;
  g_PrimitivesToDrawVertexBuf[0].textureUV.x = 0.0;
  g_PrimitivesToDrawVertexBuf[0].textureUV.y = 0.0;
  g_PrimitivesToDrawVertexBuf[1].textureUV.x = 1.0;
  g_PrimitivesToDrawVertexBuf[1].textureUV.y = 0.0;
  g_PrimitivesToDrawVertexBuf[2].textureUV.x = 0.0;
  g_PrimitivesToDrawVertexBuf[2].textureUV.y = 1.0;
  g_PrimitivesToDrawVertexBuf[3].textureUV.x = 1.0;
  g_PrimitivesToDrawVertexBuf[3].textureUV.y = 1.0;
  g_PrimitivesToDrawNoVertexBuf[3].pos.w = 1.0;
  g_PrimitivesToDrawNoVertexBuf[2].pos.w = 1.0;
  g_PrimitivesToDrawNoVertexBuf[1].pos.w = 1.0;
  g_PrimitivesToDrawNoVertexBuf[0].pos.w = 1.0;
  g_PrimitivesToDrawNoVertexBuf[0].textureUV.x = 0.0;
  g_PrimitivesToDrawNoVertexBuf[0].textureUV.y = 0.0;
  g_PrimitivesToDrawNoVertexBuf[1].textureUV.x = 1.0;
  g_PrimitivesToDrawNoVertexBuf[1].textureUV.y = 0.0;
  g_PrimitivesToDrawNoVertexBuf[2].textureUV.x = 0.0;
  g_PrimitivesToDrawNoVertexBuf[2].textureUV.y = 1.0;
  g_PrimitivesToDrawNoVertexBuf[3].textureUV.x = 1.0;
  g_PrimitivesToDrawNoVertexBuf[3].textureUV.y = 1.0;
  this->vertexBuffer = (IDirect3DVertexBuffer8 *)0x0;
  this->currentTexture = (IDirect3DTexture8 *)0x0;
  this->currentBlendMode = '\0';
  this->currentColorOp = '\0';
  this->currentTextureFactor = 1;
  this->currentVertexShader = '\0';
  this->currentZWriteDisable = '\0';
  this->screenshot_textureId = -1;
  return this;
}

