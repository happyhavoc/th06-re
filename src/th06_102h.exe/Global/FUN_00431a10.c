
undefined4 FUN_00431a10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int in_ECX;
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
  int local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  void *local_28;
  int local_24 [6];
  uint local_c;
  uint local_8;
  
  local_3c = (int *)0x0;
  local_28 = (void *)OpenPath(param_2,0);
  if (local_28 != (void *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x1c110 + param_1 * 4) + 0x38))
              (*(undefined4 *)(in_ECX + 0x1c110 + param_1 * 4),0,local_24);
    if (((local_24[0] == 0x15) || (local_24[0] == 0x1a)) || (local_24[0] == 0x19)) {
      iVar1 = FUN_004401c6(g_GameContext.d3d_device,local_28,g_FileSize,0,0,0,0,local_24[0],2,3,
                           0xffffffff,param_4,0,0,&local_3c);
      if (((iVar1 == 0) &&
          (iVar1 = (**(code **)(**(int **)(in_ECX + 0x1c110 + param_1 * 4) + 0x40))
                             (*(undefined4 *)(in_ECX + 0x1c110 + param_1 * 4),0,&local_30,0,0),
          iVar1 == 0)) &&
         (iVar1 = (**(code **)(*local_3c + 0x40))(local_3c,0,&local_38,0,0x8000), iVar1 == 0)) {
        if (local_24[0] == 0x15) {
          for (local_48 = 0; local_48 < local_8; local_48 = local_48 + 1) {
            local_40 = local_2c + local_48 * local_30;
            local_44 = (undefined *)(local_34 + local_48 * local_38);
            for (local_4c = 0; local_4c < local_c; local_4c = local_4c + 1) {
              *(undefined *)(local_40 + 3) = *local_44;
              local_44 = local_44 + 4;
              local_40 = local_40 + 4;
            }
          }
        }
        else if (local_24[0] == 0x19) {
          for (local_58 = 0; local_58 < local_8; local_58 = local_58 + 1) {
            local_50 = (ushort *)(local_2c + local_58 * local_30);
            local_54 = (ushort *)(local_34 + local_58 * local_38);
            for (local_5c = 0; local_5c < local_c; local_5c = local_5c + 1) {
              *local_50 = *local_50 & 0x7fff | (short)((int)(uint)(*local_54 & 0x1f) >> 4) << 0xf;
              local_54 = local_54 + 1;
              local_50 = local_50 + 1;
            }
          }
        }
        else if (local_24[0] == 0x1a) {
          for (local_68 = 0; local_68 < local_8; local_68 = local_68 + 1) {
            local_60 = (ushort *)(local_2c + local_68 * local_30);
            local_64 = (short *)(local_34 + local_68 * local_38);
            for (local_6c = 0; local_6c < local_c; local_6c = local_6c + 1) {
              *local_60 = *local_60 & 0xfff | *local_64 << 0xc;
              local_64 = local_64 + 1;
              local_60 = local_60 + 1;
            }
          }
        }
        (**(code **)(*local_3c + 0x44))(local_3c,0);
        (**(code **)(**(int **)(in_ECX + 0x1c110 + param_1 * 4) + 0x44))
                  (*(undefined4 *)(in_ECX + 0x1c110 + param_1 * 4),0);
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

