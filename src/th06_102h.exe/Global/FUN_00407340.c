
undefined4 FUN_00407340(undefined4 param_1)

{
  short *psVar1;
  undefined4 uVar2;
  short **in_ECX;
  int local_8;
  
  psVar1 = (short *)OpenPath(param_1,0);
  *in_ECX = psVar1;
  if (*in_ECX == (short *)0x0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "敵データの読み込みに失敗しました、データが壊れてるか失われています\n"
                       );
    uVar2 = 0xffffffff;
  }
  else {
    *(int *)(*in_ECX + 2) = *(int *)(*in_ECX + 2) + (int)*in_ECX;
    in_ECX[1] = *in_ECX + 8;
    for (local_8 = 0; local_8 < **in_ECX; local_8 = local_8 + 1) {
      *(int *)(in_ECX[1] + local_8 * 2) = *(int *)(in_ECX[1] + local_8 * 2) + (int)*in_ECX;
    }
    in_ECX[2] = *(short **)(*in_ECX + 2);
    uVar2 = 0;
  }
  return uVar2;
}

