
undefined4 FUN_00431d70(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int in_ECX;
  
  _D3DXCreateTexture_32
            (g_GameContext.d3dDevice,param_2,param_3,1,0,
             *(undefined4 *)(&DAT_0046c220 + param_4 * 4),1,in_ECX + 0x1c110 + param_1 * 4);
  return 0;
}

