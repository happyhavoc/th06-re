
undefined4 __fastcall MainMenu::FUN_004379e4(MainMenu *param_1)

{
  D3DXVECTOR3 *pDVar1;
  undefined4 uVar2;
  int local_8;
  
  if ((int)param_1->unk_81f4 < 0x1e) {
    uVar2 = 1;
  }
  else if ((((g_CurFrameInput & 0x160b) == 0) ||
           ((g_CurFrameInput & 0x160b) == (g_LastFrameInput & 0x160b))) &&
          (((g_CurFrameInput & 0x160b) == 0 || (DAT_0069d90c == 0)))) {
    uVar2 = 1;
  }
  else {
    param_1->unk_81f4 = 0;
    param_1->gameState = 2;
    for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
      param_1->field0_0x0[local_8].pendingInterrupt = 2;
    }
    if ((g_Supervisor.cfg.opts & 1) == 0) {
      param_1->field0_0x0[param_1->cursor].color.color = 0xffff0000;
    }
    else {
      param_1->field0_0x0[param_1->cursor].color.color = 0xffffe0e0;
    }
    pDVar1 = &param_1->field0_0x0[param_1->cursor].pos2;
    pDVar1->x = -6.0;
    pDVar1->y = -6.0;
    pDVar1->z = 0.0;
    param_1->unk_81fc = 0;
    param_1->unk_8200 = 0x40000000;
    param_1->unk_820c = 0;
    param_1->unk_8210 = 0x3c;
    uVar2 = 0;
  }
  return uVar2;
}

