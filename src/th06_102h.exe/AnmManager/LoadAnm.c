
ZunResult __thiscall
AnmManager::LoadAnm(AnmManager *this,int anm_index,char *path,int spriteIdxOffset)

{
  AnmRawEntry *data;
  ZunResult ZVar1;
  char *name;
  AnmRawSprite *rawSprite;
  AnmLoadedSprite loadedSprite;
  uint *curSprite;
  int local_14;
  AnmRawEntry *anim_data;
  
  ReleaseAnm(this,anm_index);
  data = (AnmRawEntry *)FileSystem::OpenPath(path,0);
  this->anmFiles[anm_index] = data;
  data = this->anmFiles[anm_index];
  if (data == (AnmRawEntry *)0x0) {
    GameErrorContextFatal
              (&g_GameErrorContext,
               "スプライトアニメ %s が読み込めません。データが失われてるか壊れています\n"
               ,path);
    ZVar1 = ZUN_ERROR;
  }
  else {
    data->textureIdx = anm_index;
    name = (char *)((int)data->spriteOffsets + data->name_offset + -0x40);
    if (*name == '@') {
      CreateEmptyTexture(this,data->textureIdx,data->width,data->height,data->format);
    }
    else {
      ZVar1 = LoadTexture(this,data->textureIdx,name,data->format,data->color_key);
      if (ZVar1 != ZUN_SUCCESS) {
        GameErrorContextFatal
                  (&g_GameErrorContext,
                   "テクスチャ %s が読み込めません。データが失われてるか壊れています\n"
                   ,name);
        return ZUN_ERROR;
      }
    }
    if (data->mipmap_name_offset != 0) {
      name = (char *)((int)data->spriteOffsets + data->mipmap_name_offset + -0x40);
      ZVar1 = LoadTextureMipmap(this,data->textureIdx,name,data->format,data->color_key);
      if (ZVar1 != ZUN_SUCCESS) {
        GameErrorContextFatal
                  (&g_GameErrorContext,
                   "テクスチャ %s が読み込めません。データが失われてるか壊���ています\n"
                   ,name);
        return ZUN_ERROR;
      }
    }
    data->spriteIdxOffset = spriteIdxOffset;
    curSprite = data->spriteOffsets;
    for (local_14 = 0; local_14 < this->anmFiles[anm_index]->numSprites; local_14 = local_14 + 1) {
      rawSprite = (AnmRawSprite *)((int)data->spriteOffsets + (*curSprite - 0x40));
      loadedSprite.sourceFileIndex = this->anmFiles[anm_index]->textureIdx;
      loadedSprite.startPixelInclusive.x = (rawSprite->offset).x;
      loadedSprite.startPixelInclusive.y = (rawSprite->offset).y;
      loadedSprite.endPixelInclusive.x = (rawSprite->offset).x + (rawSprite->size).x;
      loadedSprite.endPixelInclusive.y = (rawSprite->offset).y + (rawSprite->size).y;
      loadedSprite.textureWidth = (float)data->width;
      loadedSprite.textureHeight = (float)data->height;
      LoadSprite(this,rawSprite->id + spriteIdxOffset,&loadedSprite);
      curSprite = curSprite + 1;
    }
    for (local_14 = 0; local_14 < data->numScripts; local_14 = local_14 + 1) {
      this->scripts[*curSprite + spriteIdxOffset] =
           (AnmRawInstr *)((int)data->spriteOffsets + (curSprite[1] - 0x40));
      this->spriteIndices[*curSprite + spriteIdxOffset] = spriteIdxOffset;
      curSprite = curSprite + 2;
    }
    this->anmFilesSpriteIndexOffsets[anm_index] = spriteIdxOffset;
    ZVar1 = ZUN_SUCCESS;
  }
  return ZVar1;
}

