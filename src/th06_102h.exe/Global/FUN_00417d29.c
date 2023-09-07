
undefined4 FUN_00417d29(void)

{
  uint uVar1;
  VeryBigStruct *pVVar2;
  Unknown *pUVar3;
  uint *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  short local_14;
  int local_8;
  
  pVVar2 = g_VeryBigStruct;
  if (g_GameContext.unkInput2 == 3) {
    uVar1 = in_ECX[1];
    *(undefined2 *)(uVar1 + 0x24d8) = 0x619;
    FUN_00432430((Unknown *)(uVar1 + 0x2424),*(int *)&pVVar2->field_0x1e198);
    *(undefined2 *)(in_ECX[1] + 0x24ae) = 1;
  }
  else {
    puVar5 = (undefined4 *)in_ECX[1];
    for (iVar4 = 0xb11; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0xd,"data/front.anm",0x600);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0xe,"data/loading.anm",0x619);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    *(undefined2 *)(in_ECX[1] + 0x24d4) = 0xffff;
    if (DAT_0069d4bd == '\0') {
      iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0xf,"data/face00a.anm",0x4a0);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x10,"data/face00b.anm",0x4a2);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x11,"data/face00c.anm",0x4a4);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
    }
    else if (DAT_0069d4bd == '\x01') {
      iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0xf,"data/face01a.anm",0x4a0);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x10,"data/face01b.anm",0x4a2);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x11,"data/face01c.anm",0x4a4);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
    }
  }
  if (CUR_STAGE == 1) {
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x12,"data/face03a.anm",0x4a8);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x13,"data/face03b.anm",0x4aa);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_00418665("data/msg1.dat");
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  else if (CUR_STAGE == 2) {
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x12,"data/face05a.anm",0x4a8);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_00418665("data/msg2.dat");
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  else if (CUR_STAGE == 3) {
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x12,"data/face06a.anm",0x4a8);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x13,"data/face06b.anm",0x4aa);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_00418665("data/msg3.dat");
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  else if (CUR_STAGE == 4) {
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x12,"data/face08a.anm",0x4a8);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x13,"data/face08b.anm",0x4aa);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_00418665("data/msg4.dat");
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  else if (CUR_STAGE == 5) {
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x12,"data/face09a.anm",0x4a8);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x13,"data/face09b.anm",0x4aa);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_00418665("data/msg5.dat");
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  else if (CUR_STAGE == 6) {
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x12,"data/face09b.anm",0x4a8);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x13,"data/face10a.anm",0x4aa);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x14,"data/face10b.anm",0x4ab);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_00418665("data/msg6.dat");
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  else {
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x12,"data/face08a.anm",0x4a8);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x13,"data/face12a.anm",0x4aa);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = VeryBigStruct::LoadAnim(g_VeryBigStruct,0x14,"data/face12b.anm",0x4ab);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_00418665("data/msg7.dat");
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  if (g_GameContext.unkInput2 != 3) {
    for (local_8 = 0; pVVar2 = g_VeryBigStruct, local_8 < 0x1a; local_8 = local_8 + 1) {
      local_14 = (short)local_8 + 0x600;
      pUVar3 = (Unknown *)(local_8 * 0x110 + in_ECX[1]);
      *(short *)&pUVar3->field_0xb4 = local_14;
      FUN_00432430(pUVar3,*(int *)(&pVVar2->field_0x1e134 + local_8 * 4));
    }
  }
  *(undefined *)(in_ECX + 8) = 0;
  *(undefined *)(in_ECX[1] + 0x1ba0) = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  pVVar2 = g_VeryBigStruct;
  uVar1 = in_ECX[1];
  *(undefined2 *)(uVar1 + 0x1e78) = 0x4a1;
  FUN_00432430((Unknown *)(uVar1 + 0x1dc4),*(int *)&pVVar2->field_0x1dbb8);
  pVVar2 = g_VeryBigStruct;
  uVar1 = in_ECX[1];
  *(undefined2 *)(uVar1 + 0x1f88) = 0x4a3;
  FUN_00432430((Unknown *)(uVar1 + 0x1ed4),*(int *)&pVVar2->field_0x1dbc0);
  pVVar2 = g_VeryBigStruct;
  uVar1 = in_ECX[1];
  *(undefined2 *)(uVar1 + 0x2098) = 0x706;
  FUN_00432430((Unknown *)(uVar1 + 0x1fe4),*(int *)&pVVar2->field_0x1e54c);
  pVVar2 = g_VeryBigStruct;
  uVar1 = in_ECX[1];
  *(undefined2 *)(uVar1 + 0x21a8) = 0x707;
  FUN_00432430((Unknown *)(uVar1 + 0x20f4),*(int *)&pVVar2->field_0x1e550);
  pVVar2 = g_VeryBigStruct;
  uVar1 = in_ECX[1];
  *(undefined2 *)(uVar1 + 0x22b8) = 0x617;
  FUN_00432430((Unknown *)(uVar1 + 0x2204),*(int *)&pVVar2->field_0x1e190);
  pVVar2 = g_VeryBigStruct;
  uVar1 = in_ECX[1];
  *(undefined2 *)(uVar1 + 0x23c8) = 0x618;
  FUN_00432430((Unknown *)(uVar1 + 0x2314),*(int *)&pVVar2->field_0x1e194);
  *(undefined4 *)(in_ECX[1] + 0x1e80) = 0;
  *(undefined4 *)(in_ECX[1] + 0x20a0) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1f90) = 0;
  *(undefined4 *)(in_ECX[1] + 0x21b0) = 0;
  *(uint *)(in_ECX[1] + 0x1e44) = *(uint *)(in_ECX[1] + 0x1e44) & 0xfffffffe;
  *(uint *)(in_ECX[1] + 0x2064) = *(uint *)(in_ECX[1] + 0x2064) & 0xfffffffe;
  *(uint *)(in_ECX[1] + 0x1f54) = *(uint *)(in_ECX[1] + 0x1f54) & 0xfffffffe;
  *(uint *)(in_ECX[1] + 0x2174) = *(uint *)(in_ECX[1] + 0x2174) & 0xfffffffe;
  *(undefined *)(in_ECX[1] + 0x20f0) = 0xf;
  *(undefined *)(in_ECX[1] + 0x20f1) = 0xf;
  *(undefined *)(in_ECX[1] + 0x2200) = 0xf;
  *(undefined *)(in_ECX[1] + 0x2201) = 0xf;
  pVVar2 = g_VeryBigStruct;
  uVar1 = in_ECX[1];
  *(undefined2 *)(uVar1 + 0x1c58) = 0x700;
  FUN_00432430((Unknown *)(uVar1 + 0x1ba4),*(int *)&pVVar2->field_0x1e534);
  pVVar2 = g_VeryBigStruct;
  uVar1 = in_ECX[1];
  *(undefined2 *)(uVar1 + 0x1d68) = 0x701;
  FUN_00432430((Unknown *)(uVar1 + 0x1cb4),*(int *)&pVVar2->field_0x1e538);
  FUN_00434e20(g_VeryBigStruct,in_ECX[1] + 0x1ba4,0xe0ffff,0,DAT_00487b14 + 0x10);
  *(undefined *)(in_ECX[1] + 0x1dc0) = 0x10;
  *(undefined *)(in_ECX[1] + 0x1dc1) = 0x10;
  FUN_00434c40(g_VeryBigStruct,in_ECX[1] + 0x1cb4,0xe0ffff,0,&DAT_0046a98c,DAT_00487b14 + 0x90);
  *(undefined4 *)(in_ECX[1] + 0x253c) = 0xffffffff;
  *(undefined4 *)(in_ECX[1] + 0x2bdc) = 0;
  *(undefined4 *)(in_ECX[1] + 0x2bf4) = 0;
  *(undefined4 *)(in_ECX[1] + 0x2c14) = 0;
  *(undefined4 *)(in_ECX[1] + 0x2c34) = 0;
  *in_ECX = *in_ECX & 0xfffffffc | 2;
  *in_ECX = *in_ECX & 0xfffffff3 | 8;
  *in_ECX = *in_ECX & 0xffffff3f | 0x80;
  *in_ECX = *in_ECX & 0xfffffcff | 0x200;
  *in_ECX = *in_ECX & 0xffffffcf | 0x20;
  return 0;
}

