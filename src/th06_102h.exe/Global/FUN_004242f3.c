
void __thiscall FUN_004242f3(GameContext *this,int param_2)

{
  int **_Memory;
  
  if (this->field107_0x1bc[param_2] != 0) {
    FUN_0043c8d0((int **)this->field107_0x1bc[param_2]);
    _Memory = (int **)this->field107_0x1bc[param_2];
    if (_Memory != (int **)0x0) {
      thunk_FUN_0043c8d0(_Memory);
      _free(_Memory);
    }
    this->field107_0x1bc[param_2] = 0;
  }
  return;
}

