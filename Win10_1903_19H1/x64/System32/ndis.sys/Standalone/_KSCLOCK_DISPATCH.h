typedef struct _KSCLOCK_DISPATCH
{
  /* 0x0000 */ void* SetTimer /* function */;
  /* 0x0008 */ void* CancelTimer /* function */;
  /* 0x0010 */ void* CorrelatedTime /* function */;
  /* 0x0018 */ void* Resolution /* function */;
} KSCLOCK_DISPATCH, *PKSCLOCK_DISPATCH; /* size: 0x0020 */

