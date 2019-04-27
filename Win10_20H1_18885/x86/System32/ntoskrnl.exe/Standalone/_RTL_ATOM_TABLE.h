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

typedef struct _RTL_ATOM_TABLE
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ volatile long ReferenceCount;
  /* 0x0008 */ struct _EX_PUSH_LOCK PushLock;
  /* 0x000c */ struct _HANDLE_TABLE* ExHandleTable;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned long NumberOfBuckets;
  /* 0x0018 */ struct _RTL_ATOM_TABLE_ENTRY* Buckets[1];
} RTL_ATOM_TABLE, *PRTL_ATOM_TABLE; /* size: 0x001c */

