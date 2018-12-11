typedef struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS
{
  /* 0x0000 */ struct _VERIFIER_SHARED_EXPORT_THUNK* SharedExportThunks;
  /* 0x0004 */ struct _VERIFIER_SHARED_EXPORT_THUNK* PoolSharedExportThunks;
  /* 0x0008 */ struct _VERIFIER_SHARED_EXPORT_THUNK* OrderDependentSharedExportThunks;
  /* 0x000c */ struct _VERIFIER_SHARED_EXPORT_THUNK* XdvSharedExportThunks;
} VF_TARGET_ALL_SHARED_EXPORT_THUNKS, *PVF_TARGET_ALL_SHARED_EXPORT_THUNKS; /* size: 0x0010 */

