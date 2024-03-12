
void __cdecl FUN_0040ad10(Enemy *enemy,EclRawInstr *instr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  
  pfVar6 = Enemy::get_var_float(enemy,&instr->field8_0x10,(undefined4 *)0x0);
  fVar3 = *pfVar6;
  pfVar6 = Enemy::get_var_float(enemy,(float *)&instr->field9_0x14,(undefined4 *)0x0);
  fVar4 = *pfVar6;
  pfVar6 = Enemy::get_var_float(enemy,(float *)&instr->field10_0x18,(undefined4 *)0x0);
  fVar5 = *pfVar6;
  fVar1 = (enemy->position).z;
  fVar2 = (enemy->position).y;
  (enemy->move_interp).x = fVar3 - (enemy->position).x;
  (enemy->move_interp).y = fVar4 - fVar2;
  (enemy->move_interp).z = fVar5 - fVar1;
  (enemy->move_interp_start_pos).x = (enemy->position).x;
  (enemy->move_interp_start_pos).y = (enemy->position).y;
  (enemy->move_interp_start_pos).z = (enemy->position).z;
  enemy->move_interp_start_time = instr->ecl_var_id;
  (enemy->move_interp_timer).current = enemy->move_interp_start_time;
  (enemy->move_interp_timer).subFrame = 0.0;
  (enemy->move_interp_timer).previous = -999;
  enemy->flags1 = enemy->flags1 & 0xfc | 2;
  (enemy->axis_speed).x = 0.0;
  (enemy->axis_speed).y = 0.0;
  (enemy->axis_speed).z = 0.0;
  return;
}

