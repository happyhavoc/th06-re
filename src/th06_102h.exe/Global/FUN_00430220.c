
undefined4 FUN_00430220(void *param_1)

{
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0xc) = 0;
  Chain::Cut(&Chain_0069d918,*(ChainElem **)((int)param_1 + 8));
  *(undefined4 *)((int)param_1 + 8) = 0;
  _free(param_1);
  return 0;
}

