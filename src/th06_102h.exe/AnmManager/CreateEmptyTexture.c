
ZunResult __thiscall
th06::AnmManager::CreateEmptyTexture
          (AnmManager *this,uint textureIdx,uint width,uint height,uint textureFormat)

{
  D3DXCreateTexture(g_Supervisor.d3dDevice,width,height,1,0,
                    g_TextureFormatD3D8Mapping[textureFormat],D3DPOOL_MANAGED,
                    (LPDIRECT3DTEXTURE8 *)(this + textureIdx * 4 + 0x1c110));
  return ZUN_SUCCESS;
}

