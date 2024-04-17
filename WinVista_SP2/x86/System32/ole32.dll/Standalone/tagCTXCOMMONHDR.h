typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagCTXCOMMONHDR
{
  /* 0x0000 */ struct _GUID ContextId;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned long Reserved;
  /* 0x0018 */ unsigned long dwNumExtents;
  /* 0x001c */ unsigned long cbExtents;
  /* 0x0020 */ unsigned long MshlFlags;
}; /* size: 0x0024 */

