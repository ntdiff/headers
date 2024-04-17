typedef struct _KEY_VALUE_PARTIAL_INFORMATION_ALIGN64
{
  /* 0x0000 */ unsigned long Type;
  /* 0x0004 */ unsigned long DataLength;
  /* 0x0008 */ unsigned char Data[1];
  /* 0x0009 */ char __PADDING__[3];
} KEY_VALUE_PARTIAL_INFORMATION_ALIGN64, *PKEY_VALUE_PARTIAL_INFORMATION_ALIGN64; /* size: 0x000c */

