typedef struct _OBJECT_HANDLE_COUNT_ENTRY
{
  /* 0x0000 */ struct _EPROCESS* Process;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long HandleCount : 24; /* bit position: 0 */
    /* 0x0004 */ unsigned long LockCount : 8; /* bit position: 24 */
  }; /* bitfield */
} OBJECT_HANDLE_COUNT_ENTRY, *POBJECT_HANDLE_COUNT_ENTRY; /* size: 0x0008 */

