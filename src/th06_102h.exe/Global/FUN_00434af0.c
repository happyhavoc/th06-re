
void FUN_00434af0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  int in_ECX;
  
  if (param_6 < 1) {
    param_6 = 0xf;
  }
  if (param_7 < 1) {
    param_7 = 0xf;
  }
  FUN_0041f050(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               *(undefined4 *)(in_ECX + 0x1c110 + param_1 * 4));
  return;
}

