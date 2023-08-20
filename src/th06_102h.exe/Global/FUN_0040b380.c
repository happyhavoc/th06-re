
undefined4 * FUN_0040b380(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_c [2];
  
  local_c[0] = __ftol2();
  puVar1 = (undefined4 *)FUN_0040afb0(param_1,local_c,param_3);
  if (puVar1 == local_c) {
    puVar1 = param_2;
  }
  return puVar1;
}

