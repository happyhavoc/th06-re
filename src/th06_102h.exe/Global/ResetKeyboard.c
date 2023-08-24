
void ResetKeyboard(void)

{
  DWORD_PTR cookie;
  int idx;
  byte key_states [256];
  
  cookie = __security_cookie;
  GetKeyboardState(key_states);
  for (idx = 0; idx < 0x100; idx = idx + 1) {
    key_states[idx] = key_states[idx] & 0x7f;
  }
  SetKeyboardState(key_states);
  __security_check_cookie(cookie);
  return;
}

