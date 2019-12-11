typedef struct _ULONG_REFERENCE
{
  /* 0x0000 */ unsigned long SpinLock;
  /* 0x0004 */ unsigned long ReferenceCount;
  /* 0x0008 */ unsigned char Closing;
  /* 0x0009 */ char __PADDING__[3];
} ULONG_REFERENCE, *PULONG_REFERENCE; /* size: 0x000c */

