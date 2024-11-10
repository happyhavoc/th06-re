
void th06::ResultScreen::ReleaseScoreDat(ScoreDat *param_1)

{
  FreeAllScores(param_1->scores);
  _free(param_1->scores);
  _free(param_1);
  return;
}

