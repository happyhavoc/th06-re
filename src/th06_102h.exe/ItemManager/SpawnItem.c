
void __thiscall
ItemManager::SpawnItem(ItemManager *this,D3DXVECTOR3 *heading,ItemType itemType,int state)

{
  AnmManager *this_00;
  float fVar1;
  undefined3 in_stack_00000009;
  short local_14;
  Item *item;
  int local_8;
  
  item = this->items + (int)this[1].items[1].vm.rotation.x;
  local_8 = 0;
  while( true ) {
    if (0x1ff < local_8) {
      return;
    }
    this[1].items[1].vm.rotation.x = (float)((int)this[1].items[1].vm.rotation.x + 1);
    if (item->is_in_use == 0) break;
    if ((int)this[1].items[1].vm.rotation.x < 0x200) {
      item = item + 1;
    }
    else {
      this[1].items[1].vm.rotation.x = 0.0;
      item = this->items;
    }
    local_8 = local_8 + 1;
  }
  if (0x1ff < (int)this[1].items[1].vm.rotation.x) {
    this[1].items[1].vm.rotation.x = 0.0;
  }
  item->is_in_use = 1;
  (item->position).x = heading->x;
  (item->position).y = heading->y;
  (item->position).z = heading->z;
  (item->velocity).x = 0.0;
  (item->velocity).y = -2.2;
  (item->velocity).z = 0.0;
  item->item_type = itemType;
  item->state = (byte)state;
  (item->timer).current = 0;
  (item->timer).subFrame = 0.0;
  (item->timer).previous = -999;
  if (state == 2) {
    fVar1 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    (item->unk).x = fVar1 * 288.0 + 48.0;
    fVar1 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    (item->unk).y = fVar1 * 192.0 - 64.0;
    (item->unk).z = 0.0;
    (item->velocity).x = (item->position).x;
    (item->velocity).y = (item->position).y;
    (item->velocity).z = (item->position).z;
  }
  this_00 = g_AnmManager;
  local_14 = (short)_itemType + 0x215;
  (item->vm).anmFileIndex = local_14;
  AnmManager::SetAndExecuteScript(this_00,&item->vm,this_00->scripts[_itemType + 0x215]);
  (item->vm).color.color = 0xffffffff;
  item->field7_0x142 = 1;
  return;
}

