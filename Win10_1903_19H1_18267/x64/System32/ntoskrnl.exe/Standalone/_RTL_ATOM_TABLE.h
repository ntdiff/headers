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

typedef struct _RTL_ATOM_TABLE
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ volatile long ReferenceCount;
  /* 0x0008 */ struct _EX_PUSH_LOCK PushLock;
  /* 0x0010 */ struct _HANDLE_TABLE* ExHandleTable;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ unsigned long NumberOfBuckets;
  /* 0x0020 */ struct _RTL_ATOM_TABLE_ENTRY* Buckets[1];
} RTL_ATOM_TABLE, *PRTL_ATOM_TABLE; /* size: 0x0028 */

