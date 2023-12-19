
ZunResult __thiscall
AnmManager::CreateEmptyTexture
          (AnmManager *this,uint textureIdx,uint width,uint height,uint textureFormat)

{
  D3DXCreateTexture(g_Supervisor.d3dDevice,width,height,1,0,
                    g_TextureFormatD3D8Mapping[textureFormat],D3DPOOL_MANAGED,
                    this->textures + textureIdx);
  return ZUN_SUCCESS;
}

