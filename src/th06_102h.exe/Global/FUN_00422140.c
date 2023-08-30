
void __thiscall FUN_00422140(int param_1_00,int param_2)

{
  undefined4 uVar1;
  DWORD_PTR cookie;
  uint uVar2;
  void *pvVar3;
  undefined2 *puVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined local_3c;
  undefined uStack_3b;
  undefined uStack_3a;
  undefined uStack_39;
  uint local_38;
  int local_30;
  undefined local_20;
  undefined uStack_1f;
  undefined uStack_1e;
  undefined uStack_1d;
  undefined *local_c;
  int local_8;
  
  cookie = __security_cookie;
  FUN_004220b0();
  iVar5 = *(int *)(param_1_00 + 0x94 + param_2 * 4);
  if (iVar5 == 0) {
    DebugPrint2(&DAT_0046b594);
  }
  else {
    uVar1 = *(undefined4 *)(iVar5 + 4);
    puVar4 = (undefined2 *)(iVar5 + 8);
    uStack_1d = (undefined)((uint)uVar1 >> 0x18);
    uStack_1e = (undefined)((uint)uVar1 >> 0x10);
    uStack_1f = (undefined)((uint)uVar1 >> 8);
    local_20 = (undefined)uVar1;
    local_30 = CONCAT13(local_20,CONCAT12(uStack_1f,CONCAT11(uStack_1e,uStack_1d)));
    local_c = (undefined *)((int)puVar4 + local_30);
    uVar2 = FUN_00421d70(CONCAT22((short)((uint)puVar4 >> 0x10),*puVar4));
    *(uint *)(param_1_00 + 0x118) = uVar2 & 0xffff;
    uVar2 = FUN_00421d70(CONCAT22(extraout_var,*(undefined2 *)(iVar5 + 0xc)));
    *(uint *)(param_1_00 + 0x11c) = uVar2 & 0xffff;
    uVar2 = FUN_00421d70(CONCAT22(extraout_var_00,*(undefined2 *)(iVar5 + 10)));
    *(uint *)(param_1_00 + 0x114) = uVar2 & 0xffff;
    pvVar3 = _malloc(*(int *)(param_1_00 + 0x114) << 5);
    *(void **)(param_1_00 + 0x138) = pvVar3;
    puVar6 = *(undefined4 **)(param_1_00 + 0x138);
    for (uVar2 = (uint)(*(int *)(param_1_00 + 0x114) << 5) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    for (local_8 = 0; local_8 < *(int *)(param_1_00 + 0x114); local_8 = local_8 + 1) {
      uVar1 = *(undefined4 *)(local_c + 4);
      uStack_39 = (undefined)((uint)uVar1 >> 0x18);
      uStack_3a = (undefined)((uint)uVar1 >> 0x10);
      uStack_3b = (undefined)((uint)uVar1 >> 8);
      local_38._0_3_ = CONCAT12(uStack_3b,CONCAT11(uStack_3a,uStack_39));
      local_3c = (undefined)uVar1;
      local_38 = CONCAT13(local_3c,(uint3)local_38);
      *(uint *)(*(int *)(param_1_00 + 0x138) + 8 + local_8 * 0x20) = local_38;
      pvVar3 = _malloc(local_38);
      *(void **)(*(int *)(param_1_00 + 0x138) + 0x10 + local_8 * 0x20) = pvVar3;
      *(undefined4 *)(local_8 * 0x20 + *(int *)(param_1_00 + 0x138)) = 1;
      puVar6 = (undefined4 *)(local_c + 8);
      puVar7 = *(undefined4 **)(*(int *)(param_1_00 + 0x138) + 0x10 + local_8 * 0x20);
      for (uVar2 = local_38 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar2 = (uint3)local_38 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined *)puVar7 = *(undefined *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      local_c = (undefined *)((int)(local_c + 8) + local_38);
    }
    *(undefined4 *)(param_1_00 + 0x120) = 1000000;
  }
  __security_check_cookie(cookie);
  return;
}

