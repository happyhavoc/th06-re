
void __thiscall MainMenu::MainMenu(MainMenu *this)

{
  MainMenu *local_20;
  int local_18;
  
  local_18 = 0x7a;
  local_20 = this;
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(local_20->field0_0x0);
    local_20 = (MainMenu *)(local_20->field0_0x0 + 1);
  }
  return;
}

