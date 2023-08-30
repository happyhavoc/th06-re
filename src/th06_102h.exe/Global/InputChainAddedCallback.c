
/* WARNING: Inlined function: FUN_0045c3e0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 InputChainAddedCallback(GameContext *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  HRESULT HVar3;
  IDirect3DDevice8 *pIVar4;
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
    param_1->field107_0x1bc[iStack_14] = 0;
  }
  piVar1 = param_1->field107_0x1bc;
  DAT_0069d900 = piVar1;
  GameContext::FUN_00424375(param_1,0,&DAT_0046b63c);
  if (piVar1 == (int *)0x0) {
    VeryBigStruct::LogoStuff(VERY_BIG_STRUCT,0,"data/title/th06logo.jpg");
    FUN_00435300(VERY_BIG_STRUCT,0,0,0,0,0);
    HVar3 = (*(g_GameContext.d3d_device)->lpVtbl->Present)
                      (g_GameContext.d3d_device,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
    if (HVar3 < 0) {
      (*(g_GameContext.d3d_device)->lpVtbl->Reset)
                (g_GameContext.d3d_device,&g_GameContext.presentParameters);
    }
    FUN_00435300(VERY_BIG_STRUCT,0,0,0,0,0);
    HVar3 = (*(g_GameContext.d3d_device)->lpVtbl->Present)
                      (g_GameContext.d3d_device,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
    if (HVar3 < 0) {
      (*(g_GameContext.d3d_device)->lpVtbl->Reset)
                (g_GameContext.d3d_device,&g_GameContext.presentParameters);
    }
    FUN_00435270(VERY_BIG_STRUCT,0);
    pIVar4 = (IDirect3DDevice8 *)timeGetTime();
    param_1[2].d3d_device = pIVar4;
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
    param_1->field98_0x1b0 = puStack_24;
    DVar6 = timeGetTime();
    _DAT_0069d8fc = 0;
    DAT_0069d8f8 = (short)DVar6;
    FUN_00431080(&g_SoundPlayer);
    iVar7 = VeryBigStruct::LoadAnim(VERY_BIG_STRUCT,0,"data/text.anm",0x700);
    if (iVar7 == 0) {
      iVar7 = FUN_004012c0();
      if (iVar7 == 0) {
        *(undefined4 *)&param_1->field_0x198 = 0;
        FUN_00431660(VERY_BIG_STRUCT);
        iVar7 = FUN_0041f008();
        FUN_004242f3(param_1,0);
        GameContext::FUN_00424375(&g_GameContext,1,&DAT_0046b5e0);
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

