
ZunResult __thiscall
AnmManager::LoadTexture
          (AnmManager *this,uint texture_index,char *texture_path,uint format_index,
          D3DCOLOR color_key)

{
  byte *image_data;
  ZunResult res;
  HRESULT directx_res;
  
  ReleaseTexture(this,texture_index);
  image_data = FileSystem::OpenPath(texture_path,0);
  this->imageDataArray[texture_index] = image_data;
  if (this->imageDataArray[texture_index] == (void *)0x0) {
    res = ZUN_ERROR;
  }
  else {
    if ((g_Supervisor.cfg.opts >> FORCE_16BIT_COLOR_MODE & 1) != 0) {
      if ((g_TextureFormatD3D8Mapping[format_index] == D3DFMT_A8R8G8B8) ||
         (g_TextureFormatD3D8Mapping[format_index] == D3DFMT_UNKNOWN)) {
        format_index = 5;
      }
      else if (g_TextureFormatD3D8Mapping[format_index] == D3DFMT_R8G8B8) {
        format_index = 3;
      }
    }
    directx_res = D3DXCreateTextureFromFileInMemoryEx
                            (g_Supervisor.d3dDevice,this->imageDataArray[texture_index],
                             g_LastFileSize,0,0,0,0,g_TextureFormatD3D8Mapping[format_index],
                             D3DPOOL_MANAGED,3,0xffffffff,color_key,(D3DXIMAGE_INFO *)0x0,
                             (PALETTEENTRY *)0x0,this->textures + texture_index);
    if (directx_res == 0) {
      res = ZUN_SUCCESS;
    }
    else {
      res = ZUN_ERROR;
    }
  }
  return res;
}

