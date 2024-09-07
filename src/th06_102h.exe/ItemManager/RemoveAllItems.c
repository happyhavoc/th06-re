
void __thiscall th06::ItemManager::RemoveAllItems(ItemManager *this)

{
  Item *local_c;
  int local_8;
  
  local_8 = 0;
  local_c = this->items;
  for (; local_8 < 512; local_8 = local_8 + 1) {
    if (local_c->is_in_use != 0) {
      local_c->state = 1;
    }
    local_c = local_c + 1;
  }
  return;
}

