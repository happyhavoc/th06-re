
uint __thiscall Pbg3Archive::FindEntry(Pbg3Archive *this,char *path)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint entryIdx;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  entryIdx = 0;
  if (this->numOfEntries != 0) {
    pcVar4 = &this->entries->filename;
    pbVar2 = (byte *)path;
    pcVar5 = pcVar4;
LAB_0043c939:
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < (byte)*pcVar4;
      if (bVar1 == *pcVar4) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < (byte)pcVar4[1];
          if (bVar1 != pcVar4[1]) goto LAB_0043c95d;
          pcVar4 = pcVar4 + 2;
          pbVar2 = pbVar2 + 2;
          if (bVar1 != 0) goto LAB_0043c939;
        }
        iVar3 = 0;
      }
      else {
LAB_0043c95d:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      }
      if (iVar3 == 0) {
        return entryIdx;
      }
      entryIdx = entryIdx + 1;
      pcVar4 = pcVar5 + 0x114;
      pbVar2 = (byte *)path;
      pcVar5 = pcVar4;
    } while (entryIdx < (uint)this->numOfEntries);
  }
  return 0xffffffff;
}

