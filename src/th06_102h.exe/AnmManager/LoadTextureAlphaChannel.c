
ZunResult __thiscall
th06::AnmManager::LoadTextureAlphaChannel
          (AnmManager *this,int texture_index,char *texture_path,int format_index,D3DCOLOR color_key
          )

{
  HRESULT res;
  uint x2;
  uint y2;
  u16 *a4r4g4b4_src_data;
  u16 *a4r4g4b4_dst_data;
  uint x1;
  uint y1;
  u16 *a1r5g5b5_src_data;
  u16 *a1r5g5b5_dst_data;
  uint x0;
  uint y0;
  u8 *a8r8g8b8_src_data;
  u8 *a8r8g8b8_dst_data;
  IDirect3DTexture8 *texture_src;
  D3DLOCKED_RECT locked_rect_src;
  D3DLOCKED_RECT locked_rect_dst;
  byte *data;
  D3DSURFACE_DESC surface_desc;
  
  texture_src = (IDirect3DTexture8 *)0x0;
  data = FileSystem::OpenPath(texture_path,0);
  if (data != (byte *)0x0) {
    (*this->textures[texture_index]->lpVtbl->GetLevelDesc)
              (this->textures[texture_index],0,&surface_desc);
    if (((surface_desc.Format == D3DFMT_A8R8G8B8) || (surface_desc.Format == D3DFMT_A4R4G4B4)) ||
       (surface_desc.Format == D3DFMT_A1R5G5B5)) {
      res = D3DXCreateTextureFromFileInMemoryEx
                      (g_Supervisor.d3dDevice,data,g_LastFileSize,0,0,0,0,surface_desc.Format,
                       D3DPOOL_SYSTEMMEM,3,0xffffffff,color_key,(D3DXIMAGE_INFO *)0x0,
                       (PALETTEENTRY *)0x0,&texture_src);
      if (((res == 0) &&
          (res = (*this->textures[texture_index]->lpVtbl->LockRect)
                           (this->textures[texture_index],0,&locked_rect_dst,(RECT *)0x0,0),
          res == 0)) &&
         (res = (*texture_src->lpVtbl->LockRect)(texture_src,0,&locked_rect_src,(RECT *)0x0,0x8000),
         res == 0)) {
        if (surface_desc.Format == D3DFMT_A8R8G8B8) {
          for (y0 = 0; y0 < surface_desc.Height; y0 = y0 + 1) {
            a8r8g8b8_dst_data = (u8 *)((int)locked_rect_dst.pBits + y0 * locked_rect_dst.Pitch);
            a8r8g8b8_src_data = (u8 *)((int)locked_rect_src.pBits + y0 * locked_rect_src.Pitch);
            for (x0 = 0; x0 < surface_desc.Width; x0 = x0 + 1) {
              a8r8g8b8_dst_data[3] = *a8r8g8b8_src_data;
              a8r8g8b8_src_data = a8r8g8b8_src_data + 4;
              a8r8g8b8_dst_data = a8r8g8b8_dst_data + 4;
            }
          }
        }
        else if (surface_desc.Format == D3DFMT_A1R5G5B5) {
          for (y1 = 0; y1 < surface_desc.Height; y1 = y1 + 1) {
            a1r5g5b5_dst_data = (u16 *)((int)locked_rect_dst.pBits + y1 * locked_rect_dst.Pitch);
            a1r5g5b5_src_data = (u16 *)((int)locked_rect_src.pBits + y1 * locked_rect_src.Pitch);
            for (x1 = 0; x1 < surface_desc.Width; x1 = x1 + 1) {
              *a1r5g5b5_dst_data =
                   *a1r5g5b5_dst_data & 0x7fff |
                   (short)((int)(uint)(*a1r5g5b5_src_data & 0x1f) >> 4) << 0xf;
              a1r5g5b5_src_data = a1r5g5b5_src_data + 1;
              a1r5g5b5_dst_data = a1r5g5b5_dst_data + 1;
            }
          }
        }
        else if (surface_desc.Format == D3DFMT_A4R4G4B4) {
          for (y2 = 0; y2 < surface_desc.Height; y2 = y2 + 1) {
            a4r4g4b4_dst_data = (u16 *)((int)locked_rect_dst.pBits + y2 * locked_rect_dst.Pitch);
            a4r4g4b4_src_data = (u16 *)((int)locked_rect_src.pBits + y2 * locked_rect_src.Pitch);
            for (x2 = 0; x2 < surface_desc.Width; x2 = x2 + 1) {
              *a4r4g4b4_dst_data = *a4r4g4b4_dst_data & 0xfff | *a4r4g4b4_src_data << 0xc;
              a4r4g4b4_src_data = a4r4g4b4_src_data + 1;
              a4r4g4b4_dst_data = a4r4g4b4_dst_data + 1;
            }
          }
        }
        (*texture_src->lpVtbl->UnlockRect)(texture_src,0);
        (*this->textures[texture_index]->lpVtbl->UnlockRect)(this->textures[texture_index],0);
        if (texture_src != (IDirect3DTexture8 *)0x0) {
          (*texture_src->lpVtbl->Release)(texture_src);
          texture_src = (IDirect3DTexture8 *)0x0;
        }
        _free(data);
        return ZUN_SUCCESS;
      }
    }
    else {
      GameErrorContext::Fatal
                (&g_GameErrorContext,"error : イメージがαを持っていません\n");
    }
    if (texture_src != (IDirect3DTexture8 *)0x0) {
      (*texture_src->lpVtbl->Release)(texture_src);
      texture_src = (IDirect3DTexture8 *)0x0;
    }
    _free(data);
  }
  return ZUN_ERROR;
}

