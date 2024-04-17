typedef struct _CNGRSA32COMPAT_ALSTATE
{
  /* 0x0000 */ void* hBCryptHandle;
  /* 0x0008 */ unsigned char* pbAllocObject;
  /* 0x0010 */ unsigned long cbAllocObject;
  /* 0x0014 */ long __PADDING__[1];
} CNGRSA32COMPAT_ALSTATE, *PCNGRSA32COMPAT_ALSTATE; /* size: 0x0018 */

