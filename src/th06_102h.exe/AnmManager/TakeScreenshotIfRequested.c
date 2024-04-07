
void __thiscall AnmManager::TakeScreenshotIfRequested(AnmManager *this)

{
  if (-1 < this->screenshot_textureId) {
    TakeScreenshot(this,this->screenshot_textureId,this->screenshot_left,this->screenshot_top,
                   this->screenshot_width,this->screenshot_height);
    this->screenshot_textureId = -1;
  }
  return;
}

