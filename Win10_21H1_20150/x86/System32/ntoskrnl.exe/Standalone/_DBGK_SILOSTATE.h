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

typedef struct _DBGK_SILOSTATE
{
  /* 0x0000 */ struct _EX_PUSH_LOCK ErrorPortLock;
  /* 0x0004 */ struct _DBGKP_ERROR_PORT* ErrorPort;
  /* 0x0008 */ struct _EPROCESS* ErrorProcess;
  /* 0x000c */ struct _KEVENT* ErrorPortRegisteredEvent;
} DBGK_SILOSTATE, *PDBGK_SILOSTATE; /* size: 0x0010 */

