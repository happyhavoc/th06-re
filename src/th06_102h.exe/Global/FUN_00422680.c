
void FUN_00422680(void)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  undefined8 uVar6;
  uint local_14;
  uint local_10;
  int local_8;
  
  bVar2 = false;
  uVar6 = __allmul(*(undefined4 *)(in_ECX + 0x128),*(undefined4 *)(in_ECX + 300),
                   *(int *)(in_ECX + 0x11c),*(int *)(in_ECX + 0x11c) >> 0x1f);
  uVar6 = __allmul(uVar6,1000,0);
  uVar6 = __aulldiv(uVar6,*(int *)(in_ECX + 0x120),*(int *)(in_ECX + 0x120) >> 0x1f);
  local_14 = *(uint *)(in_ECX + 0x130) + (uint)uVar6;
  local_10 = *(int *)(in_ECX + 0x134) + (int)((ulonglong)uVar6 >> 0x20) +
             (uint)CARRY4(*(uint *)(in_ECX + 0x130),(uint)uVar6);
  if (*(int *)(in_ECX + 0x2e0) != 0) {
    if (*(int *)(in_ECX + 0x2e4) <= *(int *)(in_ECX + 0x2e8)) {
      *(undefined4 *)(in_ECX + 0x2c8) = 0;
      return;
    }
    *(float *)(in_ECX + 0x2c8) =
         1.0 - (float)*(int *)(in_ECX + 0x2e8) / (float)*(int *)(in_ECX + 0x2e4);
    iVar3 = __ftol2();
    if (iVar3 != *(int *)(in_ECX + 0x2cc)) {
      FUN_00423260(0);
    }
    uVar4 = __ftol2();
    *(undefined4 *)(in_ECX + 0x2cc) = uVar4;
    *(int *)(in_ECX + 0x2e8) = *(int *)(in_ECX + 0x2e8) + 1;
  }
  local_8 = 0;
  do {
    if (*(int *)(in_ECX + 0x114) <= local_8) {
      uVar1 = *(uint *)(in_ECX + 0x128);
      *(uint *)(in_ECX + 0x128) = uVar1 + 1;
      *(uint *)(in_ECX + 300) = *(int *)(in_ECX + 300) + (uint)(0xfffffffe < uVar1);
      if (!bVar2) {
        FUN_004223c0();
      }
      return;
    }
    if (*(int *)(local_8 * 0x20 + *(int *)(in_ECX + 0x138)) != 0) {
      bVar2 = true;
      while (*(int *)(local_8 * 0x20 + *(int *)(in_ECX + 0x138)) != 0) {
        uVar1 = *(uint *)(*(int *)(in_ECX + 0x138) + 4 + local_8 * 0x20);
        uVar5 = (int)uVar1 >> 0x1f;
        if ((local_10 < uVar5) || ((local_10 <= uVar5 && (local_14 < uVar1)))) break;
        FUN_00422900(local_8 * 0x20 + *(int *)(in_ECX + 0x138));
        uVar6 = __allmul(*(undefined4 *)(in_ECX + 0x128),*(undefined4 *)(in_ECX + 300),
                         *(int *)(in_ECX + 0x11c),*(int *)(in_ECX + 0x11c) >> 0x1f);
        uVar6 = __allmul(uVar6,1000,0);
        uVar6 = __aulldiv(uVar6,*(int *)(in_ECX + 0x120),*(int *)(in_ECX + 0x120) >> 0x1f);
        local_14 = *(uint *)(in_ECX + 0x130) + (uint)uVar6;
        local_10 = *(int *)(in_ECX + 0x134) + (int)((ulonglong)uVar6 >> 0x20) +
                   (uint)CARRY4(*(uint *)(in_ECX + 0x130),(uint)uVar6);
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

