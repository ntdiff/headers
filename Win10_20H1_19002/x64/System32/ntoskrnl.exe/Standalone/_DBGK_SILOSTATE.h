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

typedef struct _DBGK_SILOSTATE
{
  /* 0x0000 */ struct _EX_PUSH_LOCK ErrorPortLock;
  /* 0x0008 */ struct _DBGKP_ERROR_PORT* ErrorPort;
  /* 0x0010 */ struct _EPROCESS* ErrorProcess;
  /* 0x0018 */ struct _KEVENT* ErrorPortRegisteredEvent;
} DBGK_SILOSTATE, *PDBGK_SILOSTATE; /* size: 0x0020 */

