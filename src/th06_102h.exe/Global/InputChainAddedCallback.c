
/* WARNING: Inlined function: FUN_0045c3e0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 InputChainAddedCallback(GameContext *param_1)

{
  Pbg3File **ppPVar1;
  undefined4 uVar2;
  HRESULT HVar3;
  IDirect3D8 *pIVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int iVar7;
  undefined4 *puStack_24;
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
  PBG3_FILES = ppPVar1;
  GameContext::LoadPBG3(param_1,0,&DAT_0046b63c);
  if (ppPVar1 == (Pbg3File **)0x0) {
    AnmManager::LogoStuff(g_AnmManager,0,"data/title/th06logo.jpg");
    FUN_00435300(g_AnmManager,0,0,0,0,0);
    HVar3 = (*(g_GameContext.d3dDevice)->lpVtbl->Present)
                      (g_GameContext.d3dDevice,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
    if (HVar3 < 0) {
      (*(g_GameContext.d3dDevice)->lpVtbl->Reset)
                (g_GameContext.d3dDevice,&g_GameContext.presentParameters);
    }
    FUN_00435300(g_AnmManager,0,0,0,0,0);
    HVar3 = (*(g_GameContext.d3dDevice)->lpVtbl->Present)
                      (g_GameContext.d3dDevice,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
    if (HVar3 < 0) {
      (*(g_GameContext.d3dDevice)->lpVtbl->Reset)
                (g_GameContext.d3dDevice,&g_GameContext.presentParameters);
    }
    FUN_00435270(g_AnmManager,0);
    pIVar4 = (IDirect3D8 *)timeGetTime();
    param_1[1].d3dIface = pIVar4;
    FUN_00423b14(param_1);
    puVar5 = (undefined4 *)operator_new(0x300);
    uStack_8 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puStack_24 = (undefined4 *)0x0;
    }
    else {
      puStack_24 = FUN_00421df0(puVar5);
    }
    uStack_8 = 0xffffffff;
    param_1->unknown_1b0 = puStack_24;
    DVar6 = timeGetTime();
    _DAT_0069d8fc = 0;
    DAT_0069d8f8 = (short)DVar6;
    FUN_00431080(&g_SoundPlayer);
    iVar7 = AnmManager::LoadAnim(g_AnmManager,0,"data/text.anm",0x700);
    if (iVar7 == 0) {
      iVar7 = AsciiManager::RegisterChain();
      if (iVar7 == 0) {
        param_1->field77_0x198 = 0;
        FUN_00431660(g_AnmManager);
        iVar7 = FUN_0041f008();
        GameContext::RemovePbg3File(param_1,0);
        GameContext::LoadPBG3(&g_GameContext,1,(byte *)"紅魔郷MD.dat");
        if (iVar7 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"error : 文字の初期化に失敗しました\n")
        ;
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

