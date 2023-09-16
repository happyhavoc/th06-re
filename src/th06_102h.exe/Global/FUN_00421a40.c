
void __fastcall FUN_00421a40(AnmManager *param_1)

{
  if (-1 < (int)param_1->vertexBufferContents[3].position.z) {
    FUN_00435670(param_1,(int)param_1->vertexBufferContents[3].position.z,
                 param_1->vertexBufferContents[3].diffuseColor,
                 (int)param_1->vertexBufferContents[3].textureUV.x,
                 (int)param_1->vertexBufferContents[3].textureUV.y,param_1->heightMaybe);
    param_1->vertexBufferContents[3].position.z = -NAN;
  }
  return;
}

