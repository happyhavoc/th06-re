
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042f060(byte **param_1)

{
  AnmManager *pAVar1;
  int iVar2;
  byte *pbVar3;
  short local_3c;
  int local_14;
  int local_10;
  AnmVm *local_c;
  int local_8;
  
  if (param_1[2] != (byte *)0x11) {
    iVar2 = AnmManager::LoadSurface(g_AnmManager,0,"data/result/result.jpg");
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    iVar2 = AnmManager::LoadAnm(g_AnmManager,0x25,"data/result00.anm",0x100);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    iVar2 = AnmManager::LoadAnm(g_AnmManager,0x26,"data/result01.anm",0x108);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    iVar2 = AnmManager::LoadAnm(g_AnmManager,0x27,"data/result02.anm",0x10f);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    iVar2 = AnmManager::LoadAnm(g_AnmManager,0x28,"data/result03.anm",0x125);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    local_c = (AnmVm *)(param_1 + 0x10);
    for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
      (local_c->pos).x = 0.0;
      (local_c->pos).y = 0.0;
      (local_c->pos).z = 0.0;
      (local_c->pos2).x = 0.0;
      (local_c->pos2).y = 0.0;
      (local_c->pos2).z = 0.0;
      pAVar1 = g_AnmManager;
      local_3c = (short)local_8 + 0x100;
      local_c->anmFileIndex = local_3c;
      AnmManager::SetBeginingOfScript(pAVar1,local_c,pAVar1->scripts[local_8 + 0x100]);
      local_c = local_c + 1;
    }
    local_c = (AnmVm *)(param_1 + 0xa28);
    for (local_8 = 0; pAVar1 = g_AnmManager, local_8 < 0x10; local_8 = local_8 + 1) {
      AnmVm::Initialize(local_c);
      AnmManager::FUN_004323a0(pAVar1,local_c,local_8 + 0x708);
      (local_c->pos).x = 0.0;
      (local_c->pos).y = 0.0;
      (local_c->pos).z = 0.0;
      local_c->flags = local_c->flags | 0x300;
      local_c->fontWidth = '\x0f';
      local_c->fontHeight = '\x0f';
      local_c = local_c + 1;
    }
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        param_1[local_8 * 0x118 + local_10 * 0x46 + local_14 * 7 + 0xeeb] =
             (byte *)(local_14 * -100000 + 1000000);
        param_1[local_8 * 0x118 + local_10 * 0x46 + local_14 * 7 + 0xee8] = (byte *)0x53594d44;
        *(undefined *)((int)param_1 + local_14 * 0x1c + local_10 * 0x118 + local_8 * 0x460 + 0x3bb1)
             = (undefined)local_8;
        *(undefined *)(param_1 + local_8 * 0x118 + local_10 * 0x46 + local_14 * 7 + 0xeea) = 0x10;
        *(undefined2 *)
         ((int)param_1 + local_14 * 0x1c + local_10 * 0x118 + local_8 * 0x460 + 0x3ba6) = 0x1c;
        *(undefined2 *)(param_1 + local_8 * 0x118 + local_10 * 0x46 + local_14 * 7 + 0xee9) = 0x1c;
        *(undefined *)((int)param_1 + local_14 * 0x1c + local_10 * 0x118 + local_8 * 0x460 + 0x3bb2)
             = 1;
        *(undefined *)((int)param_1 + local_14 * 0x1c + local_10 * 0x118 + local_8 * 0x460 + 0x3ba9)
             = 0;
        FUN_0042bc2d(param_1 + local_8 * 0x118 + local_10 * 0x46 + local_14 * 7 + 0xee8,local_8,
                     local_10);
        _strcpy((char *)((int)param_1 +
                        local_14 * 0x1c + local_10 * 0x118 + local_8 * 0x460 + 0x3bb3),"Nanashi ");
      }
    }
  }
  param_1[5] = (byte *)0x0;
  pbVar3 = FUN_0042b0d9("score.dat");
  *param_1 = pbVar3;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      FUN_0042b280(*param_1,param_1 + local_8 * 0xc + local_10 * 3 + 0xeac,local_10,local_8);
    }
  }
  if ((param_1[2] != (byte *)0x9) && (param_1[2] != (byte *)0x11)) {
    FUN_0042b466(*param_1,&DAT_0069bcd0);
    FUN_0042b502(*param_1,&DAT_0069ccd0);
    FUN_0042b65e(*param_1,&DAT_0069cd30);
  }
  if ((param_1[2] == (byte *)0x11) &&
     ((uint)(&DAT_0069cd3c)
            [(DAT_0069d6d4 + -1) * 0x14 +
             ((uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2) * 0x78 + _DAT_0069bcb0 * 5] <
      DAT_0069bca4)) {
    (&DAT_0069cd3c)
    [(DAT_0069d6d4 + -1) * 0x14 +
     ((uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2) * 0x78 + _DAT_0069bcb0 * 5] = DAT_0069bca4;
  }
  *(undefined2 *)(param_1 + 0xe94) = 0xffff;
  return 0;
}

