
void __cdecl th06::Enemy::ExInsPatchouliShottypeSetVars(Enemy *param_1,EclRawInstr *param_2)

{
  (param_1->current_context).var1 =
       g_PatchouliShottypeVars[g_GameManager.character][g_GameManager.shottype].var1;
  (param_1->current_context).var2 =
       *(int *)((uint)g_GameManager.character * 0x18 + 0x476268 + (uint)g_GameManager.shottype * 0xc
               );
  (param_1->current_context).var3 =
       *(int *)((uint)g_GameManager.character * 0x18 + 0x47626c + (uint)g_GameManager.shottype * 0xc
               );
  return;
}

