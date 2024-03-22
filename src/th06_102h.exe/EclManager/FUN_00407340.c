
ZunResult __thiscall EclManager::FUN_00407340(EclManager *this,char *path)

{
  byte *pbVar1;
  ZunResult ZVar2;
  int local_8;
  
  pbVar1 = FileSystem::OpenPath(path,0);
  this->ecl_file = pbVar1;
  if (this->ecl_file == (void *)0x0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "敵データの読み込みに失敗しました、データが壊れてるか失われています\n"
                       );
    ZVar2 = ZUN_ERROR;
  }
  else {
    *(int *)((int)this->ecl_file + 4) = *(int *)((int)this->ecl_file + 4) + (int)this->ecl_file;
    this->sub_table = (void *)((int)this->ecl_file + 0x10);
                    /* WARNING: Load size is inaccurate */
    for (local_8 = 0; local_8 < *this->ecl_file; local_8 = local_8 + 1) {
      *(int *)((int)this->sub_table + local_8 * 4) =
           *(int *)((int)this->sub_table + local_8 * 4) + (int)this->ecl_file;
    }
    this->timeline = *(void **)((int)this->ecl_file + 4);
    ZVar2 = ZUN_SUCCESS;
  }
  return ZVar2;
}

