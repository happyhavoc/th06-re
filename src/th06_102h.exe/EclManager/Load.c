
ZunResult __thiscall EclManager::Load(EclManager *this,char *path)

{
  EclRawHeader *pEVar1;
  ZunResult ZVar2;
  int local_8;
  
  pEVar1 = (EclRawHeader *)FileSystem::OpenPath(path,0);
  this->ecl_file = pEVar1;
  if (this->ecl_file == (EclRawHeader *)0x0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "敵データの読み込みに失敗しました、データが壊れてるか失われています\n"
                       );
    ZVar2 = ZUN_ERROR;
  }
  else {
    this->ecl_file->timelinePtr_3_ =
         (int)this->ecl_file->subTableOffsets + (this->ecl_file->timelinePtr_3_ - 8);
    this->sub_table = (void **)&this->ecl_file[1].timelinePtr_3_;
    for (local_8 = 0; local_8 < (short)this->ecl_file->subCount; local_8 = local_8 + 1) {
      this->sub_table[local_8] = (void *)((int)this->sub_table[local_8] + (int)this->ecl_file);
    }
    this->timeline = (void *)this->ecl_file->timelinePtr_3_;
    ZVar2 = ZUN_SUCCESS;
  }
  return ZVar2;
}

