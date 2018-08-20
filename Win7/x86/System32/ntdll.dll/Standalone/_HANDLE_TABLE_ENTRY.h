typedef struct _HANDLE_TABLE_ENTRY
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned long ObAttributes;
    /* 0x0000 */ struct _HANDLE_TABLE_ENTRY_INFO* InfoTable;
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0004 */ unsigned long GrantedAccess;
    struct
    {
      /* 0x0004 */ unsigned short GrantedAccessIndex;
      /* 0x0006 */ unsigned short CreatorBackTraceIndex;
    }; /* size: 0x0004 */
    /* 0x0004 */ unsigned long NextFreeTableEntry;
  }; /* size: 0x0004 */
} HANDLE_TABLE_ENTRY, *PHANDLE_TABLE_ENTRY; /* size: 0x0008 */

