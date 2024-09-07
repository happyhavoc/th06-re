
ZunResult __thiscall
th06::EclManager::CallEclSub(EclManager *this,EnemyEclContext *param_1,short sub_id)

{
  param_1->current_instr = (EclRawInstr *)this->sub_table[sub_id];
  (param_1->time).current = 0;
  (param_1->time).subFrame = 0.0;
  (param_1->time).previous = -999;
  param_1->sub_id = sub_id;
  return ZUN_SUCCESS;
}

