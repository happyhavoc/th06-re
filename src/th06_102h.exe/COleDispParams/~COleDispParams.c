
/* Library Function - Single Match
    public: __thiscall COleDispParams::~COleDispParams(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

void __thiscall COleDispParams::~COleDispParams(COleDispParams *this)

{
  if (*(int *)this != 0) {
    _free(*(void **)this);
  }
  *(undefined4 *)this = 0;
  return;
}

