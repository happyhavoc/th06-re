
uint __thiscall Pbg3Archive_conflict1::FindEntry(Pbg3Archive_conflict1 *this,char *path)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint entryIdx;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  entryIdx = 0;
  if (*(uint *)(this + 8) != 0) {
    pbVar4 = (byte *)(*(int *)(this + 0x10) + 0x14);
    pbVar2 = (byte *)path;
    pbVar5 = pbVar4;
LAB_0043c939:
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 == *pbVar4) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_0043c95d;
          pbVar4 = pbVar4 + 2;
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
      pbVar4 = pbVar5 + 0x114;
      pbVar2 = (byte *)path;
      pbVar5 = pbVar4;
    } while (entryIdx < *(uint *)(this + 8));
  }
  return 0xffffffff;
}

