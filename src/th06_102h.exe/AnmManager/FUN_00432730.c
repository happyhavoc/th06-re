
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall AnmManager::FUN_00432730(AnmManager *this,AnmVm *vm,int param_3)

{
  if (param_3 != 0) {
    DAT_006d4600 = ROUND(DAT_006d4600) - 0.5;
    DAT_006d4618 = ROUND(DAT_006d4618) - 0.5;
    DAT_006d4604 = ROUND(DAT_006d4604) - 0.5;
    DAT_006d4634 = ROUND(DAT_006d4634) - 0.5;
    DAT_006d461c = DAT_006d4604;
    DAT_006d4630 = DAT_006d4600;
    DAT_006d4648 = DAT_006d4618;
    DAT_006d464c = DAT_006d4634;
  }
  DAT_006d4608 = (vm->pos).z;
  DAT_006d4620 = DAT_006d4608;
  DAT_006d4638 = DAT_006d4608;
  DAT_006d4650 = DAT_006d4608;
  if (this->currentSprite != vm->sprite) {
    this->currentSprite = vm->sprite;
    D3DXVECTOR2_006d4610.x = (vm->sprite->uvStart).x + (vm->uvScrollPos).x;
    D3DXVECTOR2_006d4628.x = (vm->sprite->uvEnd).x + (vm->uvScrollPos).x;
    D3DXVECTOR2_006d4610.y = (vm->sprite->uvStart).y + (vm->uvScrollPos).y;
    _DAT_006d4644 = (vm->sprite->uvEnd).y + (vm->uvScrollPos).y;
    D3DXVECTOR2_006d4628.y = D3DXVECTOR2_006d4610.y;
    DAT_006d4640 = D3DXVECTOR2_006d4610.x;
    DAT_006d4658 = D3DXVECTOR2_006d4628.x;
    DAT_006d465c = _DAT_006d4644;
    if (this->currentTexture != this->textures[vm->sprite->sourceFileIndex]) {
      this->currentTexture = this->textures[vm->sprite->sourceFileIndex];
      (*(g_GameContext.d3dDevice)->lpVtbl->SetTexture)
                (g_GameContext.d3dDevice,0,(IDirect3DBaseTexture8 *)this->currentTexture);
    }
  }
  if (this->field16_0x210be != '\x02') {
    if ((g_GameContext.cfg.opts >> 1 & 1) == 0) {
      (*(g_GameContext.d3dDevice)->lpVtbl->SetVertexShader)(g_GameContext.d3dDevice,0x104);
    }
    else {
      (*(g_GameContext.d3dDevice)->lpVtbl->SetVertexShader)(g_GameContext.d3dDevice,0x144);
    }
    this->field16_0x210be = '\x02';
  }
  FUN_004324d0(this,(int)vm);
  if ((g_GameContext.cfg.opts >> 1 & 1) == 0) {
    (*(g_GameContext.d3dDevice)->lpVtbl->DrawPrimitiveUP)
              (g_GameContext.d3dDevice,D3DPT_TRIANGLESTRIP,2,&DAT_006d4600,0x18);
  }
  else {
    _DAT_006d4590 = DAT_006d4600;
    _DAT_006d4594 = DAT_006d4604;
    _DAT_006d4598 = DAT_006d4608;
    _DAT_006d45ac = DAT_006d4618;
    _DAT_006d45b0 = DAT_006d461c;
    _DAT_006d45b4 = DAT_006d4620;
    _DAT_006d45c8 = DAT_006d4630;
    _DAT_006d45cc = DAT_006d4634;
    _DAT_006d45d0 = DAT_006d4638;
    _DAT_006d45e4 = DAT_006d4648;
    _DAT_006d45e8 = DAT_006d464c;
    _DAT_006d45ec = DAT_006d4650;
    _DAT_006d45a4 = (vm->sprite->uvStart).x + (vm->uvScrollPos).x;
    _DAT_006d45c0 = (vm->sprite->uvEnd).x + (vm->uvScrollPos).x;
    _DAT_006d45a8 = (vm->sprite->uvStart).y + (vm->uvScrollPos).y;
    _DAT_006d45e0 = (vm->sprite->uvEnd).y + (vm->uvScrollPos).y;
    DAT_006d45c4 = _DAT_006d45a8;
    DAT_006d45dc = _DAT_006d45a4;
    DAT_006d45f8 = _DAT_006d45c0;
    DAT_006d45fc = _DAT_006d45e0;
    (*(g_GameContext.d3dDevice)->lpVtbl->DrawPrimitiveUP)
              (g_GameContext.d3dDevice,D3DPT_TRIANGLESTRIP,2,&DAT_006d4590,0x1c);
  }
  return 0;
}

