typedef struct _REFERENCE
{
  /* 0x0000 */ unsigned long SpinLock;
  /* 0x0004 */ unsigned short ReferenceCount;
  /* 0x0006 */ unsigned char Closing;
  /* 0x0007 */ char __PADDING__[1];
} REFERENCE, *PREFERENCE; /* size: 0x0008 */

