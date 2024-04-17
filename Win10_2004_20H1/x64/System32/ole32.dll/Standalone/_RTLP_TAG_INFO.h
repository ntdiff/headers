typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _RTLP_TAG_INFO
{
  /* 0x0000 */ struct _GUID Id;
  /* 0x0010 */ unsigned __int64 CurrentAllocatedBytes;
} RTLP_TAG_INFO, *PRTLP_TAG_INFO; /* size: 0x0018 */

