typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _ALPC_COMPLETION_LIST
{
  /* 0x0000 */ struct _LIST_ENTRY Entry;
  /* 0x0008 */ struct _EPROCESS* OwnerProcess;
  /* 0x000c */ struct _EX_PUSH_LOCK CompletionListLock;
  /* 0x0010 */ struct _MDL* Mdl;
  /* 0x0014 */ void* UserVa;
  /* 0x0018 */ void* UserLimit;
  /* 0x001c */ void* DataUserVa;
  /* 0x0020 */ void* SystemVa;
  /* 0x0024 */ unsigned long TotalSize;
  /* 0x0028 */ struct _ALPC_COMPLETION_LIST_HEADER* Header;
  /* 0x002c */ void* List;
  /* 0x0030 */ unsigned long ListSize;
  /* 0x0034 */ void* Bitmap;
  /* 0x0038 */ unsigned long BitmapSize;
  /* 0x003c */ void* Data;
  /* 0x0040 */ unsigned long DataSize;
  /* 0x0044 */ unsigned long BitmapLimit;
  /* 0x0048 */ unsigned long BitmapNextHint;
  /* 0x004c */ unsigned long ConcurrencyCount;
  /* 0x0050 */ unsigned long AttributeFlags;
  /* 0x0054 */ unsigned long AttributeSize;
} ALPC_COMPLETION_LIST, *PALPC_COMPLETION_LIST; /* size: 0x0058 */

