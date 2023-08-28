
undefined4 __thiscall
VeryBigStruct::LoadAnim(VeryBigStruct *this,int param_2,char *path,int param_4)

{
  Anm0 *data;
  undefined4 uVar1;
  int iVar2;
  int local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  Anm0 *local_18;
  int local_14;
  int *local_10;
  char *local_c;
  Anm0 *anim_data;
  
  FUN_00432030(this,param_2);
  data = (Anm0 *)OpenPath(path,0);
  this->anim_data[param_2] = data;
  anim_data = this->anim_data[param_2];
  if (anim_data == (Anm0 *)0x0) {
    GameErrorContextFatal
              (&g_GameErrorContext,
               "スプライトアニメ %s が読み込めません。データが失われてるか壊れています\n"
               ,path);
    uVar1 = 0xffffffff;
  }
  else {
    anim_data->unk1 = param_2;
    local_c = (char *)((int)&anim_data->num_sprites + anim_data->first_name_offset);
    if (*local_c == '@') {
      FUN_00431d70(anim_data->unk1,anim_data->width,anim_data->height,anim_data->format);
    }
    else {
      iVar2 = FUN_00431920(anim_data->unk1,local_c,anim_data->format,anim_data->color_key);
      if (iVar2 != 0) {
        GameErrorContextFatal
                  (&g_GameErrorContext,
                   "テクスチャ %s が読み込めません。データが失われてるか壊れています\n"
                   ,local_c);
        return 0xffffffff;
      }
    }
    if (anim_data->second_name_offset != 0) {
      local_c = (char *)((int)&anim_data->num_sprites + anim_data->second_name_offset);
      iVar2 = FUN_00431a10(anim_data->unk1,local_c,anim_data->format,anim_data->color_key);
      if (iVar2 != 0) {
        GameErrorContextFatal
                  (&g_GameErrorContext,
                   "テクスチャ %s が読み込めません。データが失われてるか壊れています\n"
                   ,local_c);
        return 0xffffffff;
      }
    }
    anim_data->unk2 = param_4;
    local_18 = anim_data + 1;
    for (local_14 = 0; local_14 < this->anim_data[param_2]->num_sprites; local_14 = local_14 + 1) {
      local_10 = (int *)((int)&anim_data->num_sprites + local_18->num_sprites);
      local_50 = this->anim_data[param_2]->unk1;
      local_4c = local_10[1];
      local_48 = local_10[2];
      local_44 = (float)local_10[1] + (float)local_10[3];
      local_40 = (float)local_10[2] + (float)local_10[4];
      local_38 = (float)anim_data->width;
      local_3c = (float)anim_data->height;
      FUN_00432260(this,*local_10 + param_4,&local_50);
      local_18 = (Anm0 *)&local_18->num_scripts;
    }
    for (local_14 = 0; local_14 < anim_data->num_scripts; local_14 = local_14 + 1) {
      *(int *)(&this->field_0x1c934 + (local_18->num_sprites + param_4) * 4) =
           (int)&anim_data->num_sprites + local_18->num_scripts;
      *(int *)(&this->field_0x1e934 + (local_18->num_sprites + param_4) * 4) = param_4;
      local_18 = (Anm0 *)&local_18->unk1;
    }
    this->field18790_0x20b34[param_2] = (int *)param_4;
    uVar1 = 0;
  }
  return uVar1;
}

