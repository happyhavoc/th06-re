
int __thiscall th06::AnmManager::DrawInner(AnmManager *this,AnmVm *vm,int param_3)

{
  if (param_3 != 0) {
    g_PrimitivesToDrawVertexBuf[0].pos.x = ROUND(g_PrimitivesToDrawVertexBuf[0].pos.x) - 0.5;
    g_PrimitivesToDrawVertexBuf[1].pos.x = ROUND(g_PrimitivesToDrawVertexBuf[1].pos.x) - 0.5;
    g_PrimitivesToDrawVertexBuf[0].pos.y = ROUND(g_PrimitivesToDrawVertexBuf[0].pos.y) - 0.5;
    g_PrimitivesToDrawVertexBuf[2].pos.y = ROUND(g_PrimitivesToDrawVertexBuf[2].pos.y) - 0.5;
    g_PrimitivesToDrawVertexBuf[1].pos.y = g_PrimitivesToDrawVertexBuf[0].pos.y;
    g_PrimitivesToDrawVertexBuf[2].pos.x = g_PrimitivesToDrawVertexBuf[0].pos.x;
    g_PrimitivesToDrawVertexBuf[3].pos.x = g_PrimitivesToDrawVertexBuf[1].pos.x;
    g_PrimitivesToDrawVertexBuf[3].pos.y = g_PrimitivesToDrawVertexBuf[2].pos.y;
  }
  g_PrimitivesToDrawVertexBuf[0].pos.z = (vm->pos).z;
  g_PrimitivesToDrawVertexBuf[1].pos.z = g_PrimitivesToDrawVertexBuf[0].pos.z;
  g_PrimitivesToDrawVertexBuf[2].pos.z = g_PrimitivesToDrawVertexBuf[0].pos.z;
  g_PrimitivesToDrawVertexBuf[3].pos.z = g_PrimitivesToDrawVertexBuf[0].pos.z;
  if (this->currentSprite != vm->sprite) {
    this->currentSprite = vm->sprite;
    g_PrimitivesToDrawVertexBuf[0].textureUV.x = (vm->sprite->uvStart).x + (vm->uvScrollPos).x;
    g_PrimitivesToDrawVertexBuf[1].textureUV.x = (vm->sprite->uvEnd).x + (vm->uvScrollPos).x;
    g_PrimitivesToDrawVertexBuf[0].textureUV.y = (vm->sprite->uvStart).y + (vm->uvScrollPos).y;
    g_PrimitivesToDrawVertexBuf[2].textureUV.y = (vm->sprite->uvEnd).y + (vm->uvScrollPos).y;
    g_PrimitivesToDrawVertexBuf[1].textureUV.y = g_PrimitivesToDrawVertexBuf[0].textureUV.y;
    g_PrimitivesToDrawVertexBuf[2].textureUV.x = g_PrimitivesToDrawVertexBuf[0].textureUV.x;
    g_PrimitivesToDrawVertexBuf[3].textureUV.x = g_PrimitivesToDrawVertexBuf[1].textureUV.x;
    g_PrimitivesToDrawVertexBuf[3].textureUV.y = g_PrimitivesToDrawVertexBuf[2].textureUV.y;
    if (this->currentTexture != this->textures[vm->sprite->sourceFileIndex]) {
      this->currentTexture = this->textures[vm->sprite->sourceFileIndex];
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetTexture)
                (g_Supervisor.d3dDevice,0,(IDirect3DBaseTexture8 *)this->currentTexture);
    }
  }
  if (this->currentVertexShader != '\x02') {
    if ((g_Supervisor.cfg.opts >> DONT_USE_VERTEX_BUF & 1) == 0) {
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetVertexShader)
                (g_Supervisor.d3dDevice,D3DFVF_TEX1 | D3DFVF_XYZRHW);
    }
    else {
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetVertexShader)
                (g_Supervisor.d3dDevice,D3DFVF_TEX1 | D3DFVF_DIFFUSE | D3DFVF_XYZRHW);
    }
    this->currentVertexShader = '\x02';
  }
  SetRenderStateForVm(this,vm);
  if ((g_Supervisor.cfg.opts >> DONT_USE_VERTEX_BUF & 1) == 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->DrawPrimitiveUP)
              (g_Supervisor.d3dDevice,D3DPT_TRIANGLESTRIP,2,g_PrimitivesToDrawVertexBuf,0x18);
  }
  else {
    g_PrimitivesToDrawNoVertexBuf[0].pos.x = g_PrimitivesToDrawVertexBuf[0].pos.x;
    g_PrimitivesToDrawNoVertexBuf[0].pos.y = g_PrimitivesToDrawVertexBuf[0].pos.y;
    g_PrimitivesToDrawNoVertexBuf[0].pos.z = g_PrimitivesToDrawVertexBuf[0].pos.z;
    g_PrimitivesToDrawNoVertexBuf[1].pos.x = g_PrimitivesToDrawVertexBuf[1].pos.x;
    g_PrimitivesToDrawNoVertexBuf[1].pos.y = g_PrimitivesToDrawVertexBuf[1].pos.y;
    g_PrimitivesToDrawNoVertexBuf[1].pos.z = g_PrimitivesToDrawVertexBuf[1].pos.z;
    g_PrimitivesToDrawNoVertexBuf[2].pos.x = g_PrimitivesToDrawVertexBuf[2].pos.x;
    g_PrimitivesToDrawNoVertexBuf[2].pos.y = g_PrimitivesToDrawVertexBuf[2].pos.y;
    g_PrimitivesToDrawNoVertexBuf[2].pos.z = g_PrimitivesToDrawVertexBuf[2].pos.z;
    g_PrimitivesToDrawNoVertexBuf[3].pos.x = g_PrimitivesToDrawVertexBuf[3].pos.x;
    g_PrimitivesToDrawNoVertexBuf[3].pos.y = g_PrimitivesToDrawVertexBuf[3].pos.y;
    g_PrimitivesToDrawNoVertexBuf[3].pos.z = g_PrimitivesToDrawVertexBuf[3].pos.z;
    g_PrimitivesToDrawNoVertexBuf[0].textureUV.x = (vm->sprite->uvStart).x + (vm->uvScrollPos).x;
    g_PrimitivesToDrawNoVertexBuf[1].textureUV.x = (vm->sprite->uvEnd).x + (vm->uvScrollPos).x;
    g_PrimitivesToDrawNoVertexBuf[0].textureUV.y = (vm->sprite->uvStart).y + (vm->uvScrollPos).y;
    g_PrimitivesToDrawNoVertexBuf[2].textureUV.y = (vm->sprite->uvEnd).y + (vm->uvScrollPos).y;
    g_PrimitivesToDrawNoVertexBuf[1].textureUV.y = g_PrimitivesToDrawNoVertexBuf[0].textureUV.y;
    g_PrimitivesToDrawNoVertexBuf[2].textureUV.x = g_PrimitivesToDrawNoVertexBuf[0].textureUV.x;
    g_PrimitivesToDrawNoVertexBuf[3].textureUV.x = g_PrimitivesToDrawNoVertexBuf[1].textureUV.x;
    g_PrimitivesToDrawNoVertexBuf[3].textureUV.y = g_PrimitivesToDrawNoVertexBuf[2].textureUV.y;
    (*(g_Supervisor.d3dDevice)->lpVtbl->DrawPrimitiveUP)
              (g_Supervisor.d3dDevice,D3DPT_TRIANGLESTRIP,2,g_PrimitivesToDrawNoVertexBuf,0x1c);
  }
  return 0;
}

