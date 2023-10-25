
void FUN_0042aab0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_006d3f18;
  if (DAT_006d3f18 != (undefined4 *)0x0) {
    DAT_006d3f18[0x12] = DAT_006d3f18[0x12] + 8;
    *(undefined4 *)puVar1[0x12] = *puVar1;
    *(undefined2 *)(puVar1[0x12] + 4) = 0;
    puVar1[0x12] = puVar1[0x12] + 8;
    *(undefined4 *)puVar1[0x12] = 9999999;
    *(undefined2 *)(puVar1[0x12] + 4) = 0;
    puVar1[g_GameManager.current_stage + 0x12] = puVar1[0x12] + 8;
  }
  return;
}

