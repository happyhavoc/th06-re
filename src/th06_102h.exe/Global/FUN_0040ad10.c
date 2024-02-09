
void FUN_0040ad10(Enemy *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  
  pfVar6 = Enemy::get_var_float(param_1,(float *)(param_2 + 0x10),(undefined4 *)0x0);
  fVar3 = *pfVar6;
  pfVar6 = Enemy::get_var_float(param_1,(float *)(param_2 + 0x14),(undefined4 *)0x0);
  fVar4 = *pfVar6;
  pfVar6 = Enemy::get_var_float(param_1,(float *)(param_2 + 0x18),(undefined4 *)0x0);
  fVar5 = *pfVar6;
  fVar1 = (param_1->position).z;
  fVar2 = (param_1->position).y;
  (param_1->move_interp).x = fVar3 - (param_1->position).x;
  (param_1->move_interp).y = fVar4 - fVar2;
  (param_1->move_interp).z = fVar5 - fVar1;
  (param_1->move_interp_start_pos).x = (param_1->position).x;
  (param_1->move_interp_start_pos).y = (param_1->position).y;
  (param_1->move_interp_start_pos).z = (param_1->position).z;
  param_1->move_interp_start_time = *(int *)(param_2 + 0xc);
  (param_1->move_interp_timer).current = param_1->move_interp_start_time;
  (param_1->move_interp_timer).subFrame = 0.0;
  (param_1->move_interp_timer).previous = -999;
  param_1->flags1 = param_1->flags1 & 0xfc | 2;
  (param_1->axis_speed).x = 0.0;
  (param_1->axis_speed).y = 0.0;
  (param_1->axis_speed).z = 0.0;
  return;
}

