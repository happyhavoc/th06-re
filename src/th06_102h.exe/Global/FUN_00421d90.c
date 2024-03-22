
int FUN_00421d90(void *curTrackDataCursor)

{
  int iVar2;
  undefined3 uStack_8;
  undefined uStack_5;
  byte bVar1;
  
  uStack_8 = 0;
  uStack_5 = 0;
  do {
                    /* WARNING: Load size is inaccurate */
    bVar1 = **curTrackDataCursor;
                    /* WARNING: Load size is inaccurate */
    *(int *)curTrackDataCursor = *curTrackDataCursor + 1;
    iVar2 = CONCAT13(uStack_5,uStack_8) * 0x80 + (bVar1 & 0x7f);
    uStack_8 = (undefined3)iVar2;
    uStack_5 = (undefined)((uint)iVar2 >> 0x18);
  } while ((bVar1 & 0x80) != 0);
  return iVar2;
}

