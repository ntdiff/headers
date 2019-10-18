typedef struct _RTL_RANGE
{
  /* 0x0000 */ unsigned __int64 Start;
  /* 0x0008 */ unsigned __int64 End;
  /* 0x0010 */ void* UserData;
  /* 0x0014 */ void* Owner;
  /* 0x0018 */ unsigned char Attributes;
  /* 0x0019 */ unsigned char Flags;
  /* 0x001a */ char __PADDING__[6];
} RTL_RANGE, *PRTL_RANGE; /* size: 0x0020 */

