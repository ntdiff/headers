typedef struct _CM_KEY_VALUE
{
  /* 0x0000 */ unsigned short Signature;
  /* 0x0002 */ unsigned short NameLength;
  /* 0x0004 */ unsigned long DataLength;
  /* 0x0008 */ unsigned long Data;
  /* 0x000c */ unsigned long Type;
  /* 0x0010 */ unsigned short Flags;
  /* 0x0012 */ unsigned short Spare;
  /* 0x0014 */ wchar_t Name[1];
  /* 0x0016 */ char __PADDING__[2];
} CM_KEY_VALUE, *PCM_KEY_VALUE; /* size: 0x0018 */

