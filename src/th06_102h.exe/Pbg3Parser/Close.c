
Pbg3Parser * __thiscall Pbg3Parser::Close(Pbg3Parser *this,byte dealloc)

{
  ~Pbg3Parser(this);
  if ((dealloc & 1) != 0) {
    _free(this);
  }
  return this;
}

