
ChainCallbackResult th06::ScreenEffect::OnDrawEffect0(ScreenEffect *param_1)

{
  ZunRect local_14;
  
  local_14.left = 0.0;
  local_14.top = 0.0;
  local_14.right = 640.0;
  local_14.bottom = 480.0;
  g_Supervisor.viewport.X = 0;
  g_Supervisor.viewport.Y = 0;
  g_Supervisor.viewport.Width = 0x280;
  g_Supervisor.viewport.Height = 0x1e0;
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)(g_Supervisor.d3dDevice,&g_Supervisor.viewport);
  DrawSquare(&local_14,param_1->field4_0x10 << 0x18 | param_1->param3);
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

