
/* WARNING: Inlined function: FUN_0045c3e0 */

void __thiscall GameContext::LoadPBG3(GameContext *this,int param_1,byte *filename)

{
  byte bVar1;
  Pbg3File *this_00;
  int iVar2;
  bool bVar3;
  uint unaff_retaddr;
  Pbg3FileName *pPStack_cc;
  byte *pbStack_c8;
  Pbg3File *pPStack_c4;
  int iStack_bc;
  byte *pbStack_b4;
  Pbg3FileName *pPStack_b0;
  byte abStack_98 [128];
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
  if (this->pbg3File[param_1] != (Pbg3File *)0x0) {
    pPStack_b0 = this->pbg3FileName + param_1;
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
  RemovePbg3File(this,param_1);
  pPStack_c4 = (Pbg3File *)operator_new(0x14);
  uStack_8 = 0;
  if (pPStack_c4 == (Pbg3File *)0x0) {
    pPStack_c4 = (Pbg3File *)0x0;
  }
  else {
    Pbg3File_conflict1::Init(pPStack_c4);
  }
  uStack_8 = 0xffffffff;
  this->pbg3File[param_1] = pPStack_c4;
  DebugPrint("%s open ...\n",filename);
  iVar2 = Pbg3File_conflict1::Unk1(this->pbg3File[param_1],(char *)filename);
  if (iVar2 == 0) {
    this_00 = this->pbg3File[param_1];
    if (this_00 != (Pbg3File *)0x0) {
      Pbg3File_conflict1::SomeKindOfDelete((Pbg3File_conflict1 *)this_00);
      _free(this_00);
    }
    this->pbg3File[param_1] = (Pbg3File *)0x0;
    this->pbg3File[param_1] = (Pbg3File *)0x0;
  }
  else {
    pbStack_c8 = filename;
    pPStack_cc = this->pbg3FileName + param_1;
    do {
      bVar1 = *pbStack_c8;
      pPStack_cc->filename[0] = bVar1;
      pbStack_c8 = pbStack_c8 + 1;
      pPStack_cc = (Pbg3FileName *)(pPStack_cc->filename + 1);
    } while (bVar1 != 0);
    sprintf((char *)abStack_98,"ver%.4x.dat",0x102);
    uStack_14 = Pbg3File_conflict1::Unk23((Pbg3File_conflict1 *)this->pbg3File[param_1],abStack_98);
    if ((int)uStack_14 < 0) {
      GameErrorContextFatal
                ((GameErrorContext *)&DAT_0069d998,
                 "error : データのバージョンが違います\n");
    }
  }
LAB_00424634:
  ExceptionList = pvStack_10;
  __security_check_cookie(uStack_18 ^ unaff_retaddr);
  return;
}

