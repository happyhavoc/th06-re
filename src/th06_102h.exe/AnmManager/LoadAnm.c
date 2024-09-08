
ZunResult __thiscall
th06::AnmManager::LoadAnm(AnmManager *this,int anm_index,char *path,int spriteIdxOffset)

{
  AnmRawEntry *data;
  ZunResult result;
  char *name;
  AnmRawSprite *rawSprite;
  AnmLoadedSprite loadedSprite;
  uint *curSprite;
  int spriteIndex;
  AnmRawEntry *anm;
  
  ReleaseAnm((AnmManager *)this,anm_index);
  data = (AnmRawEntry *)FileSystem::OpenPath(path,0);
  this->anmFiles[anm_index] = data;
  data = this->anmFiles[anm_index];
  if (data == (AnmRawEntry *)0x0) {
    GameErrorContext::Fatal
              (&g_GameErrorContext,
               "スプライトアニメ %s が読み込めません。データが失われてるか壊れています\n"
               ,path);
    result = ZUN_ERROR;
  }
  else {
    data->textureIdx = anm_index;
    name = (char *)((int)data->spriteOffsets + data->name_offset + -0x40);
    if (*name == '@') {
      CreateEmptyTexture((AnmManager *)this,data->textureIdx,data->width,data->height,data->format);
    }
    else {
      result = LoadTexture((AnmManager *)this,data->textureIdx,name,data->format,data->color_key);
      if (result != ZUN_SUCCESS) {
        GameErrorContext::Fatal
                  (&g_GameErrorContext,
                   "テクスチャ %s が読み込めません。データが失われてるか壊れています\n"
                   ,name);
        return ZUN_ERROR;
      }
    }
    if (data->mipmap_name_offset != 0) {
      name = (char *)((int)data->spriteOffsets + data->mipmap_name_offset + -0x40);
      result = LoadTextureAlphaChannel
                         ((AnmManager *)this,data->textureIdx,name,data->format,data->color_key);
      if (result != ZUN_SUCCESS) {
        GameErrorContext::Fatal
                  (&g_GameErrorContext,
                   "テクスチャ %s が読み込めません。データが失われてるか壊れています\n"
                   ,name);
        return ZUN_ERROR;
      }
    }
    data->spriteIdxOffset = spriteIdxOffset;
    curSprite = data->spriteOffsets;
    for (spriteIndex = 0; spriteIndex < this->anmFiles[anm_index]->numSprites;
        spriteIndex = spriteIndex + 1) {
      rawSprite = (AnmRawSprite *)((int)data->spriteOffsets + (*curSprite - 0x40));
      loadedSprite.sourceFileIndex = this->anmFiles[anm_index]->textureIdx;
      loadedSprite.startPixelInclusive.x = (rawSprite->offset).x;
      loadedSprite.startPixelInclusive.y = (rawSprite->offset).y;
      loadedSprite.endPixelInclusive.x = (rawSprite->offset).x + (rawSprite->size).x;
      loadedSprite.endPixelInclusive.y = (rawSprite->offset).y + (rawSprite->size).y;
      loadedSprite.textureWidth = (float)data->width;
      loadedSprite.textureHeight = (float)data->height;
      LoadSprite((AnmManager *)this,rawSprite->id + spriteIdxOffset,&loadedSprite);
      curSprite = curSprite + 1;
    }
    for (spriteIndex = 0; spriteIndex < data->numScripts; spriteIndex = spriteIndex + 1) {
      this->scripts[*curSprite + spriteIdxOffset] =
           (AnmRawInstr *)((int)data->spriteOffsets + (curSprite[1] - 0x40));
      this->spriteIndices[*curSprite + spriteIdxOffset] = spriteIdxOffset;
      curSprite = curSprite + 2;
    }
    this->anmFilesSpriteIndexOffsets[anm_index] = spriteIdxOffset;
    result = ZUN_SUCCESS;
  }
  return result;
}

