
int __thiscall th06::ZunTimer::nextTick(ZunTimer *this)

{
  this->previous = this->current;
  Supervisor::TickTimer(&g_Supervisor,&this->current,&this->subFrame);
  return this->current;
}

