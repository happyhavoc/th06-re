
undefined4 FUN_0043a1ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  
  for (local_8 = 0x15; local_8 < 0x1b; local_8 = local_8 + 1) {
    FUN_00432030(VERY_BIG_STRUCT,local_8);
  }
  iVar1 = VeryBigStruct::LogoStuff(VERY_BIG_STRUCT,0,"data/title/select00.jpg");
  if (iVar1 == 0) {
    iVar1 = VeryBigStruct::LoadAnim(VERY_BIG_STRUCT,0x24,"data/replay00.anm",0x160);
    if (iVar1 == 0) {
      local_c = param_1 + 0x6600;
      for (local_8 = 0x160; local_8 < 0x17a; local_8 = local_8 + 1) {
        FUN_004051b0(local_c,local_8);
        *(uint *)(local_c + 0x80) = *(uint *)(local_c + 0x80) & 0xfffffffe;
        *(uint *)(local_c + 0x80) = *(uint *)(local_c + 0x80) | 8;
        if ((g_GameContext.cfg.field34_0x34 & 1U) == 0) {
          *(undefined4 *)(local_c + 0x7c) = 0xff000000;
        }
        else {
          *(undefined4 *)(local_c + 0x7c) = 0xffffffff;
        }
        *(undefined4 *)(local_c + 0xe4) = 0;
        *(undefined4 *)(local_c + 0xe8) = 0;
        *(undefined4 *)(local_c + 0xec) = 0;
        *(undefined2 *)(local_c + 0xb2) = *(undefined2 *)(local_c + 0xb0);
        *(uint *)(local_c + 0x80) = *(uint *)(local_c + 0x80) | 0x1000;
        local_c = local_c + 0x110;
      }
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

