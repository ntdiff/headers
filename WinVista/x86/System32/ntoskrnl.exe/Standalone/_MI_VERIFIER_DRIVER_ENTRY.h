typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _MI_VERIFIER_DRIVER_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0008 */ unsigned long Loads;
  /* 0x000c */ unsigned long Unloads;
  /* 0x0010 */ struct _UNICODE_STRING BaseName;
  /* 0x0018 */ void* StartAddress;
  /* 0x001c */ void* EndAddress;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0024 */ unsigned long Signature;
  /* 0x0028 */ union _SLIST_HEADER PoolPageHeaders;
  /* 0x0030 */ union _SLIST_HEADER PoolTrackers;
  /* 0x0038 */ unsigned long CurrentPagedPoolAllocations;
  /* 0x003c */ unsigned long CurrentNonPagedPoolAllocations;
  /* 0x0040 */ unsigned long PeakPagedPoolAllocations;
  /* 0x0044 */ unsigned long PeakNonPagedPoolAllocations;
  /* 0x0048 */ unsigned long PagedBytes;
  /* 0x004c */ unsigned long NonPagedBytes;
  /* 0x0050 */ unsigned long PeakPagedBytes;
  /* 0x0054 */ unsigned long PeakNonPagedBytes;
} MI_VERIFIER_DRIVER_ENTRY, *PMI_VERIFIER_DRIVER_ENTRY; /* size: 0x0058 */

