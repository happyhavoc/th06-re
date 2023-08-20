
void FUN_00422900(undefined4 *param_1)

{
  char cVar1;
  void **_Memory;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  void **ppvVar6;
  undefined8 uVar7;
  int local_30;
  int local_2c;
  byte local_18;
  byte bStack_17;
  byte bStack_14;
  undefined4 local_d;
  undefined uStack_9;
  
  bStack_17 = *(byte *)param_1[5];
  if (bStack_17 < 0x80) {
    bStack_17 = *(byte *)(param_1 + 3);
  }
  else {
    param_1[5] = param_1[5] + 1;
  }
  switch(bStack_17 & 0xf0) {
  case 0x80:
  case 0x90:
  case 0xa0:
  case 0xb0:
  case 0xe0:
    local_18 = *(byte *)param_1[5];
    param_1[5] = param_1[5] + 1;
    local_d = (uint)*(byte *)param_1[5];
    param_1[5] = param_1[5] + 1;
    break;
  case 0xc0:
  case 0xd0:
    local_18 = *(byte *)param_1[5];
    param_1[5] = param_1[5] + 1;
    local_d = 0;
    break;
  case 0xf0:
    if (bStack_17 == 0xf0) {
      if (*(int *)(in_ECX + 0x10 + *(int *)(in_ECX + 0x90) * 4) != 0) {
        FUN_00422560(*(undefined4 *)(in_ECX + 0x10 + *(int *)(in_ECX + 0x90) * 4));
      }
      pvVar2 = _malloc(0x40);
      *(void **)(in_ECX + 0x10 + *(int *)(in_ECX + 0x90) * 4) = pvVar2;
      _Memory = *(void ***)(in_ECX + 0x10 + *(int *)(in_ECX + 0x90) * 4);
      iVar4 = FUN_00421d90(param_1 + 5);
      ppvVar6 = _Memory;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppvVar6 = (void *)0x0;
        ppvVar6 = ppvVar6 + 1;
      }
      pvVar2 = _malloc(iVar4 + 1);
      *_Memory = pvVar2;
      *(undefined *)*_Memory = 0xf0;
      _Memory[4] = (void *)0x0;
      _Memory[1] = (void *)(iVar4 + 1);
      local_d = local_d & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,local_d._1_3_) < iVar4) {
        *(undefined *)(CONCAT13(uStack_9,local_d._1_3_) + 1 + (int)*_Memory) =
             *(undefined *)param_1[5];
        param_1[5] = param_1[5] + 1;
        iVar5 = CONCAT13(uStack_9,local_d._1_3_) + 1;
        local_d._1_3_ = (undefined3)iVar5;
        uStack_9 = (undefined)((uint)iVar5 >> 0x18);
      }
      iVar4 = FUN_00421b90(_Memory);
      if (iVar4 != 0) {
        _free(*_Memory);
        _free(_Memory);
        *(undefined4 *)(in_ECX + 0x10 + *(int *)(in_ECX + 0x90) * 4) = 0;
      }
      *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 1;
      uVar3 = *(uint *)(in_ECX + 0x90) & 0x8000001f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
      }
      *(uint *)(in_ECX + 0x90) = uVar3;
    }
    else if (bStack_17 == 0xff) {
      cVar1 = *(char *)param_1[5];
      param_1[5] = param_1[5] + 1;
      iVar4 = FUN_00421d90(param_1 + 5);
      if (cVar1 == '/') {
        *param_1 = 0;
        return;
      }
      if (cVar1 == 'Q') {
        uVar7 = __allmul(*(undefined4 *)(in_ECX + 0x128),*(undefined4 *)(in_ECX + 300),
                         *(int *)(in_ECX + 0x11c),*(int *)(in_ECX + 0x11c) >> 0x1f);
        uVar7 = __allmul(uVar7,1000,0);
        uVar7 = __aulldiv(uVar7,*(int *)(in_ECX + 0x120),*(int *)(in_ECX + 0x120) >> 0x1f);
        uVar3 = *(uint *)(in_ECX + 0x130);
        *(uint *)(in_ECX + 0x130) = uVar3 + (uint)uVar7;
        *(uint *)(in_ECX + 0x134) =
             *(int *)(in_ECX + 0x134) + (int)((ulonglong)uVar7 >> 0x20) +
             (uint)CARRY4(uVar3,(uint)uVar7);
        *(undefined4 *)(in_ECX + 0x128) = 0;
        *(undefined4 *)(in_ECX + 300) = 0;
        *(undefined4 *)(in_ECX + 0x120) = 0;
        local_d = local_d & 0xff;
        uStack_9 = 0;
        while (CONCAT13(uStack_9,local_d._1_3_) < iVar4) {
          *(uint *)(in_ECX + 0x120) =
               *(int *)(in_ECX + 0x120) * 0x100 + (uint)*(byte *)param_1[5] +
               *(int *)(in_ECX + 0x120);
          param_1[5] = param_1[5] + 1;
          iVar5 = CONCAT13(uStack_9,local_d._1_3_) + 1;
          local_d._1_3_ = (undefined3)iVar5;
          uStack_9 = (undefined)((uint)iVar5 >> 0x18);
        }
      }
      else {
        param_1[5] = param_1[5] + iVar4;
      }
    }
  }
  switch(bStack_17 & 0xf0) {
  case 0x90:
    if ((local_d & 0xff) != 0) {
      local_18 = local_18 + *(char *)(in_ECX + 0x2c4);
      *(byte *)(in_ECX + 0x154 + (uint)(bStack_17 & 0xffff0f) * 0x17 +
               ((int)(CONCAT12(bStack_17,CONCAT11(bStack_17,local_18)) & 0xff) >> 3)) =
           *(byte *)(in_ECX + 0x154 + (uint)(bStack_17 & 0xffff0f) * 0x17 +
                    ((int)(CONCAT12(bStack_17,CONCAT11(bStack_17,local_18)) & 0xff) >> 3)) |
           (byte)(1 << (local_18 & 7));
      break;
    }
  case 0x80:
    local_18 = local_18 + *(char *)(in_ECX + 0x2c4);
    *(byte *)(in_ECX + 0x154 + (uint)(bStack_17 & 0xffff0f) * 0x17 +
             ((int)(CONCAT12(bStack_17,CONCAT11(bStack_17,local_18)) & 0xff) >> 3)) =
         *(byte *)(in_ECX + 0x154 + (uint)(bStack_17 & 0xffff0f) * 0x17 +
                  ((int)(CONCAT12(bStack_17,CONCAT11(bStack_17,local_18)) & 0xff) >> 3)) &
         ~(byte)(1 << (local_18 & 7));
    break;
  case 0xb0:
    switch(local_18) {
    case 0:
      *(undefined *)(in_ECX + 0x165 + (uint)(bStack_17 & 0xffff0f) * 0x17) = (undefined)local_d;
      break;
    case 2:
      local_2c = *(int *)(in_ECX + 0x138);
      local_d = local_d & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,local_d._1_3_) < *(int *)(in_ECX + 0x114)) {
        *(undefined4 *)(local_2c + 0x18) = *(undefined4 *)(local_2c + 0x14);
        *(undefined4 *)(local_2c + 0x1c) = *(undefined4 *)(local_2c + 4);
        iVar4 = CONCAT13(uStack_9,local_d._1_3_) + 1;
        local_d._1_3_ = (undefined3)iVar4;
        local_2c = local_2c + 0x20;
        uStack_9 = (undefined)((uint)iVar4 >> 0x18);
      }
      *(undefined4 *)(in_ECX + 0x2ec) = *(undefined4 *)(in_ECX + 0x120);
      *(undefined4 *)(in_ECX + 0x2f0) = *(undefined4 *)(in_ECX + 0x128);
      *(undefined4 *)(in_ECX + 0x2f4) = *(undefined4 *)(in_ECX + 300);
      *(undefined4 *)(in_ECX + 0x2f8) = *(undefined4 *)(in_ECX + 0x130);
      *(undefined4 *)(in_ECX + 0x2fc) = *(undefined4 *)(in_ECX + 0x134);
      break;
    case 4:
      local_30 = *(int *)(in_ECX + 0x138);
      local_d = local_d & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,local_d._1_3_) < *(int *)(in_ECX + 0x114)) {
        *(undefined4 *)(local_30 + 0x14) = *(undefined4 *)(local_30 + 0x18);
        *(undefined4 *)(local_30 + 4) = *(undefined4 *)(local_30 + 0x1c);
        iVar4 = CONCAT13(uStack_9,local_d._1_3_) + 1;
        local_d._1_3_ = (undefined3)iVar4;
        local_30 = local_30 + 0x20;
        uStack_9 = (undefined)((uint)iVar4 >> 0x18);
      }
      *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(in_ECX + 0x2ec);
      *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(in_ECX + 0x2f0);
      *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(in_ECX + 0x2f4);
      *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(in_ECX + 0x2f8);
      *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(in_ECX + 0x2fc);
      break;
    case 7:
      *(undefined *)(in_ECX + 0x169 + (uint)(bStack_17 & 0xffff0f) * 0x17) = (undefined)local_d;
      iVar4 = __ftol2();
      bStack_14 = (byte)iVar4;
      if (iVar4 < 0) {
        bStack_14 = 0;
      }
      else if (0x7f < iVar4) {
        bStack_14 = 0x7f;
      }
      *(byte *)(in_ECX + 0x16a + ((CONCAT11(bStack_14,bStack_17) & 0xff0f) & 0xff) * 0x17) =
           bStack_14;
      local_d = (uint)bStack_14;
      break;
    case 10:
      *(undefined *)(in_ECX + 0x166 + (uint)(bStack_17 & 0xffff0f) * 0x17) = (undefined)local_d;
      break;
    case 0x5b:
      *(undefined *)(in_ECX + 0x167 + (uint)(bStack_17 & 0xffff0f) * 0x17) = (undefined)local_d;
      break;
    case 0x5d:
      *(undefined *)(in_ECX + 0x168 + (uint)(bStack_17 & 0xffff0f) * 0x17) = (undefined)local_d;
    }
    break;
  case 0xc0:
    *(byte *)(in_ECX + 0x164 + (uint)(bStack_17 & 0xffff0f) * 0x17) = local_18;
  }
  if (bStack_17 < 0xf0) {
    FUN_00421be0(bStack_17,local_18,local_d & 0xff);
  }
  *(byte *)(param_1 + 3) = bStack_17;
  iVar4 = FUN_00421d90(param_1 + 5);
  param_1[1] = param_1[1] + iVar4;
  return;
}

