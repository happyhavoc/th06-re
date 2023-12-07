
void AnmManager::FUN_00432c80
               (float *param_1,float width,float height,float param_4,float param_5,float yOffset,
               float xOffset)

{
  *param_1 = height * param_4 + width * param_5 + yOffset;
  param_1[1] = height * param_5 + -width * param_4 + xOffset;
  return;
}

