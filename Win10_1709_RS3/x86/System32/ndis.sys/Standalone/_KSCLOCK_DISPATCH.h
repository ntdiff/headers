typedef struct _KSCLOCK_DISPATCH
{
  /* 0x0000 */ void* SetTimer /* function */;
  /* 0x0004 */ void* CancelTimer /* function */;
  /* 0x0008 */ void* CorrelatedTime /* function */;
  /* 0x000c */ void* Resolution /* function */;
} KSCLOCK_DISPATCH, *PKSCLOCK_DISPATCH; /* size: 0x0010 */

