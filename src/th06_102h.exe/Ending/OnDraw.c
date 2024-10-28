
ChainCallbackResult th06::Ending::OnDraw(Ending *ending)

{
  long subFrame;
  long prevFrame;
  int i;
  int rectHeight;
  int rectWidth;
  
  rectHeight = 480;
  rectWidth = 640;
  subFrame = __ftol2((ending->backgroundPos).y);
  prevFrame = __ftol2((ending->backgroundPos).x);
  AnmManager::DrawEndingRect(g_AnmManager,0,0,0,prevFrame,subFrame,rectWidth,rectHeight);
  for (i = 0; i < 16; i = i + 1) {
    if (ending->sprites[i].anmFileIndex != 0) {
      AnmManager::DrawNoRotation(g_AnmManager,ending->sprites + i);
    }
  }
  FadingEffect(ending);
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

