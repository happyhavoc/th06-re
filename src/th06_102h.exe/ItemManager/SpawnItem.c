
void __thiscall
ItemManager::SpawnItem(ItemManager *this,D3DXVECTOR3 *param_1,int itemType,int state)

{
  AnmManager *this_00;
  float fVar1;
  short local_14;
  Item *local_c;
  int local_8;
  
  local_c = (Item *)(this + *(int *)(this + 0x201));
  local_8 = 0;
  while( true ) {
    if (0x1ff < local_8) {
      return;
    }
    *(int *)(this + 0x201) = *(int *)(this + 0x201) + 1;
    if (local_c->is_in_use == 0) break;
    if (*(int *)(this + 0x201) < 0x200) {
      local_c = local_c + 1;
    }
    else {
      *(undefined4 *)(this + 0x201) = 0;
      local_c = (Item *)this;
    }
    local_8 = local_8 + 1;
  }
  if (0x1ff < *(int *)(this + 0x201)) {
    *(undefined4 *)(this + 0x201) = 0;
  }
  local_c->is_in_use = 1;
  (local_c->position).x = param_1->x;
  (local_c->position).y = param_1->y;
  (local_c->position).z = param_1->z;
  (local_c->velocity).x = 0.0;
  (local_c->velocity).y = -2.2;
  (local_c->velocity).z = 0.0;
  local_c->item_type = (byte)itemType;
  local_c->state = (byte)state;
  (local_c->timer).current = 0;
  (local_c->timer).subFrame = 0.0;
  (local_c->timer).previous = -999;
  if (state == 2) {
    fVar1 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    (local_c->unk).x = fVar1 * 288.0 + 48.0;
    fVar1 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    (local_c->unk).y = fVar1 * 192.0 - 64.0;
    (local_c->unk).z = 0.0;
    (local_c->velocity).x = (local_c->position).x;
    (local_c->velocity).y = (local_c->position).y;
    (local_c->velocity).z = (local_c->position).z;
  }
  this_00 = g_AnmManager;
  local_14 = (short)itemType + 0x215;
  (local_c->vm).anmFileIndex = local_14;
  AnmManager::SetAndExecuteScript(this_00,&local_c->vm,this_00->scripts[itemType + 0x215]);
  (local_c->vm).color.color = 0xffffffff;
  local_c->field7_0x142 = 1;
  return;
}

