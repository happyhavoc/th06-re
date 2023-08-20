
/* Library Function - Single Match
    public: void __thiscall CDocObjectServer::ReleaseDocSite(void)
   
   Library: Visual Studio 2003 Debug */

void __thiscall CDocObjectServer::ReleaseDocSite(CDocObjectServer *this)

{
  if (*(int *)(this + 4) != 0) {
    (**(code **)(**(int **)(this + 4) + 8))(*(undefined4 *)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

