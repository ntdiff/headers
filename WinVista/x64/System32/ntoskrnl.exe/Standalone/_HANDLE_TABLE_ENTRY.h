typedef struct _HANDLE_TABLE_ENTRY
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned long ObAttributes;
    /* 0x0000 */ struct _HANDLE_TABLE_ENTRY_INFO* InfoTable;
    /* 0x0000 */ unsigned __int64 Value;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned long GrantedAccess;
    struct
    {
      /* 0x0008 */ unsigned short GrantedAccessIndex;
      /* 0x000a */ unsigned short CreatorBackTraceIndex;
    }; /* size: 0x0004 */
    /* 0x0008 */ long NextFreeTableEntry;
  }; /* size: 0x0004 */
  /* 0x000c */ long __PADDING__[1];
} HANDLE_TABLE_ENTRY, *PHANDLE_TABLE_ENTRY; /* size: 0x0010 */

