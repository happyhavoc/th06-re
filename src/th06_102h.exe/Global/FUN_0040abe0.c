
void __cdecl FUN_0040abe0(Enemy *enemy,EclRawInstr *instr)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  double dVar4;
  
  piVar2 = &instr->ecl_var_id;
  pfVar3 = Enemy::get_var_float(enemy,&instr->float_var_1,(EclValueType *)0x0);
  fVar1 = *pfVar3;
  dVar4 = cos((double)fVar1);
  (enemy->move_interp).x = ((float)dVar4 * instr->float_var_2 * (float)*piVar2) / 2.0;
  dVar4 = sin((double)fVar1);
  (enemy->move_interp).y = ((float)dVar4 * instr->float_var_2 * (float)*piVar2) / 2.0;
  (enemy->move_interp).z = 0.0;
  (enemy->move_interp_start_pos).x = (enemy->position).x;
  (enemy->move_interp_start_pos).y = (enemy->position).y;
  (enemy->move_interp_start_pos).z = (enemy->position).z;
  enemy->move_interp_start_time = *piVar2;
  (enemy->move_interp_timer).current = enemy->move_interp_start_time;
  (enemy->move_interp_timer).subFrame = 0.0;
  (enemy->move_interp_timer).previous = -999;
  enemy->flags1 = enemy->flags1 & 0xfc | 2;
  return;
}

