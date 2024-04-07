
void AnmManager::FUN_00432c80
               (Vertex_TEX1_XYZRWH *param_1,float width,float height,float param_4,float param_5,
               float xOffset,float yOffset)

{
  (param_1->pos).x = height * param_4 + width * param_5 + xOffset;
  (param_1->pos).y = height * param_5 + -width * param_4 + yOffset;
  return;
}

