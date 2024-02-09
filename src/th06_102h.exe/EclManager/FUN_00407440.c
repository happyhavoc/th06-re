
undefined4 __thiscall
EclManager::FUN_00407440(EclManager *this,EnemyEclContext *param_1,short param_2)

{
  param_1->current_instr = *(void **)((int)this->sub_table + param_2 * 4);
  (param_1->time).current = 0;
  (param_1->time).subFrame = 0.0;
  (param_1->time).previous = -999;
  param_1->sub_id = param_2;
  return 0;
}

