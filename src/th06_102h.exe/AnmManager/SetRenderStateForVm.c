
void __thiscall th06::AnmManager::SetRenderStateForVm(AnmManager *this,AnmVm *vm)

{
  if ((uint)this->currentBlendMode != (vm->flags >> 2 & 1)) {
    this->currentBlendMode = (byte)(vm->flags >> 2) & 1;
    if (this->currentBlendMode == '\0') {
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
                (g_Supervisor.d3dDevice,D3DRS_DESTBLEND,D3DBLEND_INVSRCALPHA);
    }
    else {
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
                (g_Supervisor.d3dDevice,D3DRS_DESTBLEND,D3DBLEND_ONE);
    }
  }
  if ((((g_Supervisor.cfg.opts & 1) == 0) && ((g_Supervisor.cfg.opts >> 8 & 1) == 0)) &&
     ((uint)this->currentColorOp != (vm->flags >> 3 & 1))) {
    this->currentColorOp = (byte)(vm->flags >> 3) & 1;
    if (this->currentColorOp == '\0') {
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_Supervisor.d3dDevice,0,D3DTSS_COLOROP,D3DTOP_MODULATE);
    }
    else {
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_Supervisor.d3dDevice,0,D3DTSS_COLOROP,D3DTOP_ADD);
    }
  }
  if ((g_Supervisor.cfg.opts >> DONT_USE_VERTEX_BUF & 1) == 0) {
    if (this->currentTextureFactor != (vm->color).color) {
      this->currentTextureFactor = (D3DCOLOR)vm->color;
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
                (g_Supervisor.d3dDevice,D3DRS_TEXTUREFACTOR,this->currentTextureFactor);
    }
  }
  else {
    g_PrimitivesToDrawNoVertexBuf[0].color = (vm->color).color;
    g_PrimitivesToDrawNoVertexBuf[1].color = (vm->color).color;
    g_PrimitivesToDrawNoVertexBuf[2].color = (vm->color).color;
    g_PrimitivesToDrawNoVertexBuf[3].color = (vm->color).color;
    g_PrimitivesToDrawUnknown[0].diffuse = (vm->color).color;
    g_PrimitivesToDrawUnknown[1].diffuse = (vm->color).color;
    g_PrimitivesToDrawUnknown[2].diffuse = (vm->color).color;
    g_PrimitivesToDrawUnknown[3].diffuse = (vm->color).color;
  }
  if (((g_Supervisor.cfg.opts >> TURN_OFF_DEPTH_TEST & 1) == 0) &&
     ((uint)this->currentZWriteDisable != (vm->flags >> 0xc & 1))) {
    this->currentZWriteDisable = (byte)(vm->flags >> 0xc) & 1;
    if (this->currentZWriteDisable == '\0') {
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
                (g_Supervisor.d3dDevice,D3DRS_ZWRITEENABLE,1);
    }
    else {
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
                (g_Supervisor.d3dDevice,D3DRS_ZWRITEENABLE,0);
    }
  }
  return;
}

