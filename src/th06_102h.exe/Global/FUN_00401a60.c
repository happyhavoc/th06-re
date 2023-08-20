
void FUN_00401a60(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  int in_ECX;
  int local_c;
  
  if (2 < *(int *)(in_ECX + 0x623c)) {
    *(undefined4 *)(in_ECX + 0x623c) = 0;
  }
  puVar1 = (undefined *)(in_ECX + 0x7134 + (*(int *)(in_ECX + 0x623c) + 0x200) * 0x28);
  puVar1[0x24] = 1;
  local_c = 0;
  if (param_2 < 0) {
    *puVar1 = 10;
    local_c = 1;
  }
  else {
    for (; param_2 != 0; param_2 = param_2 / 10) {
      puVar1[local_c] = (char)(param_2 % 10);
      local_c = local_c + 1;
    }
  }
  if (local_c == 0) {
    *puVar1 = 0;
    local_c = 1;
  }
  puVar1[0x25] = (undefined)local_c;
  *(undefined4 *)(puVar1 + 0x14) = param_3;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0xfffffc19;
  *(undefined4 *)(puVar1 + 8) = *param_1;
  *(undefined4 *)(puVar1 + 0xc) = param_1[1];
  *(undefined4 *)(puVar1 + 0x10) = param_1[2];
  *(int *)(in_ECX + 0x623c) = *(int *)(in_ECX + 0x623c) + 1;
  return;
}

