
/* WARNING: Removing unreachable block (ram,0x004132b0) */
/* WARNING: Removing unreachable block (ram,0x004132ea) */

undefined4 EnemyManager::AddedCallback(char **param_1)

{
  ZunResult ZVar1;
  undefined4 uVar2;
  ushort local_10;
  ushort local_c;
  
  if ((*param_1 == (char *)0x0) ||
     (ZVar1 = AnmManager::LoadAnm(g_AnmManager,8,*param_1,0x100), ZVar1 == ZUN_SUCCESS)) {
    if ((param_1[1] == (char *)0x0) ||
       (ZVar1 = AnmManager::LoadAnm(g_AnmManager,9,param_1[1],0x100), ZVar1 == ZUN_SUCCESS)) {
      local_c = Rng::GetRandomU16(&g_Rng);
      local_c = local_c % 3;
      *(ushort *)(param_1 + 0x3b96e) = local_c;
      local_10 = Rng::GetRandomU16(&g_Rng);
      local_10 = local_10 % 8;
      *(ushort *)((int)param_1 + 0xee5ba) = local_10;
      param_1[0x3b972] = (char *)0x0;
      param_1[0x3b977] = (char *)0x0;
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

