
Pbg3Parser * __thiscall th06::Pbg3Parser::operator_delete(Pbg3Parser *this,byte dealloc)

{
  ~Pbg3Parser(this);
  if ((dealloc & 1) != 0) {
    ::operator_delete(this);
  }
  return this;
}

