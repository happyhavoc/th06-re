
undefined4 *
FUN_00411390(undefined2 param_1,undefined4 *param_2,short param_3,undefined param_4,int param_5)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *local_c;
  int local_8;
  
  local_c = (undefined4 *)(in_ECX + 0xed0);
  local_8 = 0;
  while( true ) {
    if (0xff < local_8) {
      return local_c;
    }
    if (-1 < *(char *)(local_c + 0x394)) break;
    local_8 = local_8 + 1;
    local_c = local_c + 0x3b2;
  }
  puVar2 = (undefined4 *)(in_ECX + 8);
  puVar3 = local_c;
  for (iVar1 = 0x3b2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (-1 < param_3) {
    local_c[0x339] = (int)param_3;
  }
  local_c[0x31b] = *param_2;
  local_c[0x31c] = param_2[1];
  local_c[0x31d] = param_2[2];
  FUN_00407440(local_c + 0x264,CONCAT22((short)((uint)(local_c + 0x31b) >> 0x10),param_1));
  FUN_004074a0(local_c);
  local_c[0x33f] = local_c[0x1f];
  *(undefined *)((int)local_c + 0xe3f) = param_4;
  if (-1 < param_3) {
    local_c[0x339] = (int)param_3;
  }
  if (-1 < param_5) {
    local_c[0x33b] = param_5;
  }
  local_c[0x33a] = local_c[0x339];
  return local_c;
}

