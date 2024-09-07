
void __thiscall th06::AnmManager::TakeScreenshotIfRequested(AnmManager *this)

{
  if (-1 < *(int *)(this + 0x21118)) {
    TakeScreenshot((AnmManager *)this,*(int *)(this + 0x21118),*(int *)(this + 0x2111c),
                   *(int *)(this + 0x21120),*(int *)(this + 0x21124),*(int *)(this + 0x21128));
    *(undefined4 *)(this + 0x21118) = 0xffffffff;
  }
  return;
}

