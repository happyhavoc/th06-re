
AnmManager * __thiscall AnmManager::AnmManager(AnmManager *this)

{
  int iVar1;
  AnmManager *pAVar2;
  int local_1c;
  int local_8;
  
  AnmVm::AnmVm(&this->virtualMachine);
  local_1c = 4;
  do {
    local_1c = local_1c + -1;
  } while (-1 < local_1c);
  this->maybeLoadedSpriteCount = 0;
  pAVar2 = this;
                    /* memset(this, 0, sizeof(this)); */
  for (iVar1 = 0x844b; iVar1 != 0; iVar1 = iVar1 + -1) {
    pAVar2->sprites[0].sourceFileIndex = 0;
    pAVar2 = (AnmManager *)&pAVar2->sprites[0].startPixelInclusive;
  }
  for (local_8 = 0; local_8 < 0x800; local_8 = local_8 + 1) {
    this->sprites[local_8].sourceFileIndex = 0xffffffff;
  }
  PRIMITIVES_TO_DRAW_VERTEXBUF[21] = 1.0;
  PRIMITIVES_TO_DRAW_VERTEXBUF[15] = 1.0;
  PRIMITIVES_TO_DRAW_VERTEXBUF[9] = 1.0;
  PRIMITIVES_TO_DRAW_VERTEXBUF[3] = 1.0;
  PRIMITIVES_TO_DRAW_VERTEXBUF[4] = 0.0;
  PRIMITIVES_TO_DRAW_VERTEXBUF[5] = 0.0;
  PRIMITIVES_TO_DRAW_VERTEXBUF[10] = 1.0;
  PRIMITIVES_TO_DRAW_VERTEXBUF[11] = 0.0;
  PRIMITIVES_TO_DRAW_VERTEXBUF[16] = 0.0;
  PRIMITIVES_TO_DRAW_VERTEXBUF[17] = 1.0;
  PRIMITIVES_TO_DRAW_VERTEXBUF[22] = 1.0;
  PRIMITIVES_TO_DRAW_VERTEXBUF[23] = 1.0;
  g_PrimitivesToDrawNoVertexBuf[24] = 1.0;
  g_PrimitivesToDrawNoVertexBuf[17] = 1.0;
  g_PrimitivesToDrawNoVertexBuf[10] = 1.0;
  g_PrimitivesToDrawNoVertexBuf[3] = 1.0;
  g_PrimitivesToDrawNoVertexBuf[5] = 0.0;
  g_PrimitivesToDrawNoVertexBuf[6] = 0.0;
  g_PrimitivesToDrawNoVertexBuf[12] = 1.0;
  g_PrimitivesToDrawNoVertexBuf[13] = 0.0;
  g_PrimitivesToDrawNoVertexBuf[19] = 0.0;
  g_PrimitivesToDrawNoVertexBuf[20] = 1.0;
  g_PrimitivesToDrawNoVertexBuf[26] = 1.0;
  g_PrimitivesToDrawNoVertexBuf[27] = 1.0;
  this->vertexBuffer = (IDirect3DVertexBuffer8 *)0x0;
  this->currentTexture = (IDirect3DTexture8 *)0x0;
  this->currentBlendMode = '\0';
  this->currentColorOp = '\0';
  this->currentTextureFactor = 1;
  this->currentVertexShader = '\0';
  this->currentZWriteDisable = '\0';
  this->vertexBufferContents[3].position.z = -NAN;
  return this;
}

