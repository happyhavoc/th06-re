
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0040ae80(Enemy *param_1,EclRawInstr *param_2)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  double dVar4;
  
  piVar2 = &param_2->ecl_var_id;
  pfVar3 = Enemy::get_var_float(param_1,&param_1->angle,(EclValueType *)0x0);
  fVar1 = *pfVar3;
  dVar4 = cos((double)fVar1);
  (param_1->move_interp).x = ((float)dVar4 * param_1->speed * (float)*piVar2) / 2.0;
  dVar4 = sin((double)fVar1);
  (param_1->move_interp).y = ((float)dVar4 * param_1->speed * (float)*piVar2) / 2.0;
  (param_1->move_interp).z = 0.0;
  (param_1->move_interp_start_pos).x = (param_1->position).x;
  (param_1->move_interp_start_pos).y = (param_1->position).y;
  (param_1->move_interp_start_pos).z = (param_1->position).z;
  param_1->move_interp_start_time = *piVar2;
  (param_1->move_interp_timer).current = param_1->move_interp_start_time;
  (param_1->move_interp_timer).subFrame = 0.0;
  (param_1->move_interp_timer).previous = -999;
  param_1->flags1 = param_1->flags1 & 0xfc | 2;
  return;
}

