
/* WARNING: Inlined function: FUN_0045c3e0 */

void __thiscall GameContext::FUN_00424375(GameContext *this,int param_1,byte *param_2)

{
  byte bVar1;
  int **_Memory;
  void *pvVar2;
  int iVar3;
  bool bVar4;
  uint unaff_retaddr;
  HINSTANCE *ppHStack_cc;
  byte *pbStack_c8;
  int iStack_c4;
  int iStack_bc;
  byte *pbStack_b4;
  HINSTANCE *ppHStack_b0;
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
  if (this->field107_0x1bc[param_1] != 0) {
    ppHStack_b0 = &this[1].hInstance + param_1 * 8;
    pbStack_b4 = param_2;
    do {
      bVar1 = *pbStack_b4;
      bVar4 = bVar1 < *(byte *)ppHStack_b0;
      if (bVar1 != *(byte *)ppHStack_b0) {
LAB_0042442a:
        iStack_bc = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
        goto LAB_00424435;
      }
      if (bVar1 == 0) break;
      bVar1 = pbStack_b4[1];
      bVar4 = bVar1 < *(byte *)((int)ppHStack_b0 + 1);
      if (bVar1 != *(byte *)((int)ppHStack_b0 + 1)) goto LAB_0042442a;
      pbStack_b4 = pbStack_b4 + 2;
      ppHStack_b0 = (HINSTANCE *)((int)ppHStack_b0 + 2);
    } while (bVar1 != 0);
    iStack_bc = 0;
LAB_00424435:
    if (iStack_bc == 0) goto LAB_00424634;
  }
  ExceptionList = &pvStack_10;
  FUN_004242f3(this,param_1);
  pvVar2 = operator_new(0x14);
  uStack_8 = 0;
  if (pvVar2 == (void *)0x0) {
    iStack_c4 = 0;
  }
  else {
    iStack_c4 = FUN_0043c770();
  }
  uStack_8 = 0xffffffff;
  this->field107_0x1bc[param_1] = iStack_c4;
  DebugPrint("%s open ...\n",param_2);
  iVar3 = FUN_0043ca90((int **)this->field107_0x1bc[param_1],param_2);
  if (iVar3 == 0) {
    _Memory = (int **)this->field107_0x1bc[param_1];
    if (_Memory != (int **)0x0) {
      thunk_FUN_0043c8d0(_Memory);
      _free(_Memory);
    }
    this->field107_0x1bc[param_1] = 0;
    this->field107_0x1bc[param_1] = 0;
  }
  else {
    pbStack_c8 = param_2;
    ppHStack_cc = &this[1].hInstance + param_1 * 8;
    do {
      bVar1 = *pbStack_c8;
      *(byte *)ppHStack_cc = bVar1;
      pbStack_c8 = pbStack_c8 + 1;
      ppHStack_cc = (HINSTANCE *)((int)ppHStack_cc + 1);
    } while (bVar1 != 0);
    sprintf((char *)abStack_98,"ver%.4x.dat",0x102);
    uStack_14 = FUN_0043c920(this->field107_0x1bc[param_1],abStack_98);
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

