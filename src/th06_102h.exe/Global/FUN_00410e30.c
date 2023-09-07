
void __fastcall FUN_00410e30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_8;
  
  puVar2 = param_1;
  for (iVar1 = 0x3b97b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 2;
  for (iVar1 = 0x3b2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    *(undefined2 *)(param_1 + local_8 * 0x44 + 0x73) = 0xffff;
  }
  *(byte *)(param_1 + 0x396) = *(byte *)(param_1 + 0x396) | 0x80;
  param_1[0x340] = 0;
  param_1[0x33f] = 0;
  param_1[0x33e] = 0xfffffc19;
  *(byte *)((int)param_1 + 0xe59) = *(byte *)((int)param_1 + 0xe59) | 1;
  *(byte *)((int)param_1 + 0xe59) = *(byte *)((int)param_1 + 0xe59) | 2;
  *(byte *)((int)param_1 + 0xe59) = *(byte *)((int)param_1 + 0xe59) & 0xfb;
  param_1[800] = 0x41400000;
  param_1[0x321] = 0x41400000;
  param_1[0x322] = 0x41400000;
  param_1[0x323] = 0;
  param_1[0x324] = 0;
  param_1[0x325] = 0;
  param_1[0x327] = 0;
  param_1[0x326] = 0;
  param_1[0x329] = 0;
  param_1[0x328] = 0;
  *(byte *)(param_1 + 0x396) = *(byte *)(param_1 + 0x396) & 0xfc;
  *(byte *)(param_1 + 0x396) = *(byte *)(param_1 + 0x396) & 0xdf;
  *(byte *)(param_1 + 0x396) = *(byte *)(param_1 + 0x396) & 0xbf;
  *(byte *)((int)param_1 + 0xe59) = *(byte *)((int)param_1 + 0xe59) & 0xf7;
  param_1[0x311] = 0;
  param_1[0x33b] = 1;
  param_1[0x33d] = 100;
  *(undefined *)(param_1 + 0x391) = 0;
  *(undefined *)((int)param_1 + 0xe45) = 0;
  *(undefined *)((int)param_1 + 0xe46) = 0;
  param_1[0x357] = 0;
  param_1[0x35a] = 0;
  param_1[0x359] = 0;
  param_1[0x358] = 0xfffffc19;
  param_1[0x32a] = 0;
  param_1[0x32b] = 0;
  param_1[0x32c] = 0;
  *(undefined2 *)((int)param_1 + 0xe62) = 0xffff;
  *(undefined2 *)(param_1 + 0x399) = 0xffff;
  *(undefined2 *)(param_1 + 0x397) = 0xffff;
  *(byte *)((int)param_1 + 0xe59) = *(byte *)((int)param_1 + 0xe59) | 0x10;
  *(byte *)((int)param_1 + 0xe59) = *(byte *)((int)param_1 + 0xe59) & 0x1f;
  param_1[0x313] = 0xffffffff;
  *(byte *)((int)param_1 + 0xe5a) = *(byte *)((int)param_1 + 0xe5a) & 0xfe;
  param_1[0x3aa] = 0;
  param_1[0x31c] = 0xffffffff;
  param_1[0x3ac] = 0xffffffff;
  param_1[0x3ae] = 0xffffffff;
  param_1[0x390] = 0;
  *(undefined *)((int)param_1 + 0xe49) = 0;
  *(byte *)((int)param_1 + 0xe5a) = *(byte *)((int)param_1 + 0xe5a) & 0xfd;
  param_1[0x337] = 0xbf000000;
  param_1[0x338] = 0x3f000000;
  return;
}

