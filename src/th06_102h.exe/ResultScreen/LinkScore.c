
int th06::ResultScreen::LinkScore(ScoreListNode *prevnode,Hscr *param_2)

{
  ScoreListNode *newnode;
  int local_8;
  ScoreListNode *nextnode;
  
  local_8 = 0;
  while ((prevnode->next != (ScoreListNode *)0x0 &&
         ((prevnode->next->data == (Hscr *)0x0 || (param_2->score < prevnode->next->data->score)))))
  {
    prevnode = prevnode->next;
    local_8 = local_8 + 1;
  }
  nextnode = prevnode->next;
  newnode = (ScoreListNode *)_malloc(0xc);
  prevnode->next = newnode;
  prevnode->next->prev = prevnode;
  newnode = prevnode->next;
  newnode->data = param_2;
  newnode->next = nextnode;
  return local_8;
}

