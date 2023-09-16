
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041c28c(float param_1)

{
  double dVar1;
  undefined2 extraout_ST0h;
  int *piVar2;
  undefined8 uVar3;
  D3DXVECTOR3 local_3c;
  D3DXVECTOR3 local_30;
  D3DXVECTOR3 local_24;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = (float)(ulonglong)DAT_006c6de8 / 2.0;
  local_c = (float)(ulonglong)DAT_006c6dec / 2.0;
  local_14 = (float)(ulonglong)DAT_006c6de8 / (float)(ulonglong)DAT_006c6dec;
  local_18 = 0.5235988;
  dVar1 = fload_withFB(0x3fd0c15240000000);
  local_8 = local_c / (float)(float10)CONCAT28(extraout_ST0h,dVar1);
  local_24.x = 0.0;
  local_24.y = 1.0;
  local_24.z = 0.0;
  local_30.x = local_10;
  local_30.y = -local_c;
  local_30.z = 0.0;
  local_3c.x = local_10;
  local_3c.y = -local_c;
  local_3c.z = -local_8;
  _D3DXMatrixLookAtLH_16((D3DXMATRIX *)&DAT_006c6d60,&local_3c,&local_30,&local_24);
  dVar1 = _fabs((double)local_8);
  _DAT_0069d6fc = (float)dVar1;
  _D3DXMatrixPerspectiveFovLH_20((float *)&DAT_006c6da0,local_18,local_14,100.0,param_1 + 10000.0);
  uVar3 = 0x6c6d6000000002;
  piVar2 = DAT_006c6d20;
  (**(code **)(*DAT_006c6d20 + 0x94))();
  (**(code **)(*DAT_006c6d20 + 0x94))(DAT_006c6d20,3,&DAT_006c6da0,piVar2,uVar3);
  return;
}

