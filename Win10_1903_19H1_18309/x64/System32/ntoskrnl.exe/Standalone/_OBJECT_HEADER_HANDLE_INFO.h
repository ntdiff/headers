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

typedef struct _OBJECT_HEADER_HANDLE_INFO
{
  union
  {
    /* 0x0000 */ struct _OBJECT_HANDLE_COUNT_DATABASE* HandleCountDataBase;
    /* 0x0000 */ struct _OBJECT_HANDLE_COUNT_ENTRY SingleEntry;
  }; /* size: 0x0010 */
} OBJECT_HEADER_HANDLE_INFO, *POBJECT_HEADER_HANDLE_INFO; /* size: 0x0010 */

