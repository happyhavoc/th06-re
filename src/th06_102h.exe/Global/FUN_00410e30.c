
void FUN_00410e30(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  int local_8;
  
  puVar2 = in_ECX;
  for (iVar1 = 0x3b97b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = in_ECX + 2;
  for (iVar1 = 0x3b2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    *(undefined2 *)(in_ECX + local_8 * 0x44 + 0x73) = 0xffff;
  }
  *(byte *)(in_ECX + 0x396) = *(byte *)(in_ECX + 0x396) | 0x80;
  in_ECX[0x340] = 0;
  in_ECX[0x33f] = 0;
  in_ECX[0x33e] = 0xfffffc19;
  *(byte *)((int)in_ECX + 0xe59) = *(byte *)((int)in_ECX + 0xe59) | 1;
  *(byte *)((int)in_ECX + 0xe59) = *(byte *)((int)in_ECX + 0xe59) | 2;
  *(byte *)((int)in_ECX + 0xe59) = *(byte *)((int)in_ECX + 0xe59) & 0xfb;
  in_ECX[800] = 0x41400000;
  in_ECX[0x321] = 0x41400000;
  in_ECX[0x322] = 0x41400000;
  in_ECX[0x323] = 0;
  in_ECX[0x324] = 0;
  in_ECX[0x325] = 0;
  in_ECX[0x327] = 0;
  in_ECX[0x326] = 0;
  in_ECX[0x329] = 0;
  in_ECX[0x328] = 0;
  *(byte *)(in_ECX + 0x396) = *(byte *)(in_ECX + 0x396) & 0xfc;
  *(byte *)(in_ECX + 0x396) = *(byte *)(in_ECX + 0x396) & 0xdf;
  *(byte *)(in_ECX + 0x396) = *(byte *)(in_ECX + 0x396) & 0xbf;
  *(byte *)((int)in_ECX + 0xe59) = *(byte *)((int)in_ECX + 0xe59) & 0xf7;
  in_ECX[0x311] = 0;
  in_ECX[0x33b] = 1;
  in_ECX[0x33d] = 100;
  *(undefined *)(in_ECX + 0x391) = 0;
  *(undefined *)((int)in_ECX + 0xe45) = 0;
  *(undefined *)((int)in_ECX + 0xe46) = 0;
  in_ECX[0x357] = 0;
  in_ECX[0x35a] = 0;
  in_ECX[0x359] = 0;
  in_ECX[0x358] = 0xfffffc19;
  in_ECX[0x32a] = 0;
  in_ECX[0x32b] = 0;
  in_ECX[0x32c] = 0;
  *(undefined2 *)((int)in_ECX + 0xe62) = 0xffff;
  *(undefined2 *)(in_ECX + 0x399) = 0xffff;
  *(undefined2 *)(in_ECX + 0x397) = 0xffff;
  *(byte *)((int)in_ECX + 0xe59) = *(byte *)((int)in_ECX + 0xe59) | 0x10;
  *(byte *)((int)in_ECX + 0xe59) = *(byte *)((int)in_ECX + 0xe59) & 0x1f;
  in_ECX[0x313] = 0xffffffff;
  *(byte *)((int)in_ECX + 0xe5a) = *(byte *)((int)in_ECX + 0xe5a) & 0xfe;
  in_ECX[0x3aa] = 0;
  in_ECX[0x31c] = 0xffffffff;
  in_ECX[0x3ac] = 0xffffffff;
  in_ECX[0x3ae] = 0xffffffff;
  in_ECX[0x390] = 0;
  *(undefined *)((int)in_ECX + 0xe49) = 0;
  *(byte *)((int)in_ECX + 0xe5a) = *(byte *)((int)in_ECX + 0xe5a) & 0xfd;
  in_ECX[0x337] = 0xbf000000;
  in_ECX[0x338] = 0x3f000000;
  return;
}

