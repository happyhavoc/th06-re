
void AnmManager::FUN_00432c80
               (void *param_1,float width,float height,float param_4,float param_5,float yOffset,
               float xOffset)

{
  *(float *)param_1 = height * param_4 + width * param_5 + yOffset;
  *(float *)((int)param_1 + 4) = height * param_5 + -width * param_4 + xOffset;
  return;
}

