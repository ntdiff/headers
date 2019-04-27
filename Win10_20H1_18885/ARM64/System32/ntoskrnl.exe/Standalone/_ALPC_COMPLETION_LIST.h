typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _ALPC_COMPLETION_LIST
{
  /* 0x0000 */ struct _LIST_ENTRY Entry;
  /* 0x0010 */ struct _EPROCESS* OwnerProcess;
  /* 0x0018 */ struct _EX_PUSH_LOCK CompletionListLock;
  /* 0x0020 */ struct _MDL* Mdl;
  /* 0x0028 */ void* UserVa;
  /* 0x0030 */ void* UserLimit;
  /* 0x0038 */ void* DataUserVa;
  /* 0x0040 */ void* SystemVa;
  /* 0x0048 */ unsigned __int64 TotalSize;
  /* 0x0050 */ struct _ALPC_COMPLETION_LIST_HEADER* Header;
  /* 0x0058 */ void* List;
  /* 0x0060 */ unsigned __int64 ListSize;
  /* 0x0068 */ void* Bitmap;
  /* 0x0070 */ unsigned __int64 BitmapSize;
  /* 0x0078 */ void* Data;
  /* 0x0080 */ unsigned __int64 DataSize;
  /* 0x0088 */ unsigned long BitmapLimit;
  /* 0x008c */ unsigned long BitmapNextHint;
  /* 0x0090 */ unsigned long ConcurrencyCount;
  /* 0x0094 */ unsigned long AttributeFlags;
  /* 0x0098 */ unsigned long AttributeSize;
  /* 0x009c */ long __PADDING__[1];
} ALPC_COMPLETION_LIST, *PALPC_COMPLETION_LIST; /* size: 0x00a0 */

