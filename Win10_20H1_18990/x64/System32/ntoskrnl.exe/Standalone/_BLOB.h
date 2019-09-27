typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _SLIST_ENTRY
{
  /* 0x0000 */ struct _SLIST_ENTRY* Next;
  /* 0x0008 */ long __PADDING__[2];
} SLIST_ENTRY, *PSLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _BLOB
{
  union
  {
    /* 0x0000 */ struct _LIST_ENTRY ResourceList;
    /* 0x0000 */ struct _SLIST_ENTRY FreeListEntry;
  }; /* size: 0x0010 */
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0010 */ unsigned char ReferenceCache : 1; /* bit position: 0 */
          /* 0x0010 */ unsigned char Lookaside : 1; /* bit position: 1 */
          /* 0x0010 */ unsigned char Initializing : 1; /* bit position: 2 */
          /* 0x0010 */ unsigned char Deleted : 1; /* bit position: 3 */
        }; /* bitfield */
      } /* size: 0x0001 */ s1;
      /* 0x0010 */ unsigned char Flags;
    }; /* size: 0x0001 */
  } /* size: 0x0001 */ u1;
  /* 0x0011 */ unsigned char ResourceId;
  /* 0x0012 */ short CachedReferences;
  /* 0x0018 */ __int64 ReferenceCount;
  /* 0x0020 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0028 */ long __PADDING__[2];
} BLOB, *PBLOB; /* size: 0x0030 */

