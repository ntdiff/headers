typedef struct _RTL_HANDLE_TABLE
{
  /* 0x0000 */ unsigned long MaximumNumberOfHandles;
  /* 0x0004 */ unsigned long SizeOfHandleTableEntry;
  /* 0x0008 */ unsigned long Reserved[2];
  /* 0x0010 */ struct _RTL_HANDLE_TABLE_ENTRY* FreeHandles;
  /* 0x0014 */ struct _RTL_HANDLE_TABLE_ENTRY* CommittedHandles;
  /* 0x0018 */ struct _RTL_HANDLE_TABLE_ENTRY* UnCommittedHandles;
  /* 0x001c */ struct _RTL_HANDLE_TABLE_ENTRY* MaxReservedHandles;
} RTL_HANDLE_TABLE, *PRTL_HANDLE_TABLE; /* size: 0x0020 */

