
undefined4 __fastcall FUN_0043c790(Pbg3File *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  Pbg3FileStuff *pPVar5;
  uint uVar6;
  
  iVar1 = FUN_0043c380(param_1->inner);
  pPVar5 = param_1->inner;
  if (iVar1 == 0x33474250) {
    iVar1 = FUN_0043c310();
    param_1->field2_0x8 = iVar1;
    iVar1 = FUN_0043c310();
    param_1->field3_0xc = iVar1;
    iVar1 = (**(code **)(*(int *)param_1->inner + 0xc))(iVar1);
    if (iVar1 != 0) {
      pvVar2 = operator_new(param_1->field2_0x8 * 0x114);
      param_1->field4_0x10 = (int)pvVar2;
      if (pvVar2 != (void *)0x0) {
        uVar6 = 0;
        if (param_1->field2_0x8 != 0) {
          iVar1 = 0;
          do {
            uVar3 = FUN_0043c310();
            *(undefined4 *)(iVar1 + 4 + param_1->field4_0x10) = uVar3;
            uVar3 = FUN_0043c310();
            *(undefined4 *)(iVar1 + param_1->field4_0x10) = uVar3;
            uVar3 = FUN_0043c310();
            *(undefined4 *)(iVar1 + 0x10 + param_1->field4_0x10) = uVar3;
            uVar3 = FUN_0043c310();
            *(undefined4 *)(iVar1 + 0xc + param_1->field4_0x10) = uVar3;
            uVar3 = FUN_0043c310();
            *(undefined4 *)(iVar1 + 8 + param_1->field4_0x10) = uVar3;
            iVar4 = FUN_0043c3c0(iVar1 + 0x14 + param_1->field4_0x10,0x100);
            if (iVar4 == 0) {
              if (param_1->inner != (Pbg3FileStuff *)0x0) {
                (**(code **)(*(int *)param_1->inner + 0x1c))(1);
                param_1->inner = (Pbg3FileStuff *)0x0;
              }
              if ((void *)param_1->field4_0x10 != (void *)0x0) {
                _free((void *)param_1->field4_0x10);
                param_1->field4_0x10 = 0;
              }
              return 0;
            }
            uVar6 = uVar6 + 1;
            iVar1 = iVar1 + 0x114;
          } while (uVar6 < (uint)param_1->field2_0x8);
        }
        return 1;
      }
      if (param_1->inner == (Pbg3FileStuff *)0x0) {
        return 0;
      }
      (**(code **)(*(int *)param_1->inner + 0x1c))(1);
      param_1->inner = (Pbg3FileStuff *)0x0;
      return 0;
    }
    pPVar5 = param_1->inner;
  }
  if (pPVar5 == (Pbg3FileStuff *)0x0) {
    return 0;
  }
  (**(code **)(*(int *)pPVar5 + 0x1c))(1);
  param_1->inner = (Pbg3FileStuff *)0x0;
  return 0;
}

