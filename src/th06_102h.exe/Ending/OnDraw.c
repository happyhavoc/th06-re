
undefined4 th06::Ending::OnDraw(Ending *ending)

{
  long subFrame;
  long prevFrame;
  int i;
  int rectHeight;
  int rectWidth;
  
  rectHeight = 480;
  rectWidth = 640;
  subFrame = __ftol2((ending->anmTimer4).subFrame);
  prevFrame = __ftol2((float)(ending->anmTimer4).previous);
  AnmManager::DrawEndingRect(g_AnmManager,0,0,0,prevFrame,subFrame,rectWidth,rectHeight);
  for (i = 0; i < 16; i = i + 1) {
    if ((&ending->AnmVm)[i].anmFileIndex != 0) {
      AnmManager::DrawNoRotation(g_AnmManager,&ending->AnmVm + i);
    }
  }
  FadingEffect(ending);
  return 1;
}

