
void __thiscall th06::GameErrorContext::Flush(GameErrorContext *this)

{
  FILE *_File;
  
  if ((GameErrorContext *)this->m_BufferEnd != this) {
    Log(this,"---------------------------------------------------------- \n");
    if (this->m_ShowMessageBox != false) {
      MessageBoxA((HWND)0x0,this->m_Buffer,"log",0x10);
    }
    _File = fopen("./log.txt","wt");
    _fprintf(_File,this->m_Buffer);
    fclose(_File);
  }
  return;
}

