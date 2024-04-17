typedef struct _DRIVER_VERIFIER_THUNK_PAIRS
{
  /* 0x0000 */ void* PristineRoutine /* function */;
  /* 0x0004 */ void* NewRoutine /* function */;
} DRIVER_VERIFIER_THUNK_PAIRS, *PDRIVER_VERIFIER_THUNK_PAIRS; /* size: 0x0008 */

