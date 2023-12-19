
ZunResult __thiscall
AnmManager::LoadTextureMipmap
          (AnmManager *this,uint texture_index,char *texture_path,uint format_index,
          D3DCOLOR color_key)

{
  HRESULT HVar1;
  uint local_6c;
  uint local_68;
  short *local_64;
  ushort *local_60;
  uint local_5c;
  uint local_58;
  ushort *local_54;
  ushort *local_50;
  uint local_4c;
  uint local_48;
  undefined *local_44;
  void *local_40;
  IDirect3DTexture8 *local_3c;
  D3DLOCKED_RECT local_38;
  D3DLOCKED_RECT local_30;
  byte *local_28;
  D3DSURFACE_DESC local_24;
  
  local_3c = (IDirect3DTexture8 *)0x0;
  local_28 = FileSystem::OpenPath(texture_path,0);
  if (local_28 != (byte *)0x0) {
    (*this->textures[texture_index]->lpVtbl->GetLevelDesc)
              (this->textures[texture_index],0,&local_24);
    if (((local_24.Format == D3DFMT_A8R8G8B8) || (local_24.Format == D3DFMT_A4R4G4B4)) ||
       (local_24.Format == D3DFMT_A1R5G5B5)) {
      HVar1 = D3DXCreateTextureFromFileInMemoryEx
                        (g_Supervisor.d3dDevice,local_28,g_LastFileSize,0,0,0,0,local_24.Format,
                         D3DPOOL_SYSTEMMEM,3,0xffffffff,color_key,(D3DXIMAGE_INFO *)0x0,
                         (PALETTEENTRY *)0x0,&local_3c);
      if (((HVar1 == 0) &&
          (HVar1 = (*this->textures[texture_index]->lpVtbl->LockRect)
                             (this->textures[texture_index],0,&local_30,(RECT *)0x0,0), HVar1 == 0))
         && (HVar1 = (*local_3c->lpVtbl->LockRect)(local_3c,0,&local_38,(RECT *)0x0,0x8000),
            HVar1 == 0)) {
        if (local_24.Format == D3DFMT_A8R8G8B8) {
          for (local_48 = 0; local_48 < local_24.Height; local_48 = local_48 + 1) {
            local_40 = (void *)((int)local_30.pBits + local_48 * local_30.Pitch);
            local_44 = (undefined *)((int)local_38.pBits + local_48 * local_38.Pitch);
            for (local_4c = 0; local_4c < local_24.Width; local_4c = local_4c + 1) {
              *(undefined *)((int)local_40 + 3) = *local_44;
              local_44 = local_44 + 4;
              local_40 = (void *)((int)local_40 + 4);
            }
          }
        }
        else if (local_24.Format == D3DFMT_A1R5G5B5) {
          for (local_58 = 0; local_58 < local_24.Height; local_58 = local_58 + 1) {
            local_50 = (ushort *)((int)local_30.pBits + local_58 * local_30.Pitch);
            local_54 = (ushort *)((int)local_38.pBits + local_58 * local_38.Pitch);
            for (local_5c = 0; local_5c < local_24.Width; local_5c = local_5c + 1) {
              *local_50 = *local_50 & 0x7fff | (short)((int)(uint)(*local_54 & 0x1f) >> 4) << 0xf;
              local_54 = local_54 + 1;
              local_50 = local_50 + 1;
            }
          }
        }
        else if (local_24.Format == D3DFMT_A4R4G4B4) {
          for (local_68 = 0; local_68 < local_24.Height; local_68 = local_68 + 1) {
            local_60 = (ushort *)((int)local_30.pBits + local_68 * local_30.Pitch);
            local_64 = (short *)((int)local_38.pBits + local_68 * local_38.Pitch);
            for (local_6c = 0; local_6c < local_24.Width; local_6c = local_6c + 1) {
              *local_60 = *local_60 & 0xfff | *local_64 << 0xc;
              local_64 = local_64 + 1;
              local_60 = local_60 + 1;
            }
          }
        }
        (*local_3c->lpVtbl->UnlockRect)(local_3c,0);
        (*this->textures[texture_index]->lpVtbl->UnlockRect)(this->textures[texture_index],0);
        if (local_3c != (IDirect3DTexture8 *)0x0) {
          (*local_3c->lpVtbl->Release)(local_3c);
          local_3c = (IDirect3DTexture8 *)0x0;
        }
        _free(local_28);
        return ZUN_SUCCESS;
      }
    }
    else {
      GameErrorContextFatal
                (&g_GameErrorContext,"error : イメージがαを持っていません\n");
    }
    if (local_3c != (IDirect3DTexture8 *)0x0) {
      (*local_3c->lpVtbl->Release)(local_3c);
      local_3c = (IDirect3DTexture8 *)0x0;
    }
    _free(local_28);
  }
  return ZUN_ERROR;
}

