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
  /* 0x0014 */ unsigned long CurrentCommit;
} RTLP_VIRTUALIZED_HEAP, *PRTLP_VIRTUALIZED_HEAP; /* size: 0x0018 */

