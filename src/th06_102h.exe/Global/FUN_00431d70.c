
undefined4 FUN_00431d70(int param_1,UINT param_2,UINT param_3,int param_4)

{
  int in_ECX;
  
  _D3DXCreateTexture_32
            (g_GameContext.d3dDevice,param_2,param_3,1,0,g_TextureFormatD3D8Mapping[param_4],
             D3DPOOL_MANAGED,(LPDIRECT3DTEXTURE8 *)(in_ECX + 0x1c110 + param_1 * 4));
  return 0;
}

