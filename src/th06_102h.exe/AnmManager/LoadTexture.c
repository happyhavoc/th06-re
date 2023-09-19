
int __thiscall
AnmManager::LoadTexture
          (AnmManager *this,int texture_index,char *texture_path,int format_index,D3DCOLOR color_key
          )

{
  byte *image_data;
  int res;
  HRESULT directx_res;
  
  ReleaseTexture(this,texture_index);
  image_data = OpenPath(texture_path,0);
  this->imageDataArray[texture_index] = image_data;
  if (this->imageDataArray[texture_index] == (void *)0x0) {
    res = -1;
  }
  else {
    if ((g_GameContext.cfg.opts >> FORCE_16BIT_COLOR_MODE & 1) != 0) {
      if ((g_TextureFormatD3D8Mapping[format_index] == D3DFMT_A8R8G8B8) ||
         (g_TextureFormatD3D8Mapping[format_index] == D3DFMT_UNKNOWN)) {
        format_index = 5;
      }
      else if (g_TextureFormatD3D8Mapping[format_index] == D3DFMT_R8G8B8) {
        format_index = 3;
      }
    }
    directx_res = _D3DXCreateTextureFromFileInMemoryEx_60
                            (g_GameContext.d3dDevice,this->imageDataArray[texture_index],
                             g_LastFileSize,0,0,0,0,g_TextureFormatD3D8Mapping[format_index],
                             D3DPOOL_MANAGED,3,0xffffffff,color_key,(D3DXIMAGE_INFO *)0x0,
                             (PALETTEENTRY *)0x0,this->textures + texture_index);
    if (directx_res == 0) {
      res = 0;
    }
    else {
      res = -1;
    }
  }
  return res;
}

