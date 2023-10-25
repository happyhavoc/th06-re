
void FUN_004195bf(void)

{
  AnmManager *this;
  int iVar1;
  int in_ECX;
  int local_c;
  int local_8;
  
  for (local_8 = 0; this = g_AnmManager, local_8 < 0x1a; local_8 = local_8 + 1) {
    if ((local_8 == 0x13) && (*(int *)(*(int *)(in_ECX + 4) + 0x253c) < 0)) {
      if (*(char *)(in_ECX + 0x20) == '\0') {
        if (*(char *)(*(int *)(in_ECX + 4) + 0x1ba0) != '\0') {
          if (*(byte *)(*(int *)(in_ECX + 4) + 0x1ba0) < 3) {
            iVar1 = *(int *)(in_ECX + 4);
            *(undefined2 *)(iVar1 + 0x14e4) = 0x614;
            AnmManager::SetAndExecuteScript(this,(AnmVm *)(iVar1 + 0x1430),this->scripts[0x614]);
            *(undefined *)(*(int *)(in_ECX + 4) + 0x1ba0) = 3;
          }
          if (*(int *)(in_ECX + 0x10) == 0) {
            *(undefined4 *)(in_ECX + 0x10) = 0;
          }
          else {
            *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -4;
          }
          iVar1 = AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(*(int *)(in_ECX + 4) + 0x1430));
          if (iVar1 != 0) {
            *(undefined *)(*(int *)(in_ECX + 4) + 0x1ba0) = 0;
            *(undefined4 *)(in_ECX + 0x28) = 0;
            *(undefined4 *)(in_ECX + 0x10) = 0;
          }
        }
      }
      else if (*(char *)(*(int *)(in_ECX + 4) + 0x1ba0) == '\0') {
        iVar1 = *(int *)(in_ECX + 4);
        *(undefined2 *)(iVar1 + 0x14e4) = 0x613;
        AnmManager::SetAndExecuteScript(this,(AnmVm *)(iVar1 + 0x1430),this->scripts[0x613]);
        *(undefined *)(*(int *)(in_ECX + 4) + 0x1ba0) = 1;
        *(undefined4 *)(in_ECX + 0x10) = 0;
      }
      else {
        iVar1 = AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(*(int *)(in_ECX + 4) + 0x1430));
        if (iVar1 != 0) {
          *(undefined *)(*(int *)(in_ECX + 4) + 0x1ba0) = 2;
        }
        if (*(uint *)(in_ECX + 0x10) < 0xfc) {
          *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 4;
        }
        else {
          *(undefined4 *)(in_ECX + 0x10) = 0xff;
        }
      }
      if (1 < *(byte *)(*(int *)(in_ECX + 4) + 0x1ba0)) {
        if (*(float *)(in_ECX + 0x24) <= *(float *)(in_ECX + 0x28)) {
          if ((*(float *)(in_ECX + 0x24) < *(float *)(in_ECX + 0x28) !=
               (NAN(*(float *)(in_ECX + 0x24)) || NAN(*(float *)(in_ECX + 0x28)))) &&
             (*(float *)(in_ECX + 0x28) = *(float *)(in_ECX + 0x28) - 0.02,
             *(float *)(in_ECX + 0x28) < *(float *)(in_ECX + 0x24))) {
            *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x24);
          }
        }
        else {
          *(float *)(in_ECX + 0x28) = *(float *)(in_ECX + 0x28) + 0.01;
          if (*(float *)(in_ECX + 0x24) < *(float *)(in_ECX + 0x28) !=
              (NAN(*(float *)(in_ECX + 0x24)) || NAN(*(float *)(in_ECX + 0x28)))) {
            *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x24);
          }
        }
      }
    }
    else {
      AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(local_8 * 0x110 + *(int *)(in_ECX + 4)));
    }
  }
  AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(*(int *)(in_ECX + 4) + 0x1ba4));
  AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(*(int *)(in_ECX + 4) + 0x1cb4));
  AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(*(int *)(in_ECX + 4) + 0x1dc4));
  AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(*(int *)(in_ECX + 4) + 0x1fe4));
  AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(*(int *)(in_ECX + 4) + 0x1ed4));
  AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(*(int *)(in_ECX + 4) + 0x20f4));
  if ((-1 < *(short *)(*(int *)(in_ECX + 4) + 0x24d4)) &&
     (iVar1 = AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(*(int *)(in_ECX + 4) + 0x2424)),
     iVar1 != 0)) {
    *(undefined2 *)(*(int *)(in_ECX + 4) + 0x24d4) = 0xffff;
  }
  if (*(int *)(*(int *)(in_ECX + 4) + 0x2bf4) != 0) {
    if (*(int *)(*(int *)(in_ECX + 4) + 0x2c00) < 0x1e) {
      *(float *)(*(int *)(in_ECX + 4) + 0x2be4) =
           (((float)*(int *)(*(int *)(in_ECX + 4) + 0x2c00) +
            *(float *)(*(int *)(in_ECX + 4) + 0x2bfc)) * -312.0) / 30.0 + 416.0;
    }
    else {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2be4) = 0x42d00000;
    }
    if (0xf9 < *(int *)(*(int *)(in_ECX + 4) + 0x2c00)) {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2bf4) = 0;
    }
    FUN_0041b5af();
  }
  if (*(int *)(*(int *)(in_ECX + 4) + 0x2c14) != 0) {
    if (*(int *)(*(int *)(in_ECX + 4) + 0x2c20) < 0x1e) {
      *(float *)(*(int *)(in_ECX + 4) + 0x2c04) =
           (((float)*(int *)(*(int *)(in_ECX + 4) + 0x2c20) +
            *(float *)(*(int *)(in_ECX + 4) + 0x2c1c)) * -312.0) / 30.0 + 416.0;
    }
    else {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2c04) = 0x42d00000;
    }
    if (0xb3 < *(int *)(*(int *)(in_ECX + 4) + 0x2c20)) {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2c14) = 0;
    }
    FUN_0041b5af();
  }
  if (*(int *)(*(int *)(in_ECX + 4) + 0x2c34) != 0) {
    if (0x117 < *(int *)(*(int *)(in_ECX + 4) + 0x2c40)) {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2c34) = 0;
    }
    FUN_0041b5af();
  }
  if (*(int *)(*(int *)(in_ECX + 4) + 0x2bdc) == 1) {
    local_c = (g_GameManager.current_stage * 1000 + g_GameManager.graze_in_stage * 10 +
              (uint)g_GameManager.current_power * 100) *
              (uint)g_GameManager.point_items_collected_in_stage;
    if (5 < (int)g_GameManager.current_stage) {
      local_c = local_c + (char)g_GameManager.lives_remaining * 3000000 +
                (char)g_GameManager.bombs_remaining * 1000000;
    }
    if (g_GameManager.difficulty == 0) {
      local_c = local_c / 2 - (local_c / 2) % 10;
    }
    else if (g_GameManager.difficulty == 2) {
      local_c = (local_c * 0xc) / 10;
      local_c = local_c - local_c % 10;
    }
    else if (g_GameManager.difficulty == 3) {
      local_c = (local_c * 0xf) / 10;
      local_c = local_c - local_c % 10;
    }
    else if (g_GameManager.difficulty == 4) {
      local_c = local_c * 2 - (local_c * 2) % 10;
    }
    if (g_GameContext.lifeCount == 3) {
      local_c = (local_c * 5) / 10;
      local_c = local_c - local_c % 10;
    }
    else if (g_GameContext.lifeCount == 4) {
      local_c = (local_c << 1) / 10;
      local_c = local_c - local_c % 10;
    }
    *(int *)(*(int *)(in_ECX + 4) + 0x2be0) = local_c;
    g_GameManager.score = g_GameManager.score + local_c;
    *(int *)(*(int *)(in_ECX + 4) + 0x2bdc) = *(int *)(*(int *)(in_ECX + 4) + 0x2bdc) + 1;
  }
  return;
}

