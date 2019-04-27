typedef struct _OBJECT_HANDLE_COUNT_ENTRY
{
  /* 0x0000 */ struct _EPROCESS* Process;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long HandleCount : 24; /* bit position: 0 */
    /* 0x0008 */ unsigned long LockCount : 8; /* bit position: 24 */
  }; /* bitfield */
  /* 0x000c */ long __PADDING__[1];
} OBJECT_HANDLE_COUNT_ENTRY, *POBJECT_HANDLE_COUNT_ENTRY; /* size: 0x0010 */

