
void __thiscall ItemManager::FUN_00420190(ItemManager *this)

{
  float fVar1;
  long lVar2;
  ItemManager *pIStack_10;
  int local_c;
  int local_8;
  
  pIStack_10 = this;
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    if (pIStack_10->items[0].is_in_use != 0) {
      pIStack_10->items[0].vm.pos.x =
           g_GameManager.arcade_region_top_left_pos.x + pIStack_10->items[0].position.x;
      pIStack_10->items[0].vm.pos.y =
           g_GameManager.arcade_region_top_left_pos.y + pIStack_10->items[0].position.y;
      pIStack_10->items[0].vm.pos.z = 0.01;
      fVar1 = pIStack_10->items[0].position.y;
      if (fVar1 < -8.0 == NAN(fVar1)) {
        if (pIStack_10->items[0].field7_0x142 == 0) {
          AnmManager::SetActiveSprite
                    (g_AnmManager,(AnmVm *)pIStack_10,
                     (int)(char)pIStack_10->items[0].item_type + 0x200);
          pIStack_10->items[0].field7_0x142 = 1;
          pIStack_10->items[0].vm.color.color = 0xffffffff;
        }
      }
      else {
        pIStack_10->items[0].vm.pos.y = g_GameManager.arcade_region_top_left_pos.y + 8.0;
        if (pIStack_10->items[0].field7_0x142 != 0) {
          AnmManager::SetActiveSprite
                    (g_AnmManager,(AnmVm *)pIStack_10,
                     (int)(char)pIStack_10->items[0].item_type + 0x207);
          pIStack_10->items[0].field7_0x142 = 0;
        }
        lVar2 = __ftol2(((8.0 - pIStack_10->items[0].position.y) * 255.0) / 128.0);
        local_8 = 0xff - lVar2;
        if (local_8 < 0x40) {
          local_8 = 0x40;
        }
        pIStack_10->items[0].vm.color.color =
             pIStack_10->items[0].vm.color.color & 0xffffff | local_8 << 0x18;
      }
      AnmManager::DrawNoRotation(g_AnmManager,(AnmVm *)pIStack_10);
    }
    pIStack_10 = (ItemManager *)(pIStack_10->items + 1);
  }
  return;
}

