typedef struct _RTL_HANDLE_TABLE_ENTRY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    /* 0x0000 */ struct _RTL_HANDLE_TABLE_ENTRY* NextFree;
  }; /* size: 0x0004 */
} RTL_HANDLE_TABLE_ENTRY, *PRTL_HANDLE_TABLE_ENTRY; /* size: 0x0004 */

