
int __thiscall AnmManager::FUN_00432730(AnmManager *this,AnmVm *vm,int param_3)

{
  if (param_3 != 0) {
    PRIMITIVES_TO_DRAW_VERTEXBUF[0] = ROUND(PRIMITIVES_TO_DRAW_VERTEXBUF[0]) - 0.5;
    PRIMITIVES_TO_DRAW_VERTEXBUF[6] = ROUND(PRIMITIVES_TO_DRAW_VERTEXBUF[6]) - 0.5;
    PRIMITIVES_TO_DRAW_VERTEXBUF[1] = ROUND(PRIMITIVES_TO_DRAW_VERTEXBUF[1]) - 0.5;
    PRIMITIVES_TO_DRAW_VERTEXBUF[13] = ROUND(PRIMITIVES_TO_DRAW_VERTEXBUF[13]) - 0.5;
    PRIMITIVES_TO_DRAW_VERTEXBUF[7] = PRIMITIVES_TO_DRAW_VERTEXBUF[1];
    PRIMITIVES_TO_DRAW_VERTEXBUF[12] = PRIMITIVES_TO_DRAW_VERTEXBUF[0];
    PRIMITIVES_TO_DRAW_VERTEXBUF[18] = PRIMITIVES_TO_DRAW_VERTEXBUF[6];
    PRIMITIVES_TO_DRAW_VERTEXBUF[19] = PRIMITIVES_TO_DRAW_VERTEXBUF[13];
  }
  PRIMITIVES_TO_DRAW_VERTEXBUF[2] = (vm->pos).z;
  PRIMITIVES_TO_DRAW_VERTEXBUF[8] = PRIMITIVES_TO_DRAW_VERTEXBUF[2];
  PRIMITIVES_TO_DRAW_VERTEXBUF[14] = PRIMITIVES_TO_DRAW_VERTEXBUF[2];
  PRIMITIVES_TO_DRAW_VERTEXBUF[20] = PRIMITIVES_TO_DRAW_VERTEXBUF[2];
  if (this->currentSprite != vm->sprite) {
    this->currentSprite = vm->sprite;
    PRIMITIVES_TO_DRAW_VERTEXBUF[4] = (vm->sprite->uvStart).x + (vm->uvScrollPos).x;
    PRIMITIVES_TO_DRAW_VERTEXBUF[10] = (vm->sprite->uvEnd).x + (vm->uvScrollPos).x;
    PRIMITIVES_TO_DRAW_VERTEXBUF[5] = (vm->sprite->uvStart).y + (vm->uvScrollPos).y;
    PRIMITIVES_TO_DRAW_VERTEXBUF[17] = (vm->sprite->uvEnd).y + (vm->uvScrollPos).y;
    PRIMITIVES_TO_DRAW_VERTEXBUF[11] = PRIMITIVES_TO_DRAW_VERTEXBUF[5];
    PRIMITIVES_TO_DRAW_VERTEXBUF[16] = PRIMITIVES_TO_DRAW_VERTEXBUF[4];
    PRIMITIVES_TO_DRAW_VERTEXBUF[22] = PRIMITIVES_TO_DRAW_VERTEXBUF[10];
    PRIMITIVES_TO_DRAW_VERTEXBUF[23] = PRIMITIVES_TO_DRAW_VERTEXBUF[17];
    if (this->currentTexture != this->textures[vm->sprite->sourceFileIndex]) {
      this->currentTexture = this->textures[vm->sprite->sourceFileIndex];
      (*(g_GameContext.d3dDevice)->lpVtbl->SetTexture)
                (g_GameContext.d3dDevice,0,(IDirect3DBaseTexture8 *)this->currentTexture);
    }
  }
  if (this->currentVertexShader != '\x02') {
    if ((g_GameContext.cfg.opts >> 1 & 1) == 0) {
      (*(g_GameContext.d3dDevice)->lpVtbl->SetVertexShader)(g_GameContext.d3dDevice,0x104);
    }
    else {
      (*(g_GameContext.d3dDevice)->lpVtbl->SetVertexShader)(g_GameContext.d3dDevice,0x144);
    }
    this->currentVertexShader = '\x02';
  }
  FUN_004324d0(this,vm);
  if ((g_GameContext.cfg.opts >> DONT_USE_VERTEX_BUF & 1) == 0) {
    (*(g_GameContext.d3dDevice)->lpVtbl->DrawPrimitiveUP)
              (g_GameContext.d3dDevice,D3DPT_TRIANGLESTRIP,2,PRIMITIVES_TO_DRAW_VERTEXBUF,0x18);
  }
  else {
    g_PrimitivesToDrawNoVertexBuf[0] = PRIMITIVES_TO_DRAW_VERTEXBUF[0];
    g_PrimitivesToDrawNoVertexBuf[1] = PRIMITIVES_TO_DRAW_VERTEXBUF[1];
    g_PrimitivesToDrawNoVertexBuf[2] = PRIMITIVES_TO_DRAW_VERTEXBUF[2];
    g_PrimitivesToDrawNoVertexBuf[7] = PRIMITIVES_TO_DRAW_VERTEXBUF[6];
    g_PrimitivesToDrawNoVertexBuf[8] = PRIMITIVES_TO_DRAW_VERTEXBUF[7];
    g_PrimitivesToDrawNoVertexBuf[9] = PRIMITIVES_TO_DRAW_VERTEXBUF[8];
    g_PrimitivesToDrawNoVertexBuf[14] = PRIMITIVES_TO_DRAW_VERTEXBUF[12];
    g_PrimitivesToDrawNoVertexBuf[15] = PRIMITIVES_TO_DRAW_VERTEXBUF[13];
    g_PrimitivesToDrawNoVertexBuf[16] = PRIMITIVES_TO_DRAW_VERTEXBUF[14];
    g_PrimitivesToDrawNoVertexBuf[21] = PRIMITIVES_TO_DRAW_VERTEXBUF[18];
    g_PrimitivesToDrawNoVertexBuf[22] = PRIMITIVES_TO_DRAW_VERTEXBUF[19];
    g_PrimitivesToDrawNoVertexBuf[23] = PRIMITIVES_TO_DRAW_VERTEXBUF[20];
    g_PrimitivesToDrawNoVertexBuf[5] = (vm->sprite->uvStart).x + (vm->uvScrollPos).x;
    g_PrimitivesToDrawNoVertexBuf[12] = (vm->sprite->uvEnd).x + (vm->uvScrollPos).x;
    g_PrimitivesToDrawNoVertexBuf[6] = (vm->sprite->uvStart).y + (vm->uvScrollPos).y;
    g_PrimitivesToDrawNoVertexBuf[20] = (vm->sprite->uvEnd).y + (vm->uvScrollPos).y;
    g_PrimitivesToDrawNoVertexBuf[13] = g_PrimitivesToDrawNoVertexBuf[6];
    g_PrimitivesToDrawNoVertexBuf[19] = g_PrimitivesToDrawNoVertexBuf[5];
    g_PrimitivesToDrawNoVertexBuf[26] = g_PrimitivesToDrawNoVertexBuf[12];
    g_PrimitivesToDrawNoVertexBuf[27] = g_PrimitivesToDrawNoVertexBuf[20];
    (*(g_GameContext.d3dDevice)->lpVtbl->DrawPrimitiveUP)
              (g_GameContext.d3dDevice,D3DPT_TRIANGLESTRIP,2,g_PrimitivesToDrawNoVertexBuf,0x1c);
  }
  return 0;
}

