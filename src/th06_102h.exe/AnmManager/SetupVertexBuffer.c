
void __thiscall th06::AnmManager::SetupVertexBuffer(AnmManager *this)

{
  int iVar1;
  undefined4 *vertexBufferContents;
  undefined4 *local_8;
  
  *(undefined4 *)(this + 0x210f0) = 0xc3000000;
  *(undefined4 *)(this + 0x210c8) = 0xc3000000;
  *(undefined4 *)(this + 0x21104) = 0x43000000;
  *(undefined4 *)(this + 0x210dc) = 0x43000000;
  *(undefined4 *)(this + 0x210e0) = 0xc3000000;
  *(undefined4 *)(this + 0x210cc) = 0xc3000000;
  *(undefined4 *)(this + 0x21108) = 0x43000000;
  *(undefined4 *)(this + 0x210f4) = 0x43000000;
  *(undefined4 *)(this + 0x2110c) = 0;
  *(undefined4 *)(this + 0x210f8) = 0;
  *(undefined4 *)(this + 0x210e4) = 0;
  *(undefined4 *)(this + 0x210d0) = 0;
  *(undefined4 *)(this + 0x210fc) = 0;
  *(undefined4 *)(this + 0x210d4) = 0;
  *(undefined4 *)(this + 0x21110) = 0x3f800000;
  *(undefined4 *)(this + 0x210e8) = 0x3f800000;
  *(undefined4 *)(this + 0x210ec) = 0;
  *(undefined4 *)(this + 0x210d8) = 0;
  *(undefined4 *)(this + 0x21114) = 0x3f800000;
  *(undefined4 *)(this + 0x21100) = 0x3f800000;
  g_PrimitivesToDrawUnknown[0].position.x = *(float *)(this + 0x210c8);
  g_PrimitivesToDrawUnknown[0].position.y = *(float *)(this + 0x210cc);
  g_PrimitivesToDrawUnknown[0].position.z = *(float *)(this + 0x210d0);
  g_PrimitivesToDrawUnknown[1].position.x = *(float *)(this + 0x210dc);
  g_PrimitivesToDrawUnknown[1].position.y = *(float *)(this + 0x210e0);
  g_PrimitivesToDrawUnknown[1].position.z = *(float *)(this + 0x210e4);
  g_PrimitivesToDrawUnknown[2].position.x = *(float *)(this + 0x210f0);
  g_PrimitivesToDrawUnknown[2].position.y = *(float *)(this + 0x210f4);
  g_PrimitivesToDrawUnknown[2].position.z = *(float *)(this + 0x210f8);
  g_PrimitivesToDrawUnknown[3].position.x = *(float *)(this + 0x21104);
  g_PrimitivesToDrawUnknown[3].position.y = *(float *)(this + 0x21108);
  g_PrimitivesToDrawUnknown[3].position.z = *(float *)(this + 0x2110c);
  g_PrimitivesToDrawUnknown[0].textureUV.x = *(FLOAT *)(this + 0x210d4);
  g_PrimitivesToDrawUnknown[0].textureUV.y = *(FLOAT *)(this + 0x210d8);
  g_PrimitivesToDrawUnknown[1].textureUV.x = *(FLOAT *)(this + 0x210e8);
  g_PrimitivesToDrawUnknown[1].textureUV.y = *(FLOAT *)(this + 0x210ec);
  g_PrimitivesToDrawUnknown[2].textureUV.x = *(FLOAT *)(this + 0x210fc);
  g_PrimitivesToDrawUnknown[2].textureUV.y = *(FLOAT *)(this + 0x21100);
  g_PrimitivesToDrawUnknown[3].textureUV.x = *(FLOAT *)(this + 0x21110);
  g_PrimitivesToDrawUnknown[3].textureUV.y = *(FLOAT *)(this + 0x21114);
  if ((g_Supervisor.cfg.opts >> 1 & 1) == 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->CreateVertexBuffer)
              (g_Supervisor.d3dDevice,0x50,0,0x102,D3DPOOL_MANAGED,
               (IDirect3DVertexBuffer8 **)(this + 0x210c4));
    (**(code **)(**(int **)(this + 0x210c4) + 0x2c))(*(undefined4 *)(this + 0x210c4),0,0,&local_8,0)
    ;
    vertexBufferContents = (undefined4 *)(this + 0x210c8);
                    /* memcpy(local_8, this->vertexBufferContents, 0x50); */
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *local_8 = *vertexBufferContents;
      vertexBufferContents = vertexBufferContents + 1;
      local_8 = local_8 + 1;
    }
    (**(code **)(**(int **)(this + 0x210c4) + 0x30))(*(undefined4 *)(this + 0x210c4));
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetStreamSource)
              (g_Supervisor.d3dDevice,0,g_AnmManager->vertexBuffer,0x14);
  }
  return;
}

