
void FUN_00413380(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0xe50) >> 6 & 1) == 0) {
    *(float *)(in_ECX + 0xc6c) =
         (float)g_GameContext._424_4_ * *(float *)(in_ECX + 0xc84) + *(float *)(in_ECX + 0xc6c);
  }
  else {
    *(float *)(in_ECX + 0xc6c) =
         *(float *)(in_ECX + 0xc6c) - (float)g_GameContext._424_4_ * *(float *)(in_ECX + 0xc84);
  }
  *(float *)(in_ECX + 0xc70) =
       (float)g_GameContext._424_4_ * *(float *)(in_ECX + 0xc88) + *(float *)(in_ECX + 0xc70);
  *(float *)(in_ECX + 0xc74) =
       (float)g_GameContext._424_4_ * *(float *)(in_ECX + 0xc8c) + *(float *)(in_ECX + 0xc74);
  return;
}

