
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00432730(VeryBigStruct *this,int param_2,int param_3)

{
  if (param_3 != 0) {
    TRIANGLE_STRIP[0].x = ROUND(TRIANGLE_STRIP[0].x) - 0.5;
    TRIANGLE_STRIP[2].x = ROUND(TRIANGLE_STRIP[2].x) - 0.5;
    TRIANGLE_STRIP[0].y = ROUND(TRIANGLE_STRIP[0].y) - 0.5;
    FLOAT_006d4634 = ROUND(FLOAT_006d4634) - 0.5;
    TRIANGLE_STRIP[2].y = TRIANGLE_STRIP[0].y;
    FLOAT_006d4630 = TRIANGLE_STRIP[0].x;
    FLOAT_006d4648 = TRIANGLE_STRIP[2].x;
    FLOAT_006d464c = FLOAT_006d4634;
  }
  TRIANGLE_STRIP[0].z = *(float *)(param_2 + 0x98);
  TRIANGLE_STRIP[2].z = TRIANGLE_STRIP[0].z;
  DAT_006d4638 = TRIANGLE_STRIP[0].z;
  DAT_006d4650 = TRIANGLE_STRIP[0].z;
  if (*(int *)&this->field_0x210c0 != *(int *)(param_2 + 0xc0)) {
    *(undefined4 *)&this->field_0x210c0 = *(undefined4 *)(param_2 + 0xc0);
    TRIANGLE_STRIP[1].y = *(float *)(*(int *)(param_2 + 0xc0) + 0x1c) + *(float *)(param_2 + 0x28);
    TRIANGLE_STRIP[3].y = *(float *)(*(int *)(param_2 + 0xc0) + 0x24) + *(float *)(param_2 + 0x28);
    TRIANGLE_STRIP[1].z = *(float *)(*(int *)(param_2 + 0xc0) + 0x20) + *(float *)(param_2 + 0x2c);
    FLOAT_006d4644 = *(float *)(*(int *)(param_2 + 0xc0) + 0x28) + *(float *)(param_2 + 0x2c);
    TRIANGLE_STRIP[3].z = TRIANGLE_STRIP[1].z;
    DAT_006d4640 = TRIANGLE_STRIP[1].y;
    FLOAT_006d4658 = TRIANGLE_STRIP[3].y;
    FLOAT_006d465c = FLOAT_006d4644;
    if ((IDirect3DTexture8 *)this->curTexture != this->texture_i_think[**(int **)(param_2 + 0xc0)])
    {
      this->curTexture = (int)this->texture_i_think[**(int **)(param_2 + 0xc0)];
      (*(g_GameContext.d3d_device)->lpVtbl->SetTexture)
                (g_GameContext.d3d_device,0,(IDirect3DBaseTexture8 *)this->curTexture);
    }
  }
  if (this->field_0x210be != '\x02') {
    if (((uint)g_GameContext.cfg.render_opts >> 1 & 1) == 0) {
      (*(g_GameContext.d3d_device)->lpVtbl->SetVertexShader)(g_GameContext.d3d_device,0x104);
    }
    else {
      (*(g_GameContext.d3d_device)->lpVtbl->SetVertexShader)(g_GameContext.d3d_device,0x144);
    }
    this->field_0x210be = 2;
  }
  FUN_004324d0(this,param_2);
  if (((uint)g_GameContext.cfg.render_opts >> 1 & 1) == 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->DrawPrimitiveUP)
              (g_GameContext.d3d_device,D3DPT_TRIANGLESTRIP,2,TRIANGLE_STRIP,0x18);
  }
  else {
    _DAT_006d4590 = TRIANGLE_STRIP[0].x;
    _DAT_006d4594 = TRIANGLE_STRIP[0].y;
    _DAT_006d4598 = TRIANGLE_STRIP[0].z;
    _DAT_006d45ac = TRIANGLE_STRIP[2].x;
    _DAT_006d45b0 = TRIANGLE_STRIP[2].y;
    _DAT_006d45b4 = TRIANGLE_STRIP[2].z;
    _DAT_006d45c8 = FLOAT_006d4630;
    _DAT_006d45cc = FLOAT_006d4634;
    _DAT_006d45d0 = DAT_006d4638;
    _DAT_006d45e4 = FLOAT_006d4648;
    _DAT_006d45e8 = FLOAT_006d464c;
    _DAT_006d45ec = DAT_006d4650;
    UINT_006d45a4 = (uint)(*(float *)(*(int *)(param_2 + 0xc0) + 0x1c) + *(float *)(param_2 + 0x28))
    ;
    FLOAT_006d45c0 = *(float *)(*(int *)(param_2 + 0xc0) + 0x24) + *(float *)(param_2 + 0x28);
    UINT_006d45a8 = (uint)(*(float *)(*(int *)(param_2 + 0xc0) + 0x20) + *(float *)(param_2 + 0x2c))
    ;
    FLOAT_006d45e0 = *(float *)(*(int *)(param_2 + 0xc0) + 0x28) + *(float *)(param_2 + 0x2c);
    DAT_006d45c4 = (float)UINT_006d45a8;
    DAT_006d45dc = (float)UINT_006d45a4;
    DAT_006d45f8 = FLOAT_006d45c0;
    DAT_006d45fc = FLOAT_006d45e0;
    (*(g_GameContext.d3d_device)->lpVtbl->DrawPrimitiveUP)
              (g_GameContext.d3d_device,D3DPT_TRIANGLESTRIP,2,&DAT_006d4590,0x1c);
  }
  return 0;
}

