
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431660(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_8;
  
  *(undefined4 *)(in_ECX + 0x210f0) = 0xc3000000;
  *(undefined4 *)(in_ECX + 0x210c8) = 0xc3000000;
  *(undefined4 *)(in_ECX + 0x21104) = 0x43000000;
  *(undefined4 *)(in_ECX + 0x210dc) = 0x43000000;
  *(undefined4 *)(in_ECX + 0x210e0) = 0xc3000000;
  *(undefined4 *)(in_ECX + 0x210cc) = 0xc3000000;
  *(undefined4 *)(in_ECX + 0x21108) = 0x43000000;
  *(undefined4 *)(in_ECX + 0x210f4) = 0x43000000;
  *(undefined4 *)(in_ECX + 0x2110c) = 0;
  *(undefined4 *)(in_ECX + 0x210f8) = 0;
  *(undefined4 *)(in_ECX + 0x210e4) = 0;
  *(undefined4 *)(in_ECX + 0x210d0) = 0;
  *(undefined4 *)(in_ECX + 0x210fc) = 0;
  *(undefined4 *)(in_ECX + 0x210d4) = 0;
  *(undefined4 *)(in_ECX + 0x21110) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x210e8) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x210ec) = 0;
  *(undefined4 *)(in_ECX + 0x210d8) = 0;
  *(undefined4 *)(in_ECX + 0x21114) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x21100) = 0x3f800000;
  _DAT_006d4660 = *(undefined4 *)(in_ECX + 0x210c8);
  _DAT_006d4664 = *(undefined4 *)(in_ECX + 0x210cc);
  _DAT_006d4668 = *(undefined4 *)(in_ECX + 0x210d0);
  _DAT_006d4678 = *(undefined4 *)(in_ECX + 0x210dc);
  _DAT_006d467c = *(undefined4 *)(in_ECX + 0x210e0);
  _DAT_006d4680 = *(undefined4 *)(in_ECX + 0x210e4);
  _DAT_006d4690 = *(undefined4 *)(in_ECX + 0x210f0);
  _DAT_006d4694 = *(undefined4 *)(in_ECX + 0x210f4);
  _DAT_006d4698 = *(undefined4 *)(in_ECX + 0x210f8);
  _DAT_006d46a8 = *(undefined4 *)(in_ECX + 0x21104);
  _DAT_006d46ac = *(undefined4 *)(in_ECX + 0x21108);
  _DAT_006d46b0 = *(undefined4 *)(in_ECX + 0x2110c);
  _DAT_006d4670 = *(undefined4 *)(in_ECX + 0x210d4);
  _DAT_006d4674 = *(undefined4 *)(in_ECX + 0x210d8);
  _DAT_006d4688 = *(undefined4 *)(in_ECX + 0x210e8);
  _DAT_006d468c = *(undefined4 *)(in_ECX + 0x210ec);
  _DAT_006d46a0 = *(undefined4 *)(in_ECX + 0x210fc);
  _DAT_006d46a4 = *(undefined4 *)(in_ECX + 0x21100);
  _DAT_006d46b8 = *(undefined4 *)(in_ECX + 0x21110);
  _DAT_006d46bc = *(undefined4 *)(in_ECX + 0x21114);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 1 & 1) == 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->CreateVertexBuffer)
              (g_GameContext.d3d_device,0x50,0,0x102,D3DPOOL_MANAGED,
               (IDirect3DVertexBuffer8 **)(in_ECX + 0x210c4));
    (**(code **)(**(int **)(in_ECX + 0x210c4) + 0x2c))
              (*(undefined4 *)(in_ECX + 0x210c4),0,0,&local_8,0);
    puVar2 = (undefined4 *)(in_ECX + 0x210c8);
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *local_8 = *puVar2;
      puVar2 = puVar2 + 1;
      local_8 = local_8 + 1;
    }
    (**(code **)(**(int **)(in_ECX + 0x210c4) + 0x30))(*(undefined4 *)(in_ECX + 0x210c4));
    (*(g_GameContext.d3d_device)->lpVtbl->SetStreamSource)
              (g_GameContext.d3d_device,0,
               (IDirect3DVertexBuffer8 *)VERY_BIG_STRUCT->field19878_0x210c4,0x14);
  }
  return;
}

