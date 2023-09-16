
undefined4 __thiscall AnmManager::LoadAnim(AnmManager *this,int param_2,char *path,int param_4)

{
  AnmRawEntry *data;
  undefined4 uVar1;
  int iVar2;
  int local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  AnmRawSprite **local_18;
  int local_14;
  int *local_10;
  char *local_c;
  AnmRawEntry *anim_data;
  
  FUN_00432030(this,param_2);
  data = (AnmRawEntry *)OpenPath(path,0);
  this->anmFiles[param_2] = data;
  anim_data = this->anmFiles[param_2];
  if (anim_data == (AnmRawEntry *)0x0) {
    GameErrorContextFatal
              ((GameErrorContext *)&DAT_0069d998,
               "スプライトアニメ %s が読み込めません。データが失われてるか壊れています\n"
               ,path);
    uVar1 = 0xffffffff;
  }
  else {
    anim_data->textureIdx = param_2;
    local_c = (char *)((int)anim_data->sprites + anim_data->first_name_offset + -0x40);
    if (*local_c == '@') {
      FUN_00431d70(anim_data->textureIdx,anim_data->width,anim_data->height,anim_data->format);
    }
    else {
      iVar2 = FUN_00431920(anim_data->textureIdx,local_c,anim_data->format,anim_data->color_key);
      if (iVar2 != 0) {
        GameErrorContextFatal
                  ((GameErrorContext *)&DAT_0069d998,
                   "テクスチャ %s が読み込めません。データが失われてるか壊れています\n"
                   ,local_c);
        return 0xffffffff;
      }
    }
    if (anim_data->second_name_offset != 0) {
      local_c = (char *)((int)anim_data->sprites + anim_data->second_name_offset + -0x40);
      iVar2 = Unknown(this,anim_data->textureIdx,local_c,anim_data->format,anim_data->color_key);
      if (iVar2 != 0) {
        GameErrorContextFatal
                  ((GameErrorContext *)&DAT_0069d998,
                   "テクスチャ %s が読み込���ません。データが失われてるか壊れています\n"
                   ,local_c);
        return 0xffffffff;
      }
    }
    anim_data->unk2 = param_4;
    local_18 = anim_data->sprites;
    for (local_14 = 0; local_14 < this->anmFiles[param_2]->numSprites; local_14 = local_14 + 1) {
      local_10 = (int *)((int)((AnmRawEntry *)(anim_data->sprites + -0x10))->sprites +
                        (int)(&(*local_18)->id + -0x10));
      local_50 = this->anmFiles[param_2]->textureIdx;
      local_4c = local_10[1];
      local_48 = local_10[2];
      local_44 = (float)local_10[1] + (float)local_10[3];
      local_40 = (float)local_10[2] + (float)local_10[4];
      local_38 = (float)anim_data->width;
      local_3c = (float)anim_data->height;
      FUN_00432260(this,*local_10 + param_4,&local_50);
      local_18 = local_18 + 1;
    }
    for (local_14 = 0; local_14 < anim_data->numScripts; local_14 = local_14 + 1) {
      this->scripts[(int)&(*local_18)->id + param_4] =
           (AnmRawInstr *)
           ((int)((AnmRawEntry *)(anim_data->sprites + -0x10))->sprites +
           (int)(&local_18[1]->id + -0x10));
      this->spriteIndices[(int)&(*local_18)->id + param_4] = param_4;
      local_18 = local_18 + 2;
    }
    this->anmFilesSpriteIndexOffsets[param_2] = param_4;
    uVar1 = 0;
  }
  return uVar1;
}

