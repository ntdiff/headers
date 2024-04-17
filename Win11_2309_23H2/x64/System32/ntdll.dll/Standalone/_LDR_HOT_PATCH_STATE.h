typedef enum _LDR_HOT_PATCH_STATE
{
  LdrHotPatchBaseImage = 0,
  LdrHotPatchNotApplied = 1,
  LdrHotPatchAppliedReverse = 2,
  LdrHotPatchAppliedForward = 3,
  LdrHotPatchFailedToPatch = 4,
  LdrHotPatchStateMax = 5,
} LDR_HOT_PATCH_STATE, *PLDR_HOT_PATCH_STATE;

