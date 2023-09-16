
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  DAT_006d4654 = 0x3f800000;
  DAT_006d463c = 0x3f800000;
  DAT_006d4624 = 0x3f800000;
  _DAT_006d460c = 0x3f800000;
  _DAT_006d4610 = 0;
  _DAT_006d4614 = 0;
  _DAT_006d4628 = 0x3f800000;
  DAT_006d462c = 0;
  DAT_006d4640 = 0;
  _DAT_006d4644 = 0x3f800000;
  DAT_006d4658 = 0x3f800000;
  DAT_006d465c = 0x3f800000;
  DAT_006d45f0 = 0x3f800000;
  DAT_006d45d4 = 0x3f800000;
  DAT_006d45b8 = 0x3f800000;
  _DAT_006d459c = 0x3f800000;
  _DAT_006d45a4 = 0;
  _DAT_006d45a8 = 0;
  _DAT_006d45c0 = 0x3f800000;
  DAT_006d45c4 = 0;
  DAT_006d45dc = 0;
  _DAT_006d45e0 = 0x3f800000;
  DAT_006d45f8 = 0x3f800000;
  DAT_006d45fc = 0x3f800000;
  this->vertexBuffer = (IDirect3DVertexBuffer8 *)0x0;
  this->currentTexture = (IDirect3DTexture8 *)0x0;
  this->currentBlendMode = '\0';
  this->currentColorOp = '\0';
  this->currentTextureFactor = 1;
  this->field16_0x210be = '\0';
  this->currentZWriteDisable = '\0';
  this->vertexBufferContents[3].position.z = -NAN;
  return this;
}

