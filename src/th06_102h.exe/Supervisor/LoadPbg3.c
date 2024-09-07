
/* WARNING: Inlined function: FUN_0045c3e0 */

int __thiscall th06::Supervisor::LoadPbg3(Supervisor *this,int pbg3FileIdx,char *filename)

{
  byte bVar1;
  Pbg3Archive *this_00;
  BOOL BVar2;
  int iVar3;
  bool bVar4;
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
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_00469221;
  pvStack_10 = ExceptionList;
  uStack_14 = 0x42437f;
  uStack_18 = __security_cookie ^ unaff_retaddr;
  if (this->pbg3Archives[pbg3FileIdx] == (Pbg3Archive *)0x0) {
LAB_0042444e:
    ExceptionList = &pvStack_10;
    ReleasePbg3(this,pbg3FileIdx);
    f = (Pbg3Archive *)operator_new(0x14);
    local_8 = 0;
    if (f == (Pbg3Archive *)0x0) {
      f = (Pbg3Archive *)0x0;
    }
    else {
      Pbg3Archive::Pbg3Archive(f);
    }
    local_8 = -1;
    this->pbg3Archives[pbg3FileIdx] = f;
    DebugPrint("%s open ...\n",filename);
    BVar2 = Pbg3Archive::Load(this->pbg3Archives[pbg3FileIdx],filename);
    if (BVar2 == 0) {
      this_00 = this->pbg3Archives[pbg3FileIdx];
      if (this_00 != (Pbg3Archive *)0x0) {
        Pbg3Archive::~Pbg3Archive(this_00);
        operator_delete(this_00);
      }
      this->pbg3Archives[pbg3FileIdx] = (Pbg3Archive *)0x0;
      this->pbg3Archives[pbg3FileIdx] = (Pbg3Archive *)0x0;
    }
    else {
      pbStack_c8 = (byte *)filename;
      pPStack_cc = this->pbg3FileName + pbg3FileIdx;
      do {
        bVar1 = *pbStack_c8;
        pPStack_cc->filename[0] = bVar1;
        pbStack_c8 = pbStack_c8 + 1;
        pPStack_cc = (Pbg3FileName *)(pPStack_cc->filename + 1);
      } while (bVar1 != 0);
      sprintf(acStack_98,"ver%.4x.dat",0x102);
      uStack_14 = Pbg3Archive::FindEntry(this->pbg3Archives[pbg3FileIdx],acStack_98);
      if ((int)uStack_14 < 0) {
        GameErrorContextFatal
                  (&g_GameErrorContext,"error : データのバージョンが違います\n");
        iVar3 = 1;
        goto LAB_00424634;
      }
    }
  }
  else {
    pPStack_b0 = this->pbg3FileName + pbg3FileIdx;
    pbStack_b4 = (byte *)filename;
    do {
      bVar1 = *pbStack_b4;
      bVar4 = bVar1 < pPStack_b0->filename[0];
      if (bVar1 != pPStack_b0->filename[0]) {
LAB_0042442a:
        iStack_bc = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
        goto LAB_00424435;
      }
      if (bVar1 == 0) break;
      bVar1 = pbStack_b4[1];
      bVar4 = bVar1 < pPStack_b0->filename[1];
      if (bVar1 != pPStack_b0->filename[1]) goto LAB_0042442a;
      pbStack_b4 = pbStack_b4 + 2;
      pPStack_b0 = (Pbg3FileName *)(pPStack_b0->filename + 2);
    } while (bVar1 != 0);
    iStack_bc = 0;
LAB_00424435:
    if (iStack_bc != 0) goto LAB_0042444e;
  }
  iVar3 = 0;
LAB_00424634:
  ExceptionList = pvStack_10;
  __security_check_cookie(uStack_18 ^ unaff_retaddr);
  return iVar3;
}

