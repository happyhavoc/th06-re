
void __thiscall AnmManager::FUN_00421a40(AnmManager *this)

{
  if (-1 < (int)this->vertexBufferContents[3].position.z) {
    FUN_00435670(this,(int)this->vertexBufferContents[3].position.z,
                 this->vertexBufferContents[3].diffuseColor,
                 (int)this->vertexBufferContents[3].textureUV.x,
                 (int)this->vertexBufferContents[3].textureUV.y,this->heightMaybe);
    this->vertexBufferContents[3].position.z = -NAN;
  }
  return;
}

