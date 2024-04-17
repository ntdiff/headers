typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _RTLP_VIRTUALIZED_HEAP
{
  /* 0x0000 */ struct _GUID Id;
  /* 0x0010 */ void* Heap;
  /* 0x0018 */ unsigned __int64 CurrentCommit;
} RTLP_VIRTUALIZED_HEAP, *PRTLP_VIRTUALIZED_HEAP; /* size: 0x0020 */

typedef struct _RTLP_VIRTUALIZED_HEAPS_INFO
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0008 */ void* Process;
  /* 0x0010 */ unsigned __int64 EntriesCount;
  /* 0x0018 */ struct _RTLP_VIRTUALIZED_HEAP Entries[1];
} RTLP_VIRTUALIZED_HEAPS_INFO, *PRTLP_VIRTUALIZED_HEAPS_INFO; /* size: 0x0038 */

