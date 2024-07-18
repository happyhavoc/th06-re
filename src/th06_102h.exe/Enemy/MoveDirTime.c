
void Enemy::MoveDirTime(Enemy *enemy,EclRawInstr *instr)

{
  float fVar1;
  EclRawInstrArgs *pEVar2;
  float *pfVar3;
  double dVar4;
  
  pEVar2 = &instr->args;
  pfVar3 = GetVarFloat(enemy,&(instr->args).float_var_1,(EclValueType *)0x0);
  fVar1 = *pfVar3;
  dVar4 = cos((double)fVar1);
  (enemy->move_interp).x =
       ((float)dVar4 * (instr->args).float_var_2 * (float)pEVar2->ecl_var_id) / 2.0;
  dVar4 = sin((double)fVar1);
  (enemy->move_interp).y =
       ((float)dVar4 * (instr->args).float_var_2 * (float)pEVar2->ecl_var_id) / 2.0;
  (enemy->move_interp).z = 0.0;
  (enemy->move_interp_start_pos).x = (enemy->position).x;
  (enemy->move_interp_start_pos).y = (enemy->position).y;
  (enemy->move_interp_start_pos).z = (enemy->position).z;
  enemy->move_interp_start_time = pEVar2->ecl_var_id;
  (enemy->move_interp_timer).current = enemy->move_interp_start_time;
  (enemy->move_interp_timer).subFrame = 0.0;
  (enemy->move_interp_timer).previous = -999;
  enemy->flags1 = enemy->flags1 & 0xfc | 2;
  return;
}

