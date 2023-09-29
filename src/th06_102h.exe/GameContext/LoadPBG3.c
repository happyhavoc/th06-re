
/* WARNING: Inlined function: FUN_0045c3e0 */

void __thiscall GameContext::LoadPBG3(GameContext *this,int pbg3FileIdx,byte *filename)

{
  byte bVar1;
  Pbg3Archive *_Memory;
  int iVar2;
  bool bVar3;
  uint unaff_retaddr;
  Pbg3FileName *pPStack_cc;
  byte *pbStack_c8;
  Pbg3Archive *f;
  int iStack_bc;
  byte *pbStack_b4;
  Pbg3FileName *pPStack_b0;
  char acStack_98 [128];
  uint uStack_18;
  uint uStack_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00469221;
  pvStack_10 = ExceptionList;
  uStack_14 = 0x42437f;
  uStack_18 = __security_cookie ^ unaff_retaddr;
  if (this->pbg3File[pbg3FileIdx] != (Pbg3Archive *)0x0) {
    pPStack_b0 = this->pbg3FileName + pbg3FileIdx;
    pbStack_b4 = filename;
    do {
      bVar1 = *pbStack_b4;
      bVar3 = bVar1 < pPStack_b0->filename[0];
      if (bVar1 != pPStack_b0->filename[0]) {
LAB_0042442a:
        iStack_bc = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
        goto LAB_00424435;
      }
      if (bVar1 == 0) break;
      bVar1 = pbStack_b4[1];
      bVar3 = bVar1 < pPStack_b0->filename[1];
      if (bVar1 != pPStack_b0->filename[1]) goto LAB_0042442a;
      pbStack_b4 = pbStack_b4 + 2;
      pPStack_b0 = (Pbg3FileName *)(pPStack_b0->filename + 2);
    } while (bVar1 != 0);
    iStack_bc = 0;
LAB_00424435:
    if (iStack_bc == 0) goto LAB_00424634;
  }
  ExceptionList = &pvStack_10;
  RemovePbg3File(this,pbg3FileIdx);
  f = (Pbg3Archive *)operator_new(0x14);
  uStack_8 = 0;
  if (f == (Pbg3Archive *)0x0) {
    f = (Pbg3Archive *)0x0;
  }
  else {
    Pbg3Archive::Pbg3Archive(f);
  }
  uStack_8 = 0xffffffff;
  this->pbg3File[pbg3FileIdx] = f;
  DebugPrint("%s open ...\n",filename);
  iVar2 = Pbg3Archive::Load(this->pbg3File[pbg3FileIdx],(char *)filename);
  if (iVar2 == 0) {
    _Memory = this->pbg3File[pbg3FileIdx];
    if (_Memory != (Pbg3Archive *)0x0) {
      func_0x0043ca80();
      _free(_Memory);
    }
    this->pbg3File[pbg3FileIdx] = (Pbg3Archive *)0x0;
    this->pbg3File[pbg3FileIdx] = (Pbg3Archive *)0x0;
  }
  else {
    pbStack_c8 = filename;
    pPStack_cc = this->pbg3FileName + pbg3FileIdx;
    do {
      bVar1 = *pbStack_c8;
      pPStack_cc->filename[0] = bVar1;
      pbStack_c8 = pbStack_c8 + 1;
      pPStack_cc = (Pbg3FileName *)(pPStack_cc->filename + 1);
    } while (bVar1 != 0);
    sprintf(acStack_98,"ver%.4x.dat",0x102);
    uStack_14 = Pbg3Archive::FindEntry(this->pbg3File[pbg3FileIdx],acStack_98);
    if ((int)uStack_14 < 0) {
      GameErrorContextFatal
                (&g_GameErrorContext,"error : データのバージョンが違います\n");
    }
  }
LAB_00424634:
  ExceptionList = pvStack_10;
  __security_check_cookie(uStack_18 ^ unaff_retaddr);
  return;
}

