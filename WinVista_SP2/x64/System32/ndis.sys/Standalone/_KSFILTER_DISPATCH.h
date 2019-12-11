typedef struct _KSFILTER_DISPATCH
{
  /* 0x0000 */ void* Create /* function */;
  /* 0x0008 */ void* Close /* function */;
  /* 0x0010 */ void* Process /* function */;
  /* 0x0018 */ void* Reset /* function */;
} KSFILTER_DISPATCH, *PKSFILTER_DISPATCH; /* size: 0x0020 */

