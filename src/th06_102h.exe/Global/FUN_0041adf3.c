
void __fastcall FUN_0041adf3(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x1c24) & 1) != 0) {
    local_10 = 0x43280000;
    local_c = 0x43460000;
    local_8 = 0;
    if (g_GameManager.demo_mode == 0) {
      AnmManager::FUN_00433590(g_AnmManager,(AnmVm *)(*(int *)(param_1 + 4) + 0x1ba4));
      g_AsciiManager.color = *(uint *)(*(int *)(param_1 + 4) + 0x1c20) & 0xff000000 | 0xffff40;
      if ((int)g_GameManager.current_stage < 6) {
        local_10 = 0x43280000;
        AsciiManager::FUN_00401650(&g_AsciiManager,&local_10,"STAGE %d",g_GameManager.current_stage)
        ;
      }
      else if (g_GameManager.current_stage == 6) {
        local_10 = 0x43080000;
        AsciiManager::FUN_00401650(&g_AsciiManager,&local_10,"FINAL STAGE");
      }
      else {
        local_10 = 0x43080000;
        AsciiManager::FUN_00401650(&g_AsciiManager,&local_10,"EXTRA STAGE");
      }
    }
    else {
      g_AsciiManager.color = *(uint *)(*(int *)(param_1 + 4) + 0x1c20) & 0xff000000 | 0xffff40;
      local_10 = 0x43080000;
      AsciiManager::FUN_00401650(&g_AsciiManager,&local_10," DEMO PLAY");
    }
    g_AsciiManager.color = 0xffffffff;
  }
  if (((*(uint *)(*(int *)(param_1 + 4) + 0x1d34) & 1) != 0) && (g_GameManager.demo_mode == 0)) {
    AnmManager::FUN_00433590(g_AnmManager,(AnmVm *)(*(int *)(param_1 + 4) + 0x1cb4));
  }
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x1e44) & 1) != 0) {
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(*(int *)(param_1 + 4) + 0x1dc4));
  }
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x1f54) & 1) != 0) {
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(*(int *)(param_1 + 4) + 0x1ed4));
  }
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x2064) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar2 + 0x2294) = *(undefined4 *)(iVar1 + 0x2074);
    *(undefined4 *)(iVar2 + 0x2298) = *(undefined4 *)(iVar1 + 0x2078);
    *(undefined4 *)(iVar2 + 0x229c) = *(undefined4 *)(iVar1 + 0x207c);
    *(float *)(*(int *)(param_1 + 4) + 0x2294) =
         ((((*(float *)(param_1 + 8) * 16.0) / 15.0) / 2.0 + -128.0) - 16.0) +
         *(float *)(*(int *)(param_1 + 4) + 0x2294);
    *(float *)(*(int *)(param_1 + 4) + 0x2220) = *(float *)(param_1 + 8) / 14.0;
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(*(int *)(param_1 + 4) + 0x2204));
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(*(int *)(param_1 + 4) + 0x1fe4));
  }
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x2174) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar2 + 0x23a4) = *(undefined4 *)(iVar1 + 0x2184);
    *(undefined4 *)(iVar2 + 0x23a8) = *(undefined4 *)(iVar1 + 0x2188);
    *(undefined4 *)(iVar2 + 0x23ac) = *(undefined4 *)(iVar1 + 0x218c);
    *(float *)(*(int *)(param_1 + 4) + 0x23a4) =
         (128.0 - ((*(float *)(param_1 + 0xc) * 16.0) / 15.0) / 2.0) +
         *(float *)(*(int *)(param_1 + 4) + 0x23a4);
    *(float *)(*(int *)(param_1 + 4) + 0x2330) = *(float *)(param_1 + 0xc) / 14.0;
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(*(int *)(param_1 + 4) + 0x2314));
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(*(int *)(param_1 + 4) + 0x20f4));
  }
  if (-1 < *(short *)(*(int *)(param_1 + 4) + 0x24d4)) {
    g_GameContext.viewport.X = __ftol2((double)g_GameManager.arcade_region_top_left_pos.x);
    g_GameContext.viewport.Y = __ftol2((double)g_GameManager.arcade_region_top_left_pos.y);
    g_GameContext.viewport.Width = __ftol2((double)g_GameManager.arcade_region_size.x);
    g_GameContext.viewport.Height = __ftol2((double)g_GameManager.arcade_region_size.y);
    (*(g_GameContext.d3dDevice)->lpVtbl->SetViewport)
              (g_GameContext.d3dDevice,(D3DVIEWPORT8 *)0x6c6de0);
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(*(int *)(param_1 + 4) + 0x2424));
  }
  return;
}

