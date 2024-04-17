typedef struct _KEY_VALUE_PARTIAL_INFORMATION
{
  /* 0x0000 */ unsigned long TitleIndex;
  /* 0x0004 */ unsigned long Type;
  /* 0x0008 */ unsigned long DataLength;
  /* 0x000c */ unsigned char Data[1];
  /* 0x000d */ char __PADDING__[3];
} KEY_VALUE_PARTIAL_INFORMATION, *PKEY_VALUE_PARTIAL_INFORMATION; /* size: 0x0010 */

