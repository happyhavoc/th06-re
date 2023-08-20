
/* WARNING: Removing unreachable block (ram,0x004132b0) */
/* WARNING: Removing unreachable block (ram,0x004132ea) */

undefined4 FUN_00413220(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 local_10;
  undefined2 local_c;
  
  if ((*param_1 == 0) || (iVar1 = FUN_00431dc0(8,*param_1,0x100), iVar1 == 0)) {
    if ((param_1[1] == 0) || (iVar1 = FUN_00431dc0(9,param_1[1],0x100), iVar1 == 0)) {
      uVar3 = FUN_0041e780();
      local_c = (undefined2)((uVar3 & 0xffff) % 3);
      *(undefined2 *)(param_1 + 0x3b96e) = local_c;
      uVar3 = FUN_0041e780();
      local_10 = (undefined2)((uVar3 & 0xffff) % 8);
      *(undefined2 *)((int)param_1 + 0xee5ba) = local_10;
      param_1[0x3b972] = 0;
      param_1[0x3b977] = 0;
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

