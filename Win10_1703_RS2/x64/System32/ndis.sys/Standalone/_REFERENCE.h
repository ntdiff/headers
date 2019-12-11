typedef struct _REFERENCE
{
  /* 0x0000 */ unsigned __int64 SpinLock;
  /* 0x0008 */ unsigned short ReferenceCount;
  /* 0x000a */ unsigned char Closing;
  /* 0x000b */ char __PADDING__[5];
} REFERENCE, *PREFERENCE; /* size: 0x0010 */

