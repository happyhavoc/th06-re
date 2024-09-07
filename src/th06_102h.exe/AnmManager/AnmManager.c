
AnmManager * __thiscall th06::AnmManager::AnmManager(AnmManager *this)

{
  int iVar1;
  undefined4 *puVar2;
  int local_1c;
  int sprite_index;
  
  AnmVm::AnmVm((AnmVm *)(this + 0x1c000));
  local_1c = 4;
  do {
    local_1c = local_1c + -1;
  } while (-1 < local_1c);
  *(undefined4 *)(this + 0x1c930) = 0;
  puVar2 = (undefined4 *)this;
                    /* memset(this, 0, sizeof(this));
                       
                       Yes, this makes everything that happened above useless.
                       
                       Could this be UB? Probably? */
  for (iVar1 = 0x844b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (sprite_index = 0; sprite_index < 0x800; sprite_index = sprite_index + 1) {
    *(undefined4 *)(this + sprite_index * 0x38) = 0xffffffff;
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
  *(undefined4 *)(this + 0x210c4) = 0;
  *(undefined4 *)(this + 0x210b8) = 0;
  this[0x210bc] = (AnmManager)0x0;
  this[0x210bd] = (AnmManager)0x0;
  *(undefined4 *)(this + 0x210b4) = 1;
  this[0x210be] = (AnmManager)0x0;
  this[0x210bf] = (AnmManager)0x0;
  *(undefined4 *)(this + 0x21118) = 0xffffffff;
  return (AnmManager *)this;
}

