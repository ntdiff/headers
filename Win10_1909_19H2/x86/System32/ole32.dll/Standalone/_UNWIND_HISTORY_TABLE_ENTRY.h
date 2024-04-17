typedef struct _UNWIND_HISTORY_TABLE_ENTRY
{
  /* 0x0000 */ unsigned __int64 ImageBase;
  /* 0x0008 */ struct _IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY* FunctionEntry;
  /* 0x000c */ long __PADDING__[1];
} UNWIND_HISTORY_TABLE_ENTRY, *PUNWIND_HISTORY_TABLE_ENTRY; /* size: 0x0010 */

