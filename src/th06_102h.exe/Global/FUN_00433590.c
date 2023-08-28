
undefined4 FUN_00433590(float *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  float *pfVar3;
  D3DMATRIX *pDVar4;
  D3DMATRIX local_c4 [2];
  D3DMATRIX local_44;
  
  if (((uint)param_1[0x20] & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else if (((uint)param_1[0x20] >> 1 & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else if (((NAN(*param_1) == (*param_1 == 0.0)) || (NAN(param_1[1]) == (param_1[1] == 0.0))) ||
          (NAN(param_1[2]) == (param_1[2] == 0.0))) {
    uVar1 = FUN_00433150(param_1);
  }
  else if (param_1[0x1f] == 0.0) {
    uVar1 = 0xffffffff;
  }
  else {
    pfVar3 = param_1 + 0xf;
    pDVar4 = local_c4;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      (pDVar4->field0_0x0).field0._11 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pDVar4 = (D3DMATRIX *)((int)&pDVar4->field0_0x0 + 4);
    }
    local_c4[0].field0_0x0.field0._41 = ROUND(param_1[0x24]) - 0.5;
    local_c4[0].field0_0x0.field0._42 = -ROUND(param_1[0x25]) + 0.5;
    if (((uint)param_1[0x20] >> 8 & 1) != 0) {
      local_c4[0].field0_0x0.field0._41 =
           (*(float *)((int)param_1[0x30] + 0x30) * param_1[7]) / 2.0 +
           local_c4[0].field0_0x0.field0._41;
    }
    if (((uint)param_1[0x20] >> 8 & 2) != 0) {
      local_c4[0].field0_0x0.field0._42 =
           local_c4[0].field0_0x0.field0._42 -
           (*(float *)((int)param_1[0x30] + 0x2c) * param_1[6]) / 2.0;
    }
    local_c4[0].field0_0x0.field0._43 = param_1[0x26];
    local_c4[0].field0_0x0.field0._11 = local_c4[0].field0_0x0.field0._11 * param_1[7];
    local_c4[0].field0_0x0.field0._22 = -param_1[6] * local_c4[0].field0_0x0.field0._22;
    (*(g_GameContext.d3d_device)->lpVtbl->SetTransform)(g_GameContext.d3d_device,0x100,local_c4);
    if (*(float *)(in_ECX + 0x210c0) != param_1[0x30]) {
      *(float *)(in_ECX + 0x210c0) = param_1[0x30];
      pfVar3 = param_1 + 0xf;
      pDVar4 = &local_44;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pDVar4->field0_0x0).field0._11 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pDVar4 = (D3DMATRIX *)((int)&pDVar4->field0_0x0 + 4);
      }
      local_44.field0_0x0.field0._31 = *(float *)((int)param_1[0x30] + 0x1c) + param_1[10];
      local_44.field0_0x0.field0._32 = *(float *)((int)param_1[0x30] + 0x20) + param_1[0xb];
      (*(g_GameContext.d3d_device)->lpVtbl->SetTransform)
                (g_GameContext.d3d_device,D3DTS_TEXTURE0,&local_44);
      if (*(int *)(in_ECX + 0x210b8) != *(int *)(in_ECX + 0x1c110 + *(int *)param_1[0x30] * 4)) {
        *(undefined4 *)(in_ECX + 0x210b8) =
             *(undefined4 *)(in_ECX + 0x1c110 + *(int *)param_1[0x30] * 4);
        (*(g_GameContext.d3d_device)->lpVtbl->SetTexture)
                  (g_GameContext.d3d_device,0,*(IDirect3DBaseTexture8 **)(in_ECX + 0x210b8));
      }
      if (*(char *)(in_ECX + 0x210be) != '\x03') {
        if (((uint)g_GameContext.cfg.render_opts >> 1 & 1) == 0) {
          (*(g_GameContext.d3d_device)->lpVtbl->SetVertexShader)(g_GameContext.d3d_device,0x102);
          (*(g_GameContext.d3d_device)->lpVtbl->SetStreamSource)
                    (g_GameContext.d3d_device,0,*(IDirect3DVertexBuffer8 **)(in_ECX + 0x210c4),0x14)
          ;
        }
        else {
          (*(g_GameContext.d3d_device)->lpVtbl->SetVertexShader)(g_GameContext.d3d_device,0x142);
        }
        *(undefined *)(in_ECX + 0x210be) = 3;
      }
    }
    FUN_004324d0(param_1);
    if (((uint)g_GameContext.cfg.render_opts >> 1 & 1) == 0) {
      (*(g_GameContext.d3d_device)->lpVtbl->DrawPrimitive)
                (g_GameContext.d3d_device,D3DPT_TRIANGLESTRIP,0,2);
    }
    else {
      (*(g_GameContext.d3d_device)->lpVtbl->DrawPrimitiveUP)
                (g_GameContext.d3d_device,D3DPT_TRIANGLESTRIP,2,VERTEX_BUFFER_CONTENTS,0x18);
    }
    uVar1 = 0;
  }
  return uVar1;
}

