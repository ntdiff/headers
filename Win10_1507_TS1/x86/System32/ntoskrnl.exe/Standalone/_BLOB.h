typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

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

typedef struct _BLOB
{
  union
  {
    /* 0x0000 */ struct _LIST_ENTRY ResourceList;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY FreeListEntry;
  }; /* size: 0x0008 */
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0008 */ unsigned char ReferenceCache : 1; /* bit position: 0 */
          /* 0x0008 */ unsigned char Lookaside : 1; /* bit position: 1 */
          /* 0x0008 */ unsigned char Initializing : 1; /* bit position: 2 */
          /* 0x0008 */ unsigned char Deleted : 1; /* bit position: 3 */
        }; /* bitfield */
      } /* size: 0x0001 */ s1;
      /* 0x0008 */ unsigned char Flags;
    }; /* size: 0x0001 */
  } /* size: 0x0001 */ u1;
  /* 0x0009 */ unsigned char ResourceId;
  /* 0x000a */ short CachedReferences;
  /* 0x000c */ long ReferenceCount;
  /* 0x0010 */ unsigned long Pad;
  /* 0x0014 */ struct _EX_PUSH_LOCK Lock;
} BLOB, *PBLOB; /* size: 0x0018 */

