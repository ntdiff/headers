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

typedef struct _ALPC_HANDLE_TABLE
{
  /* 0x0000 */ struct _ALPC_HANDLE_ENTRY* Handles;
  /* 0x0004 */ unsigned long TotalHandles;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ struct _EX_PUSH_LOCK Lock;
} ALPC_HANDLE_TABLE, *PALPC_HANDLE_TABLE; /* size: 0x0010 */

