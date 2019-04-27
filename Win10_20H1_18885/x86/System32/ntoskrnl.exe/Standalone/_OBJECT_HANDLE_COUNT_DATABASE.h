typedef struct _OBJECT_HANDLE_COUNT_ENTRY
{
  /* 0x0000 */ struct _EPROCESS* Process;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long HandleCount : 24; /* bit position: 0 */
    /* 0x0004 */ unsigned long LockCount : 8; /* bit position: 24 */
  }; /* bitfield */
} OBJECT_HANDLE_COUNT_ENTRY, *POBJECT_HANDLE_COUNT_ENTRY; /* size: 0x0008 */

typedef struct _OBJECT_HANDLE_COUNT_DATABASE
{
  /* 0x0000 */ unsigned long CountEntries;
  /* 0x0004 */ struct _OBJECT_HANDLE_COUNT_ENTRY HandleCountEntries[1];
} OBJECT_HANDLE_COUNT_DATABASE, *POBJECT_HANDLE_COUNT_DATABASE; /* size: 0x000c */

