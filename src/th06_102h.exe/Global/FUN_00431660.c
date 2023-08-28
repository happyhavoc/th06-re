
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00431660(VeryBigStruct *param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *local_8;
  
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x28) = 0xc3000000;
  *(undefined4 *)param_1->vertex_buffer_contents = 0xc3000000;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x3c) = 0x43000000;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x14) = 0x43000000;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x18) = 0xc3000000;
  *(undefined4 *)(param_1->vertex_buffer_contents + 4) = 0xc3000000;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x40) = 0x43000000;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x2c) = 0x43000000;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x44) = 0;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x30) = 0;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x1c) = 0;
  *(undefined4 *)(param_1->vertex_buffer_contents + 8) = 0;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x34) = 0;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0xc) = 0;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x24) = 0;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x10) = 0;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1->vertex_buffer_contents + 0x38) = 0x3f800000;
  VERTEX_BUFFER_CONTENTS._0_4_ = *(undefined4 *)param_1->vertex_buffer_contents;
  VERTEX_BUFFER_CONTENTS._4_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 4);
  VERTEX_BUFFER_CONTENTS._8_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 8);
  VERTEX_BUFFER_CONTENTS._24_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 0x14);
  VERTEX_BUFFER_CONTENTS._28_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 0x18);
  VERTEX_BUFFER_CONTENTS._32_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 0x1c);
  VERTEX_BUFFER_CONTENTS._48_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 0x28);
  VERTEX_BUFFER_CONTENTS._52_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 0x2c);
  VERTEX_BUFFER_CONTENTS._56_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 0x30);
  VERTEX_BUFFER_CONTENTS._72_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 0x3c);
  VERTEX_BUFFER_CONTENTS._76_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 0x40);
  _DAT_006d46b0 = *(undefined4 *)(param_1->vertex_buffer_contents + 0x44);
  VERTEX_BUFFER_CONTENTS._16_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 0xc);
  VERTEX_BUFFER_CONTENTS._20_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 0x10);
  VERTEX_BUFFER_CONTENTS._40_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 0x20);
  VERTEX_BUFFER_CONTENTS._44_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 0x24);
  VERTEX_BUFFER_CONTENTS._64_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 0x34);
  VERTEX_BUFFER_CONTENTS._68_4_ = *(undefined4 *)(param_1->vertex_buffer_contents + 0x38);
  _DAT_006d46b8 = *(undefined4 *)(param_1->vertex_buffer_contents + 0x48);
  _DAT_006d46bc = *(undefined4 *)(param_1->vertex_buffer_contents + 0x4c);
  if (((uint)g_GameContext.cfg.render_opts >> 1 & 1) == 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->CreateVertexBuffer)
              (g_GameContext.d3d_device,0x50,0,0x102,D3DPOOL_MANAGED,&param_1->vertex_buffer);
    (*param_1->vertex_buffer->lpVtbl->Lock)(param_1->vertex_buffer,0,0,(BYTE **)&local_8,0);
    pbVar2 = param_1->vertex_buffer_contents;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *local_8 = *(undefined4 *)pbVar2;
      pbVar2 = pbVar2 + 4;
      local_8 = local_8 + 1;
    }
    (*param_1->vertex_buffer->lpVtbl->Unlock)(param_1->vertex_buffer);
    (*(g_GameContext.d3d_device)->lpVtbl->SetStreamSource)
              (g_GameContext.d3d_device,0,VERY_BIG_STRUCT->vertex_buffer,0x14);
  }
  return;
}

