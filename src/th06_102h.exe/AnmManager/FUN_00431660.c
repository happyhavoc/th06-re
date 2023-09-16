
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall AnmManager::FUN_00431660(AnmManager *this)

{
  int iVar1;
  RenderVertexInfo *pRVar2;
  float *local_8;
  
  this->vertexBufferContents[1].textureUV.x = -128.0;
  this->vertexBufferContents[0].position.x = -128.0;
  this->vertexBufferContents[2].diffuseColor = 0x43000000;
  this->vertexBufferContents[0].textureUV.y = 128.0;
  this->vertexBufferContents[1].position.x = -128.0;
  this->vertexBufferContents[0].position.y = -128.0;
  this->vertexBufferContents[2].textureUV.x = 128.0;
  this->vertexBufferContents[1].textureUV.y = 128.0;
  this->vertexBufferContents[2].textureUV.y = 0.0;
  this->vertexBufferContents[2].position.x = 0.0;
  this->vertexBufferContents[1].position.y = 0.0;
  this->vertexBufferContents[0].position.z = 0.0;
  this->vertexBufferContents[2].position.y = 0.0;
  this->vertexBufferContents[0].diffuseColor = 0;
  this->vertexBufferContents[3].position.x = 1.0;
  this->vertexBufferContents[1].position.z = 1.0;
  this->vertexBufferContents[1].diffuseColor = 0;
  this->vertexBufferContents[0].textureUV.x = 0.0;
  this->vertexBufferContents[3].position.y = 1.0;
  this->vertexBufferContents[2].position.z = 1.0;
  _DAT_006d4660 = this->vertexBufferContents[0].position.x;
  _DAT_006d4664 = this->vertexBufferContents[0].position.y;
  _DAT_006d4668 = this->vertexBufferContents[0].position.z;
  _DAT_006d4678 = this->vertexBufferContents[0].textureUV.y;
  _DAT_006d467c = this->vertexBufferContents[1].position.x;
  _DAT_006d4680 = this->vertexBufferContents[1].position.y;
  _DAT_006d4690 = this->vertexBufferContents[1].textureUV.x;
  _DAT_006d4694 = this->vertexBufferContents[1].textureUV.y;
  _DAT_006d4698 = this->vertexBufferContents[2].position.x;
  _DAT_006d46a8 = this->vertexBufferContents[2].diffuseColor;
  _DAT_006d46ac = this->vertexBufferContents[2].textureUV.x;
  _DAT_006d46b0 = this->vertexBufferContents[2].textureUV.y;
  _DAT_006d4670 = this->vertexBufferContents[0].diffuseColor;
  _DAT_006d4674 = this->vertexBufferContents[0].textureUV.x;
  _DAT_006d4688 = this->vertexBufferContents[1].position.z;
  _DAT_006d468c = this->vertexBufferContents[1].diffuseColor;
  _DAT_006d46a0 = this->vertexBufferContents[2].position.y;
  _DAT_006d46a4 = this->vertexBufferContents[2].position.z;
  _DAT_006d46b8 = this->vertexBufferContents[3].position.x;
  _DAT_006d46bc = this->vertexBufferContents[3].position.y;
  if ((g_GameContext.cfg.opts >> 1 & 1) == 0) {
    (*(g_GameContext.d3dDevice)->lpVtbl->CreateVertexBuffer)
              (g_GameContext.d3dDevice,0x50,0,0x102,D3DPOOL_MANAGED,&this->vertexBuffer);
    (*this->vertexBuffer->lpVtbl->Lock)(this->vertexBuffer,0,0,(BYTE **)&local_8,0);
    pRVar2 = this->vertexBufferContents;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *local_8 = (pRVar2->position).x;
      pRVar2 = (RenderVertexInfo *)&(pRVar2->position).y;
      local_8 = local_8 + 1;
    }
    (*this->vertexBuffer->lpVtbl->Unlock)(this->vertexBuffer);
    (*(g_GameContext.d3dDevice)->lpVtbl->SetStreamSource)
              (g_GameContext.d3dDevice,0,g_AnmManager->vertexBuffer,0x14);
  }
  return;
}

