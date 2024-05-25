
ChainCallbackResult ScreenEffect::OnDrawEffect2(ScreenEffect *param_1)

{
  ZunRect local_14;
  
  local_14.left = 32.0;
  local_14.top = 16.0;
  local_14.right = 416.0;
  local_14.bottom = 464.0;
  DrawSquare(&local_14,param_1->field4_0x10 << 24 | param_1->param3);
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

