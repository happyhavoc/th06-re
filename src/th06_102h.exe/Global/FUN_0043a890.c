
void FUN_0043a890(short param_1,int param_2,ushort param_3)

{
  int **in_ECX;
  int iVar1;
  undefined4 *puVar2;
  uint unaff_retaddr;
  undefined4 local_44 [4];
  undefined4 local_34;
  uint local_20;
  undefined2 local_1c;
  short sStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  int local_14;
  ushort local_10;
  ushort uStack_e;
  undefined2 local_c;
  int *local_8;
  
  local_20 = __security_cookie ^ unaff_retaddr;
  local_8 = (int *)0x0;
  if (*in_ECX != (int *)0x0) {
    puVar2 = local_44;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_44[0] = 0x24;
    local_44[1] = 1;
    local_44[2] = 0;
    local_34 = 0;
    iVar1 = (**(code **)(**in_ECX + 0xc))(*in_ECX,local_44,&local_8,0);
    if (-1 < iVar1) {
      local_c = 0;
      local_1c = 1;
      sStack_1a = param_1;
      local_18 = (undefined2)param_2;
      uStack_16 = (undefined2)((uint)param_2 >> 0x10);
      uStack_e = param_3;
      local_10 = (short)((int)(uint)param_3 >> 3) * param_1;
      local_14 = param_2 * (uint)local_10;
      iVar1 = (**(code **)(*local_8 + 0x38))(local_8,&local_1c);
      if ((-1 < iVar1) && (local_8 != (int *)0x0)) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
    }
  }
  __security_check_cookie(local_20 ^ unaff_retaddr);
  return;
}

