typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct // _TAG_UNNAMED_7
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 9; /* bit position: 16 */
        /* 0x0000 */ unsigned __int64 NextEntry : 39; /* bit position: 25 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 59; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 Region : 3; /* bit position: 61 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header8;
    struct // _TAG_UNNAMED_8
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 2; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header16;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _MI_VERIFIER_DRIVER_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0010 */ unsigned long Loads;
  /* 0x0014 */ unsigned long Unloads;
  /* 0x0018 */ struct _UNICODE_STRING BaseName;
  /* 0x0028 */ void* StartAddress;
  /* 0x0030 */ void* EndAddress;
  /* 0x0038 */ unsigned long Flags;
  /* 0x0040 */ unsigned __int64 Signature;
  /* 0x0050 */ union _SLIST_HEADER PoolPageHeaders;
  /* 0x0060 */ union _SLIST_HEADER PoolTrackers;
  /* 0x0070 */ unsigned long CurrentPagedPoolAllocations;
  /* 0x0074 */ unsigned long CurrentNonPagedPoolAllocations;
  /* 0x0078 */ unsigned long PeakPagedPoolAllocations;
  /* 0x007c */ unsigned long PeakNonPagedPoolAllocations;
  /* 0x0080 */ unsigned __int64 PagedBytes;
  /* 0x0088 */ unsigned __int64 NonPagedBytes;
  /* 0x0090 */ unsigned __int64 PeakPagedBytes;
  /* 0x0098 */ unsigned __int64 PeakNonPagedBytes;
} MI_VERIFIER_DRIVER_ENTRY, *PMI_VERIFIER_DRIVER_ENTRY; /* size: 0x00a0 */

