
ChainCallbackResult GameManager::OnUpdate(GameManager *this)

{
  ChainCallbackResult CVar1;
  byte is_in_menu;
  uint local_8;
  
  if (this->demo_mode != 0) {
    if ((g_CurFrameInput != 0) && (g_CurFrameInput != g_LastFrameInput)) {
      g_Supervisor.curState = 1;
    }
    *(int *)&this->field_0x1828 = *(int *)&this->field_0x1828 + 1;
    if (*(int *)&this->field_0x1828 == 0xe10) {
      ScreenEffect::RegisterChain(2,0x78,0,0,0);
    }
    if (0xe87 < *(int *)&this->field_0x1828) {
      g_Supervisor.curState = 1;
    }
  }
  if ((((this->is_in_retry_menu == 0) && (this->is_in_game_menu == 0)) && (this->demo_mode == 0)) &&
     (((g_CurFrameInput & MENU) != 0 && ((g_CurFrameInput & MENU) != (g_LastFrameInput & MENU))))) {
    this->is_in_game_menu = 1;
    g_GameManager.arcade_region_top_left_pos.x = 32.0;
    g_GameManager.arcade_region_top_left_pos.y = 16.0;
    g_GameManager.arcade_region_size.x = 384.0;
    g_GameManager.arcade_region_size.y = 448.0;
    g_Supervisor.unk198 = 3;
  }
  if ((this->is_in_retry_menu == 0) && (this->is_in_game_menu == 0)) {
    is_in_menu = 1;
  }
  else {
    is_in_menu = 0;
  }
  this->is_in_menu = is_in_menu;
  g_Supervisor.viewport.X = __ftol2((this->arcade_region_top_left_pos).x);
  g_Supervisor.viewport.Y = __ftol2((this->arcade_region_top_left_pos).y);
  g_Supervisor.viewport.Width = __ftol2((this->arcade_region_size).x);
  g_Supervisor.viewport.Height = __ftol2((this->arcade_region_size).y);
  g_Supervisor.viewport.MinZ = 0.5;
  g_Supervisor.viewport.MaxZ = 1.0;
  FUN_0041c3f3(0);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)(g_Supervisor.d3dDevice,(D3DVIEWPORT8 *)0x6c6de0);
  (*(g_Supervisor.d3dDevice)->lpVtbl->Clear)
            (g_Supervisor.d3dDevice,0,(D3DRECT *)0x0,D3DCLEAR_ZBUFFER,g_Stage.skyFog.color,1.0,0);
  if (((this->is_in_game_menu == 1) || (this->is_in_game_menu == 2)) ||
     (this->is_in_retry_menu != 0)) {
    CVar1 = CHAIN_CALLBACK_RESULT_BREAK;
  }
  else {
    if (999999999 < this->score) {
      this->score = 999999990;
    }
    if (this->field0_0x0 != this->score) {
      if (this->score < (uint)this->field0_0x0) {
        this->score = this->field0_0x0;
      }
      local_8 = this->score - this->field0_0x0 >> 5;
      if (local_8 < 0x1343e) {
        if (local_8 < 10) {
          local_8 = 10;
        }
      }
      else {
        local_8 = 0x1343e;
      }
      local_8 = local_8 - local_8 % 10;
      if ((uint)this->field2_0x8 < local_8) {
        this->field2_0x8 = local_8;
      }
      if (this->score < (uint)(this->field0_0x0 + this->field2_0x8)) {
        this->field2_0x8 = this->score - this->field0_0x0;
      }
      this->field0_0x0 = this->field0_0x0 + this->field2_0x8;
      if (this->score <= (uint)this->field0_0x0) {
        this->field2_0x8 = 0;
        this->field0_0x0 = this->score;
      }
      if ((-1 < (char)this->field23_0x181c) &&
         (UINT_ARRAY_004764b0[(char)this->field23_0x181c] <= (uint)this->field0_0x0)) {
        if ((char)this->lives_remaining < '\b') {
          this->lives_remaining = this->lives_remaining + 1;
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0x1c);
        }
        g_Gui.flags = g_Gui.flags & 0xfffffffc | 2;
        this->field23_0x181c = this->field23_0x181c + 1;
        IncreaseSubrank(&g_GameManager,200);
      }
      if (this->high_score < (uint)this->field0_0x0) {
        this->high_score = this->field0_0x0;
      }
    }
    this->unk_1a30 = this->unk_1a30 + 1;
    CVar1 = CHAIN_CALLBACK_RESULT_CONTINUE;
  }
  return CVar1;
}

