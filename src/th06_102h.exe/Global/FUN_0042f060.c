
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 FUN_0042f060(ResultScreen *param_1)

{
  AnmManager *pAVar1;
  int iVar2;
  ScoreDat *pSVar3;
  short local_3c;
  int idx;
  uint character;
  AnmVm *local_c;
  uint difficulty;
  
  if (param_1->unk_8 != 0x11) {
    iVar2 = AnmManager::LoadSurface(g_AnmManager,0,"data/result/result.jpg");
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    iVar2 = AnmManager::LoadAnm(g_AnmManager,0x25,"data/result00.anm",0x100);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    iVar2 = AnmManager::LoadAnm(g_AnmManager,0x26,"data/result01.anm",0x108);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    iVar2 = AnmManager::LoadAnm(g_AnmManager,0x27,"data/result02.anm",0x10f);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    iVar2 = AnmManager::LoadAnm(g_AnmManager,0x28,"data/result03.anm",0x125);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    local_c = param_1->unk_40;
    for (difficulty = 0; (int)difficulty < 0x26; difficulty = difficulty + 1) {
      (local_c->pos).x = 0.0;
      (local_c->pos).y = 0.0;
      (local_c->pos).z = 0.0;
      (local_c->pos2).x = 0.0;
      (local_c->pos2).y = 0.0;
      (local_c->pos2).z = 0.0;
      pAVar1 = g_AnmManager;
      local_3c = (short)difficulty + 0x100;
      local_c->anmFileIndex = local_3c;
      AnmManager::SetAndExecuteScript(pAVar1,local_c,pAVar1->scripts[difficulty + 0x100]);
      local_c = local_c + 1;
    }
    local_c = param_1->unk_28a0;
    for (difficulty = 0; pAVar1 = g_AnmManager, (int)difficulty < 0x10; difficulty = difficulty + 1)
    {
      AnmVm::Initialize(local_c);
      AnmManager::SetActiveSprite(pAVar1,local_c,difficulty + 0x708);
      (local_c->pos).x = 0.0;
      (local_c->pos).y = 0.0;
      (local_c->pos).z = 0.0;
      local_c->flags = local_c->flags | 0x300;
      local_c->fontWidth = '\x0f';
      local_c->fontHeight = '\x0f';
      local_c = local_c + 1;
    }
  }
  for (difficulty = 0; (int)difficulty < 5; difficulty = difficulty + 1) {
    for (character = 0; (int)character < 4; character = character + 1) {
      for (idx = 0; idx < 10; idx = idx + 1) {
        param_1->default_scores[difficulty][character][idx].score = idx * -100000 + 1000000;
        param_1->default_scores[difficulty][character][idx].base.magic = (uint)(char  [4])0x53594d44
        ;
        param_1->default_scores[difficulty][character][idx].difficulty = (byte)difficulty;
        param_1->default_scores[difficulty][character][idx].base.version_ = '\x10';
        param_1->default_scores[difficulty][character][idx].base.unk_len = 0x1c;
        param_1->default_scores[difficulty][character][idx].base.th6k_len = 0x1c;
        param_1->default_scores[difficulty][character][idx].stage = 1;
        param_1->default_scores[difficulty][character][idx].base.field_0x9 = 0;
        ResultScreen::FUN_0042bc2d
                  (param_1,param_1->default_scores[difficulty][character] + idx,difficulty,character
                  );
        _strcpy(param_1->default_scores[difficulty][character][idx].name,"Nanashi ");
      }
    }
  }
  *(undefined4 *)&param_1->field_0x14 = 0;
  pSVar3 = (ScoreDat *)OpenScore("score.dat");
  param_1->scoredat = pSVar3;
  for (difficulty = 0; (int)difficulty < 5; difficulty = difficulty + 1) {
    for (character = 0; (int)character < 4; character = character + 1) {
      FUN_0042b280(param_1->scoredat,param_1->unk_3ab0 + difficulty * 4 + character,character,
                   difficulty);
    }
  }
  if ((param_1->unk_8 != 9) && (param_1->unk_8 != 0x11)) {
    ParseCatk(param_1->scoredat,g_GameManager.catk);
    ParseClrd(param_1->scoredat,g_GameManager.clrd);
    ParsePscr(param_1->scoredat,g_GameManager.pscr);
  }
  if ((param_1->unk_8 == 0x11) &&
     (*(uint *)(((uint)g_GameManager.shottype + (uint)g_GameManager.character * 2) * 0x1e0 +
                (g_GameManager.current_stage - 1) * 0x50 + 0x69cd3c +
               g_GameManager.difficulty * 0x14) < g_GameManager.score)) {
    *(uint *)(((uint)g_GameManager.shottype + (uint)g_GameManager.character * 2) * 0x1e0 +
              (g_GameManager.current_stage - 1) * 0x50 + 0x69cd3c + g_GameManager.difficulty * 0x14)
         = g_GameManager.score;
  }
  (param_1->unk_39a0).spriteNumber = -1;
  return 0;
}

