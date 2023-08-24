
undefined4 __thiscall
VeryBigStruct::LoadAnim(VeryBigStruct *this,int param_2,char *path,int param_4)

{
  byte *data;
  undefined4 uVar1;
  int iVar2;
  undefined4 local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int *local_18;
  int local_14;
  int *local_10;
  byte *local_c;
  byte *local_8;
  
  FUN_00432030(this,param_2);
  data = OpenPath(path,0);
  this->anim_data[param_2] = data;
  local_8 = this->anim_data[param_2];
  if (local_8 == (byte *)0x0) {
    GameErrorContextFatal
              (&g_GameErrorContext,
               "スプライトアニメ %s が読み込めません。データが失われてるか壊れています\n"
               ,path);
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(local_8 + 8) = param_2;
    local_c = local_8 + *(int *)(local_8 + 0x1c);
    if (*local_c == 0x40) {
      FUN_00431d70(*(undefined4 *)(local_8 + 8),*(undefined4 *)(local_8 + 0xc),
                   *(undefined4 *)(local_8 + 0x10),*(undefined4 *)(local_8 + 0x14));
    }
    else {
      iVar2 = FUN_00431920(*(undefined4 *)(local_8 + 8),local_c,*(undefined4 *)(local_8 + 0x14),
                           *(undefined4 *)(local_8 + 0x18));
      if (iVar2 != 0) {
        GameErrorContextFatal
                  (&g_GameErrorContext,
                   "テクスチャ %s が読み込めません。データが失われてるか壊れています\n"
                   ,local_c);
        return 0xffffffff;
      }
    }
    if (*(int *)(local_8 + 0x24) != 0) {
      local_c = local_8 + *(int *)(local_8 + 0x24);
      iVar2 = FUN_00431a10(*(undefined4 *)(local_8 + 8),local_c,*(undefined4 *)(local_8 + 0x14),
                           *(undefined4 *)(local_8 + 0x18));
      if (iVar2 != 0) {
        GameErrorContextFatal
                  (&g_GameErrorContext,
                   "テクスチャ %s が読み込めません。データが失われてるか壊れています\n"
                   ,local_c);
        return 0xffffffff;
      }
    }
    *(int *)(local_8 + 0x20) = param_4;
    local_18 = (int *)(local_8 + 0x40);
    for (local_14 = 0; local_14 < *(int *)this->anim_data[param_2]; local_14 = local_14 + 1) {
      local_10 = (int *)(local_8 + *local_18);
      local_50 = *(undefined4 *)(this->anim_data[param_2] + 8);
      local_4c = local_10[1];
      local_48 = local_10[2];
      local_44 = (float)local_10[1] + (float)local_10[3];
      local_40 = (float)local_10[2] + (float)local_10[4];
      local_38 = (float)*(int *)(local_8 + 0xc);
      local_3c = (float)*(int *)(local_8 + 0x10);
      FUN_00432260(*local_10 + param_4,&local_50);
      local_18 = local_18 + 1;
    }
    for (local_14 = 0; local_14 < *(int *)(local_8 + 4); local_14 = local_14 + 1) {
      *(byte **)(&this->field_0x1c934 + (*local_18 + param_4) * 4) = local_8 + local_18[1];
      *(int *)(&this->field_0x1e934 + (*local_18 + param_4) * 4) = param_4;
      local_18 = local_18 + 2;
    }
    this->field18793_0x20b34[param_2] = (int *)param_4;
    uVar1 = 0;
  }
  return uVar1;
}

