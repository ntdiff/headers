typedef enum _HOT_PATCH_INFORMATION_CLASS
{
  ManageHotPatchLoadPatch = 0,
  ManageHotPatchUnloadPatch = 1,
  ManageHotPatchQueryPatches = 2,
  ManageHotPatchLoadPatchForUser = 3,
  ManageHotPatchUnloadPatchForUser = 4,
  ManageHotPatchQueryPatchesForUser = 5,
  ManageHotPatchQueryActivePatches = 6,
  ManageHotPatchMax = 7,
} HOT_PATCH_INFORMATION_CLASS, *PHOT_PATCH_INFORMATION_CLASS;

