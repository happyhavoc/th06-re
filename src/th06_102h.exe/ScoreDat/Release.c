
void ScoreDat::Release(ScoreDat *param_1)

{
  ZunFreeArray(param_1->scores);
  _free(param_1->scores);
  _free(param_1);
  return;
}

