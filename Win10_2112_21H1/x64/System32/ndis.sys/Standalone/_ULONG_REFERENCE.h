typedef struct _ULONG_REFERENCE
{
  /* 0x0000 */ unsigned __int64 SpinLock;
  /* 0x0008 */ unsigned long ReferenceCount;
  /* 0x000c */ unsigned char Closing;
  /* 0x000d */ char __PADDING__[3];
} ULONG_REFERENCE, *PULONG_REFERENCE; /* size: 0x0010 */

