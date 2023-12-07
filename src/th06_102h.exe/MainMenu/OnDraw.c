
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 MainMenu::OnDraw(MainMenu *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  AnmVm *curVm;
  int vmIdx;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  curVm = param_1->field0_0x0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x44200000;
  local_c = 0x43f00000;
  if (param_1->unk_81f0 != 0) {
    g_AnmManager->currentTexture = (IDirect3DTexture8 *)0x0;
    AnmManager::CopySurfaceToBackBuffer(g_AnmManager,0,0,0,0,0);
    if (param_1->unk_8210 == 0) {
      if (param_1->unk_820c != 0) {
        param_1->unk_820c = param_1->unk_820c - 1;
        local_8 = (param_1->unk_8200 >> 0x18) - (param_1->unk_81fc >> 0x18);
        FUN_0042f8b0(&local_18,
                     ((local_8 * param_1->unk_820c) / *(uint *)&param_1->field_0x8214 +
                     (param_1->unk_81fc >> 0x18)) * 0x1000000 | param_1->unk_8200 & 0xffffff);
      }
    }
    else {
      if ((int)param_1->unk_820c < (int)param_1->unk_8210) {
        param_1->unk_820c = param_1->unk_820c + 1;
      }
      local_8 = (param_1->unk_8200 >> 0x18) - (param_1->unk_81fc >> 0x18);
      FUN_0042f8b0(&local_18,
                   ((local_8 * param_1->unk_820c) / param_1->unk_8210 + (param_1->unk_81fc >> 0x18))
                   * 0x1000000 | param_1->unk_8200 & 0xffffff);
    }
    for (vmIdx = 0; vmIdx < 0x62; vmIdx = vmIdx + 1) {
      if (curVm->sprite == (AnmLoadedSprite *)0x0) {
        bVar4 = false;
      }
      else if ((int)curVm->sprite->sourceFileIndex < 0) {
        bVar4 = false;
      }
      else {
        bVar4 = g_AnmManager->textures[curVm->sprite->sourceFileIndex] != (IDirect3DTexture8 *)0x0;
      }
      if (bVar4) {
        fVar1 = (curVm->pos).x;
        fVar2 = (curVm->pos).y;
        fVar3 = (curVm->pos).z;
        (curVm->pos).x = (curVm->pos).x + (curVm->pos2).x;
        (curVm->pos).y = (curVm->pos).y + (curVm->pos2).y;
        (curVm->pos).z = (curVm->pos).z + (curVm->pos2).z;
        AnmManager::FUN_00432cc0(g_AnmManager,curVm);
        (curVm->pos).x = fVar1;
        (curVm->pos).y = fVar2;
        (curVm->pos).z = fVar3;
      }
      curVm = curVm + 1;
    }
    if ((0xc < (int)param_1->unk_81f0) && ((int)param_1->unk_81f0 < 0x10)) {
      FUN_00438bc1(param_1);
    }
    FUN_00439965(param_1);
  }
  return 1;
}

