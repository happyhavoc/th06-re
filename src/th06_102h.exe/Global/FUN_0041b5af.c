
undefined4 FUN_0041b5af(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = in_ECX[2];
  Supervisor::TickTimer(&g_Supervisor,in_ECX + 2,(float *)(in_ECX + 1));
  return in_ECX[2];
}
