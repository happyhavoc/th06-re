
void __thiscall AnmManager::SetupVertexBuffer(AnmManager *this)

{
  int iVar1;
  RenderVertexInfo *pRVar2;
  float *local_8;
  
  this->vertexBufferContents[2].position.x = -128.0;
  this->vertexBufferContents[0].position.x = -128.0;
  this->vertexBufferContents[3].position.x = 128.0;
  this->vertexBufferContents[1].position.x = 128.0;
  this->vertexBufferContents[1].position.y = -128.0;
  this->vertexBufferContents[0].position.y = -128.0;
  this->vertexBufferContents[3].position.y = 128.0;
  this->vertexBufferContents[2].position.y = 128.0;
  this->vertexBufferContents[3].position.z = 0.0;
  this->vertexBufferContents[2].position.z = 0.0;
  this->vertexBufferContents[1].position.z = 0.0;
  this->vertexBufferContents[0].position.z = 0.0;
  this->vertexBufferContents[2].textureUV.x = 0.0;
  this->vertexBufferContents[0].textureUV.x = 0.0;
  this->vertexBufferContents[3].textureUV.x = 1.0;
  this->vertexBufferContents[1].textureUV.x = 1.0;
  this->vertexBufferContents[1].textureUV.y = 0.0;
  this->vertexBufferContents[0].textureUV.y = 0.0;
  this->vertexBufferContents[3].textureUV.y = 1.0;
  this->vertexBufferContents[2].textureUV.y = 1.0;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[0].position.x = this->vertexBufferContents[0].position.x;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[0].position.y = this->vertexBufferContents[0].position.y;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[0].position.z = this->vertexBufferContents[0].position.z;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[1].position.x = this->vertexBufferContents[1].position.x;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[1].position.y = this->vertexBufferContents[1].position.y;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[1].position.z = this->vertexBufferContents[1].position.z;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[2].position.x = this->vertexBufferContents[2].position.x;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[2].position.y = this->vertexBufferContents[2].position.y;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[2].position.z = this->vertexBufferContents[2].position.z;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[3].position.x = this->vertexBufferContents[3].position.x;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[3].position.y = this->vertexBufferContents[3].position.y;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[3].position.z = this->vertexBufferContents[3].position.z;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[0].textureUV.x = this->vertexBufferContents[0].textureUV.x;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[0].textureUV.y = this->vertexBufferContents[0].textureUV.y;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[1].textureUV.x = this->vertexBufferContents[1].textureUV.x;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[1].textureUV.y = this->vertexBufferContents[1].textureUV.y;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[2].textureUV.x = this->vertexBufferContents[2].textureUV.x;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[2].textureUV.y = this->vertexBufferContents[2].textureUV.y;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[3].textureUV.x = this->vertexBufferContents[3].textureUV.x;
  Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660[3].textureUV.y = this->vertexBufferContents[3].textureUV.y;
  if ((g_Supervisor.cfg.opts >> 1 & 1) == 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->CreateVertexBuffer)
              (g_Supervisor.d3dDevice,0x50,0,0x102,D3DPOOL_MANAGED,&this->vertexBuffer);
    (*this->vertexBuffer->lpVtbl->Lock)(this->vertexBuffer,0,0,(BYTE **)&local_8,0);
    pRVar2 = this->vertexBufferContents;
                    /* memcpy(local_8, this->vertexBufferContents, 0x50); */
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *local_8 = (pRVar2->position).x;
      pRVar2 = (RenderVertexInfo *)&(pRVar2->position).y;
      local_8 = local_8 + 1;
    }
    (*this->vertexBuffer->lpVtbl->Unlock)(this->vertexBuffer);
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetStreamSource)
              (g_Supervisor.d3dDevice,0,g_AnmManager->vertexBuffer,0x14);
  }
  return;
}

