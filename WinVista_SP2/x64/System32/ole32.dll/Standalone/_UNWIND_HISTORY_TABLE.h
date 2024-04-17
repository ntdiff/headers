typedef struct _UNWIND_HISTORY_TABLE_ENTRY
{
  /* 0x0000 */ unsigned __int64 ImageBase;
  /* 0x0008 */ struct _RUNTIME_FUNCTION* FunctionEntry;
} UNWIND_HISTORY_TABLE_ENTRY, *PUNWIND_HISTORY_TABLE_ENTRY; /* size: 0x0010 */

typedef struct _UNWIND_HISTORY_TABLE
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned char LocalHint;
  /* 0x0005 */ unsigned char GlobalHint;
  /* 0x0006 */ unsigned char Search;
  /* 0x0007 */ unsigned char Once;
  /* 0x0008 */ unsigned __int64 LowAddress;
  /* 0x0010 */ unsigned __int64 HighAddress;
  /* 0x0018 */ struct _UNWIND_HISTORY_TABLE_ENTRY Entry[12];
} UNWIND_HISTORY_TABLE, *PUNWIND_HISTORY_TABLE; /* size: 0x00d8 */

