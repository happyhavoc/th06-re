
undefined4 __thiscall
VeryBigStruct::Unknown
          (VeryBigStruct *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  HRESULT HVar2;
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
  int *local_3c;
  int local_38;
  int local_34;
  D3DLOCKED_RECT local_30;
  byte *local_28;
  D3DSURFACE_DESC local_24;
  
  local_3c = (int *)0x0;
  local_28 = OpenPath(param_2,0);
  if (local_28 != (byte *)0x0) {
    (*this->texture_i_think[param_1]->lpVtbl->GetLevelDesc)
              (this->texture_i_think[param_1],0,&local_24);
    if (((local_24.Format == D3DFMT_A8R8G8B8) || (local_24.Format == D3DFMT_A4R4G4B4)) ||
       (local_24.Format == D3DFMT_A1R5G5B5)) {
      iVar1 = _D3DXCreateTextureFromFileInMemoryEx_60
                        (g_GameContext.d3dDevice,local_28,g_FileSize,0,0,0,0,local_24.Format,2,3,
                         0xffffffff,param_4,0,0,&local_3c);
      if (((iVar1 == 0) &&
          (HVar2 = (*this->texture_i_think[param_1]->lpVtbl->LockRect)
                             (this->texture_i_think[param_1],0,&local_30,(RECT *)0x0,0), HVar2 == 0)
          ) && (iVar1 = (**(code **)(*local_3c + 0x40))(local_3c,0,&local_38,0,0x8000), iVar1 == 0))
      {
        if (local_24.Format == D3DFMT_A8R8G8B8) {
          for (local_48 = 0; local_48 < local_24.Height; local_48 = local_48 + 1) {
            local_40 = (void *)((int)local_30.pBits + local_48 * local_30.Pitch);
            local_44 = (undefined *)(local_34 + local_48 * local_38);
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
            local_54 = (ushort *)(local_34 + local_58 * local_38);
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
            local_64 = (short *)(local_34 + local_68 * local_38);
            for (local_6c = 0; local_6c < local_24.Width; local_6c = local_6c + 1) {
              *local_60 = *local_60 & 0xfff | *local_64 << 0xc;
              local_64 = local_64 + 1;
              local_60 = local_60 + 1;
            }
          }
        }
        (**(code **)(*local_3c + 0x44))(local_3c,0);
        (*this->texture_i_think[param_1]->lpVtbl->UnlockRect)(this->texture_i_think[param_1],0);
        if (local_3c != (int *)0x0) {
          (**(code **)(*local_3c + 8))(local_3c);
          local_3c = (int *)0x0;
        }
        _free(local_28);
        return 0;
      }
    }
    else {
      GameErrorContextFatal
                (&g_GameErrorContext,"error : イメージがαを持っていません\n");
    }
    if (local_3c != (int *)0x0) {
      (**(code **)(*local_3c + 8))(local_3c);
      local_3c = (int *)0x0;
    }
    _free(local_28);
  }
  return 0xffffffff;
}

