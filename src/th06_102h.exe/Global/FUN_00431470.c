
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00431470(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  int local_1c;
  int local_8;
  
  FUN_00403720();
  local_1c = 4;
  do {
    local_1c = local_1c + -1;
  } while (-1 < local_1c);
  in_ECX[0x724c] = 0;
  puVar2 = in_ECX;
  for (iVar1 = 0x844b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (local_8 = 0; local_8 < 0x800; local_8 = local_8 + 1) {
    in_ECX[local_8 * 0xe] = 0xffffffff;
  }
  DAT_006d4654 = 0x3f800000;
  DAT_006d463c = 0x3f800000;
  DAT_006d4624 = 0x3f800000;
  _DAT_006d460c = 0x3f800000;
  _DAT_006d4610 = 0;
  _DAT_006d4614 = 0;
  _DAT_006d4628 = 0x3f800000;
  DAT_006d462c = 0;
  DAT_006d4640 = 0;
  _DAT_006d4644 = 0x3f800000;
  DAT_006d4658 = 0x3f800000;
  DAT_006d465c = 0x3f800000;
  DAT_006d45f0 = 0x3f800000;
  DAT_006d45d4 = 0x3f800000;
  DAT_006d45b8 = 0x3f800000;
  _DAT_006d459c = 0x3f800000;
  _DAT_006d45a4 = 0;
  _DAT_006d45a8 = 0;
  _DAT_006d45c0 = 0x3f800000;
  DAT_006d45c4 = 0;
  DAT_006d45dc = 0;
  _DAT_006d45e0 = 0x3f800000;
  DAT_006d45f8 = 0x3f800000;
  DAT_006d45fc = 0x3f800000;
  in_ECX[0x8431] = 0;
  in_ECX[0x842e] = 0;
  *(undefined *)(in_ECX + 0x842f) = 0;
  *(undefined *)((int)in_ECX + 0x210bd) = 0;
  in_ECX[0x842d] = 1;
  *(undefined *)((int)in_ECX + 0x210be) = 0;
  *(undefined *)((int)in_ECX + 0x210bf) = 0;
  in_ECX[0x8446] = 0xffffffff;
  return in_ECX;
}

