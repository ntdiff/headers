typedef struct _TPP_CLEANUP_GROUP_MEMBER_VFUNCS
{
  /* 0x0000 */ void* Free /* function */;
  /* 0x0008 */ void* CallbackEpilog /* function */;
  /* 0x0010 */ void* StopCallbackGeneration /* function */;
  /* 0x0018 */ void* CancelPendingCallbacks /* function */;
} TPP_CLEANUP_GROUP_MEMBER_VFUNCS, *PTPP_CLEANUP_GROUP_MEMBER_VFUNCS; /* size: 0x0020 */

