
undefined2 * FUN_0041c720(void)

{
  undefined2 *in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 10) = 0;
  *(undefined4 *)(in_ECX + 2) = 0;
  *(undefined2 **)(in_ECX + 0xc) = in_ECX;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 6) = 0;
  *in_ECX = 0;
  in_ECX[1] = in_ECX[1] & 0xfffe;
  return in_ECX;
}

