
/* WARNING: Removing unreachable block (ram,0x004132b0) */
/* WARNING: Removing unreachable block (ram,0x004132ea) */

ZunResult EnemyManager::AddedCallback(EnemyManager *param_1)

{
  ZunResult ZVar1;
  ushort local_10;
  ushort local_c;
  
  if ((param_1->stg_enm_anm_filename == (char *)0x0) ||
     (ZVar1 = AnmManager::LoadAnm(g_AnmManager,8,param_1->stg_enm_anm_filename,0x100),
     ZVar1 == ZUN_SUCCESS)) {
    if ((param_1->stg_enm2_anm_filename == (char *)0x0) ||
       (ZVar1 = AnmManager::LoadAnm(g_AnmManager,9,param_1->stg_enm2_anm_filename,0x100),
       ZVar1 == ZUN_SUCCESS)) {
      local_c = Rng::GetRandomU16(&g_Rng);
      local_c = local_c % 3;
      param_1->random_item_spawn_index = local_c;
      local_10 = Rng::GetRandomU16(&g_Rng);
      local_10 = local_10 % 8;
      param_1->random_item_table_index = local_10;
      param_1->spellcard_capture = 0;
      param_1->timeline_instr = (void *)0x0;
      ZVar1 = ZUN_SUCCESS;
    }
    else {
      ZVar1 = ZUN_ERROR;
    }
  }
  else {
    ZVar1 = ZUN_ERROR;
  }
  return ZVar1;
}

