
void __thiscall
th06::ItemManager::SpawnItem(ItemManager *this,D3DXVECTOR3 *heading,ItemType itemType,int state)

{
  AnmManager *this_00;
  float fVar1;
  undefined3 in_stack_00000009;
  short local_14;
  Item *item;
  int local_8;
  
  item = this->items + this->next_index;
  local_8 = 0;
  while( true ) {
    if (0x1ff < local_8) {
      return;
    }
    this->next_index = this->next_index + 1;
    if (item->is_in_use == 0) break;
    if ((int)this->next_index < 0x200) {
      item = item + 1;
    }
    else {
      this->next_index = 0;
      item = this->items;
    }
    local_8 = local_8 + 1;
  }
  if (0x1ff < (int)this->next_index) {
    this->next_index = 0;
  }
  item->is_in_use = 1;
  (item->currentPosition).x = heading->x;
  (item->currentPosition).y = heading->y;
  (item->currentPosition).z = heading->z;
  (item->startPosition).x = 0.0;
  (item->startPosition).y = -2.2;
  (item->startPosition).z = 0.0;
  item->item_type = itemType;
  item->state = (byte)state;
  (item->timer).current = 0;
  (item->timer).subFrame = 0.0;
  (item->timer).previous = -999;
  if (state == 2) {
    fVar1 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    (item->targetPosition).x = fVar1 * 288.0 + 48.0;
    fVar1 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    (item->targetPosition).y = fVar1 * 192.0 - 64.0;
    (item->targetPosition).z = 0.0;
    (item->startPosition).x = (item->currentPosition).x;
    (item->startPosition).y = (item->currentPosition).y;
    (item->startPosition).z = (item->currentPosition).z;
  }
  this_00 = g_AnmManager;
  local_14 = (short)_itemType + 0x215;
  (item->sprite).anmFileIndex = local_14;
  AnmManager::SetAndExecuteScript(this_00,&item->sprite,this_00->scripts[_itemType + 0x215]);
  (item->sprite).color.color = 0xffffffff;
  item->unk_142 = 1;
  return;
}

