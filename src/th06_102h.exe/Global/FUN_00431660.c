
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00431660(AnmManager *param_1)

{
  int iVar1;
  RenderVertexInfo *pRVar2;
  float *local_8;
  
  param_1->vertexBufferContents[1].textureUV.x = -128.0;
  param_1->vertexBufferContents[0].position.x = -128.0;
  param_1->vertexBufferContents[2].diffuseColor = 0x43000000;
  param_1->vertexBufferContents[0].textureUV.y = 128.0;
  param_1->vertexBufferContents[1].position.x = -128.0;
  param_1->vertexBufferContents[0].position.y = -128.0;
  param_1->vertexBufferContents[2].textureUV.x = 128.0;
  param_1->vertexBufferContents[1].textureUV.y = 128.0;
  param_1->vertexBufferContents[2].textureUV.y = 0.0;
  param_1->vertexBufferContents[2].position.x = 0.0;
  param_1->vertexBufferContents[1].position.y = 0.0;
  param_1->vertexBufferContents[0].position.z = 0.0;
  param_1->vertexBufferContents[2].position.y = 0.0;
  param_1->vertexBufferContents[0].diffuseColor = 0;
  param_1->vertexBufferContents[3].position.x = 1.0;
  param_1->vertexBufferContents[1].position.z = 1.0;
  param_1->vertexBufferContents[1].diffuseColor = 0;
  param_1->vertexBufferContents[0].textureUV.x = 0.0;
  param_1->vertexBufferContents[3].position.y = 1.0;
  param_1->vertexBufferContents[2].position.z = 1.0;
  VERTEX_BUFFER_CONTENTS._0_4_ = param_1->vertexBufferContents[0].position.x;
  VERTEX_BUFFER_CONTENTS._4_4_ = param_1->vertexBufferContents[0].position.y;
  VERTEX_BUFFER_CONTENTS._8_4_ = param_1->vertexBufferContents[0].position.z;
  VERTEX_BUFFER_CONTENTS._24_4_ = param_1->vertexBufferContents[0].textureUV.y;
  VERTEX_BUFFER_CONTENTS._28_4_ = param_1->vertexBufferContents[1].position.x;
  VERTEX_BUFFER_CONTENTS._32_4_ = param_1->vertexBufferContents[1].position.y;
  VERTEX_BUFFER_CONTENTS._48_4_ = param_1->vertexBufferContents[1].textureUV.x;
  VERTEX_BUFFER_CONTENTS._52_4_ = param_1->vertexBufferContents[1].textureUV.y;
  VERTEX_BUFFER_CONTENTS._56_4_ = param_1->vertexBufferContents[2].position.x;
  VERTEX_BUFFER_CONTENTS._72_4_ = param_1->vertexBufferContents[2].diffuseColor;
  VERTEX_BUFFER_CONTENTS._76_4_ = param_1->vertexBufferContents[2].textureUV.x;
  _DAT_006d46b0 = param_1->vertexBufferContents[2].textureUV.y;
  VERTEX_BUFFER_CONTENTS._16_4_ = param_1->vertexBufferContents[0].diffuseColor;
  VERTEX_BUFFER_CONTENTS._20_4_ = param_1->vertexBufferContents[0].textureUV.x;
  VERTEX_BUFFER_CONTENTS._40_4_ = param_1->vertexBufferContents[1].position.z;
  VERTEX_BUFFER_CONTENTS._44_4_ = param_1->vertexBufferContents[1].diffuseColor;
  VERTEX_BUFFER_CONTENTS._64_4_ = param_1->vertexBufferContents[2].position.y;
  VERTEX_BUFFER_CONTENTS._68_4_ = param_1->vertexBufferContents[2].position.z;
  _DAT_006d46b8 = param_1->vertexBufferContents[3].position.x;
  _DAT_006d46bc = param_1->vertexBufferContents[3].position.y;
  if (((uint)g_GameContext.cfg.render_opts >> 1 & 1) == 0) {
    (*(g_GameContext.d3dDevice)->lpVtbl->CreateVertexBuffer)
              (g_GameContext.d3dDevice,0x50,0,0x102,D3DPOOL_MANAGED,&param_1->vertexBuffer);
    (*param_1->vertexBuffer->lpVtbl->Lock)(param_1->vertexBuffer,0,0,(BYTE **)&local_8,0);
    pRVar2 = param_1->vertexBufferContents;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *local_8 = (pRVar2->position).x;
      pRVar2 = (RenderVertexInfo *)&(pRVar2->position).y;
      local_8 = local_8 + 1;
    }
    (*param_1->vertexBuffer->lpVtbl->Unlock)(param_1->vertexBuffer);
    (*(g_GameContext.d3dDevice)->lpVtbl->SetStreamSource)
              (g_GameContext.d3dDevice,0,g_AnmManager->vertexBuffer,0x14);
  }
  return;
}

