
undefined4 GameManager::OnDraw(int param_1)

{
  if (*(char *)(param_1 + 0x181f) != '\0') {
    *(undefined *)(param_1 + 0x181f) = 2;
  }
  return 1;
}

