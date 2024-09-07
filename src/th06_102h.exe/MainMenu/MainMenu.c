
void __thiscall th06::MainMenu::MainMenu(MainMenu *this)

{
  MainMenu *local_20;
  int local_18;
  
  local_18 = 0x7a;
  local_20 = this;
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm((AnmVm *)local_20);
    local_20 = (MainMenu *)(local_20->vmList + 1);
  }
  return;
}

