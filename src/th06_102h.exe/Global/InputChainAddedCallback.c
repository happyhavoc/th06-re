
/* WARNING: Inlined function: FUN_0045c3e0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 InputChainAddedCallback(GameContext *param_1)

{
  Pbg3File **ppPVar1;
  undefined4 uVar2;
  HRESULT HVar3;
  DWORD DVar4;
  MidiOutput *this;
  int iVar5;
  MidiOutput *pMStack_24;
  int iStack_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0046920a;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  for (iStack_14 = 0; iStack_14 < 0x10; iStack_14 = iStack_14 + 1) {
    param_1->pbg3File[iStack_14] = (Pbg3File *)0x0;
  }
  ppPVar1 = param_1->pbg3File;
  DAT_0069d900 = ppPVar1;
  GameContext::LoadPBG3(param_1,0,(byte *)"紅魔郷IN.dat");
  if (ppPVar1 == (Pbg3File **)0x0) {
    AnmManager::LogoStuff(DAT_006d4588,0,"data/title/th06logo.jpg");
    AnmManager::FUN_00435300(DAT_006d4588,0,0,0,0,0);
    HVar3 = (*DAT_006c6d20->lpVtbl->Present)
                      (DAT_006c6d20,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
    if (HVar3 < 0) {
      (*DAT_006c6d20->lpVtbl->Reset)(DAT_006c6d20,(D3DPRESENT_PARAMETERS *)&DAT_006c6df8);
    }
    AnmManager::FUN_00435300(DAT_006d4588,0,0,0,0,0);
    HVar3 = (*DAT_006c6d20->lpVtbl->Present)
                      (DAT_006c6d20,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
    if (HVar3 < 0) {
      (*DAT_006c6d20->lpVtbl->Reset)(DAT_006c6d20,(D3DPRESENT_PARAMETERS *)&DAT_006c6df8);
    }
    AnmManager::FUN_00435270(DAT_006d4588,0);
    DVar4 = timeGetTime();
    *(DWORD *)&param_1->field_0x400 = DVar4;
    FUN_00423b14(param_1);
    this = (MidiOutput *)operator_new(0x300);
    uStack_8 = 0;
    if (this == (MidiOutput *)0x0) {
      pMStack_24 = (MidiOutput *)0x0;
    }
    else {
      pMStack_24 = (MidiOutput *)MidiOutput::MidiOutput(this);
    }
    uStack_8 = 0xffffffff;
    param_1->midiOutput = pMStack_24;
    DVar4 = timeGetTime();
    _DAT_0069d8fc = 0;
    DAT_0069d8f8 = (short)DVar4;
    SoundPlayer::FUN_00431080((SoundPlayer *)&DAT_006d3f50);
    iVar5 = AnmManager::LoadAnim(DAT_006d4588,0,"data/text.anm",0x700);
    if (iVar5 == 0) {
      iVar5 = AsciiManager::RegisterChain();
      if (iVar5 == 0) {
        param_1->field77_0x198 = 0;
        AnmManager::FUN_00431660(DAT_006d4588);
        iVar5 = FUN_0041f008();
        GameContext::RemovePbg3File(param_1,0);
        GameContext::LoadPBG3((GameContext *)&DAT_006c6d18,1,(byte *)"紅魔郷MD.dat");
        if (iVar5 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                            "error : 文字の初期化に失敗しました\n");
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  ExceptionList = pvStack_10;
  return uVar2;
}

