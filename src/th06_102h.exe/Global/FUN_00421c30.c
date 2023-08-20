
undefined4 * FUN_00421c30(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0046b564;
  timeGetDevCaps((LPTIMECAPS)(in_ECX + 2),8);
  in_ECX[1] = 0;
  return in_ECX;
}

