
void __thiscall AnmManager::SetRenderStateForVm(AnmManager *this,AnmVm *vm)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1._0_2_ = vm->flags;
  uVar1._2_1_ = vm->unk_82[0];
  uVar1._3_1_ = vm->unk_82[1];
  if ((uint)this->currentBlendMode != (uVar1 >> 2 & 1)) {
    uVar2._0_2_ = vm->flags;
    uVar2._2_1_ = vm->unk_82[0];
    uVar2._3_1_ = vm->unk_82[1];
    this->currentBlendMode = (byte)(uVar2 >> 2) & 1;
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
     (uVar3._0_2_ = vm->flags, uVar3._2_1_ = vm->unk_82[0], uVar3._3_1_ = vm->unk_82[1],
     (uint)this->currentColorOp != (uVar3 >> 3 & 1))) {
    uVar4._0_2_ = vm->flags;
    uVar4._2_1_ = vm->unk_82[0];
    uVar4._3_1_ = vm->unk_82[1];
    this->currentColorOp = (byte)(uVar4 >> 3) & 1;
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
     (uVar5._0_2_ = vm->flags, uVar5._2_1_ = vm->unk_82[0], uVar5._3_1_ = vm->unk_82[1],
     (uint)this->currentZWriteDisable != (uVar5 >> 0xc & 1))) {
    uVar6._0_2_ = vm->flags;
    uVar6._2_1_ = vm->unk_82[0];
    uVar6._3_1_ = vm->unk_82[1];
    this->currentZWriteDisable = (byte)(uVar6 >> 0xc) & 1;
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

