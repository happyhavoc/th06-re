
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004378a2(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int local_c;
  DWORD local_8;
  
  iVar2 = FUN_00439da0();
  if (iVar2 == 0) {
    if (_DAT_006c7118 != 0) {
      local_8 = timeGetTime();
      while (local_8 - _DAT_006c7118 < 3000) {
        local_8 = timeGetTime();
      }
      _DAT_006c7118 = 0;
      FUN_00424b5d("bgm/th06_01.mid");
    }
    for (local_c = 0; local_c < 0x7a; local_c = local_c + 1) {
      *(undefined2 *)(in_ECX + 0x8a + local_c * 0x110) = 1;
      *(uint *)(in_ECX + 0x80 + local_c * 0x110) = *(uint *)(in_ECX + 0x80 + local_c * 0x110) | 8;
      if ((g_GameContext.cfg.field34_0x34 & 1U) == 0) {
        *(undefined4 *)(in_ECX + 0x7c + local_c * 0x110) = 0xff000000;
      }
      else {
        *(undefined4 *)(in_ECX + 0x7c + local_c * 0x110) = 0xffffffff;
      }
      puVar1 = (undefined4 *)(in_ECX + 0xe4 + local_c * 0x110);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    *(undefined4 *)(in_ECX + 0x81f0) = 1;
    uVar3 = 0;
  }
  else {
    g_GameContext._396_4_ = 4;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

