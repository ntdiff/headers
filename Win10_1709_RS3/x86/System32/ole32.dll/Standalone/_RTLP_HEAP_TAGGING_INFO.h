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
  /* 0x0010 */ unsigned long CurrentAllocatedBytes;
} RTLP_TAG_INFO, *PRTLP_TAG_INFO; /* size: 0x0014 */

typedef struct _RTLP_HEAP_TAGGING_INFO
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ void* Process;
  /* 0x0008 */ unsigned long EntriesCount;
  /* 0x000c */ struct _RTLP_TAG_INFO Entries[1];
} RTLP_HEAP_TAGGING_INFO, *PRTLP_HEAP_TAGGING_INFO; /* size: 0x0020 */

