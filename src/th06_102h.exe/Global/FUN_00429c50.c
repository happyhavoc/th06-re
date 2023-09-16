
undefined4 FUN_00429c50(Unknown *param_1)

{
  AnmManager *pAVar1;
  int iVar2;
  undefined4 *puVar3;
  Unknown *pUVar4;
  float10 fVar5;
  float *local_c;
  int local_8;
  
  if (DAT_0069d4bd == 0) {
    if ((g_GameContext.unkInput2 != 3) &&
       (iVar2 = AnmManager::LoadAnim(g_AnmManager,5,"data/player00.anm",0x400), iVar2 != 0)) {
      return 0xffffffff;
    }
    pAVar1 = g_AnmManager;
    *(undefined2 *)&param_1->field_0xb4 = 0x400;
    FUN_00432430(param_1,(int)pAVar1->scripts[0x400]);
  }
  else if (DAT_0069d4bd == 1) {
    if ((g_GameContext.unkInput2 != 3) &&
       (iVar2 = AnmManager::LoadAnim(g_AnmManager,5,"data/player01.anm",0x400), iVar2 != 0)) {
      return 0xffffffff;
    }
    pAVar1 = g_AnmManager;
    *(undefined2 *)&param_1->field_0xb4 = 0x400;
    FUN_00432430(param_1,(int)pAVar1->scripts[0x400]);
  }
  param_1[5].field13_0x3c.field12_0x30 = (int)(VIEWPORT_WIDTH / 2.0);
  param_1[5].field13_0x3c.field13_0x34 = (int)(VIEWPORT_HEIGHT - 64.0);
  param_1[5].field13_0x3c.field14_0x38 = 0x3efae148;
  param_1[6].field4_0x10 = 0x3efae148;
  param_1[6].field7_0x1c = 0.49;
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    (&param_1[8].field6_0x18)[local_8 * 3] = 0.0;
  }
  *(undefined4 *)&param_1[5].field_0xb4 = 0x3fa00000;
  *(undefined4 *)&param_1[5].field_0xb8 = 0x3fa00000;
  *(undefined4 *)&param_1[5].field_0xbc = 0x40a00000;
  param_1[5].field67_0xc0 = (AnmLoadedSprite *)0x41400000;
  param_1[6].field0_0x0 = 0x41400000;
  param_1[6].field1_0x4 = 0x40a00000;
  param_1[0xd].field6_0x18 = 0.0;
  puVar3 = (undefined4 *)(&DAT_00476728 + ((uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2) * 0x18);
  pUVar4 = param_1 + 0xd;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    pUVar4->field0_0x0 = *puVar3;
    puVar3 = puVar3 + 1;
    pUVar4 = (Unknown *)&pUVar4->field1_0x4;
  }
  fVar5 = (float10)FUN_0045bc34(0x4000000000000000);
  param_1[0xd].field2_0x8 = (float)param_1[0xd].field0_0x0 / (float)fVar5;
  fVar5 = (float10)FUN_0045bc34(0x4000000000000000);
  param_1[0xd].field3_0xc = (float)param_1[0xd].field1_0x4 / (float)fVar5;
  *(undefined4 *)&param_1[0x99].field_0x9c = param_1[0xd].field4_0x10;
  *(undefined4 *)&param_1[0x99].field_0xa0 = param_1[0xd].field5_0x14;
  *(undefined *)&param_1[0xc].field52_0xb0 = 1;
  param_1[0x99].field31_0x98 = 1.681558e-43;
  *(undefined4 *)&param_1[0x99].field_0x94 = 0;
  *(undefined4 *)&param_1[0x99].field_0x90 = 0xfffffc19;
  param_1[0xc].field_0xb2 = 0;
  pAVar1 = g_AnmManager;
  *(undefined2 *)&param_1[2].field13_0x3c.field0_0x0 = 0x480;
  FUN_00432430((Unknown *)&param_1[1].field13_0x3c.field4_0x10,(int)pAVar1->scripts[0x480]);
  pAVar1 = g_AnmManager;
  param_1[3].field18_0x88 = 0x481;
  FUN_00432430((Unknown *)&param_1[2].field31_0x98,(int)pAVar1->scripts[0x481]);
  local_c = &param_1[0xd].field12_0x30.subFrame;
  for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
    *(undefined2 *)((int)local_c + 0x14e) = 0;
    local_c = local_c + 0x56;
  }
  *(undefined4 *)&param_1[0x99].field20_0x8c = 0xffffffff;
  param_1[0x99].field18_0x88 = 0;
  param_1[0x99].field19_0x8a = 0;
  param_1[0x99].field16_0x84 = 0xfc19;
  param_1[0x99].field17_0x86 = 0xffff;
  *(undefined **)&param_1[0x99].field_0xb8 =
       (&PTR_FUN_00476708)[((uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2) * 2];
  *(undefined **)&param_1[0x99].field_0xbc =
       (&PTR_FUN_0047670c)[((uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2) * 2];
  *(undefined4 *)&param_1[0x99].field_0xa4 = 0;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    puVar3 = (undefined4 *)(&param_1[0xc].field18_0x88 + local_8 * 6);
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0xfffffc19;
  }
  *(undefined4 *)&param_1[0xc].field_0xa4 = 0x3f800000;
  *(undefined4 *)&param_1[0xc].field_0xa0 = 0x3f800000;
  *(undefined4 *)&param_1[0xc].field_0xa8 = 8;
  return 0;
}

