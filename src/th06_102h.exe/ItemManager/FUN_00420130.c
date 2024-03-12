
void __thiscall ItemManager::FUN_00420130(ItemManager *this)

{
  Item *local_c;
  int local_8;
  
  local_c = (Item *)this;
  for (local_8 = 0; local_8 < 0x200; local_8 = local_8 + 1) {
    if (local_c->is_in_use != 0) {
      local_c->state = 1;
    }
    local_c = local_c + 1;
  }
  return;
}

