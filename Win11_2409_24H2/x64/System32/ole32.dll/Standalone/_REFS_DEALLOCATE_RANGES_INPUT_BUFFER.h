typedef struct _REFS_DEALLOCATE_RANGES_RANGE
{
  /* 0x0000 */ unsigned __int64 StartOfRange;
  /* 0x0008 */ unsigned __int64 CountOfRange;
} REFS_DEALLOCATE_RANGES_RANGE, *PREFS_DEALLOCATE_RANGES_RANGE; /* size: 0x0010 */

typedef struct _REFS_DEALLOCATE_RANGES_INPUT_BUFFER
{
  /* 0x0000 */ unsigned long RangeCount;
  /* 0x0008 */ struct _REFS_DEALLOCATE_RANGES_RANGE Ranges[1];
} REFS_DEALLOCATE_RANGES_INPUT_BUFFER, *PREFS_DEALLOCATE_RANGES_INPUT_BUFFER; /* size: 0x0018 */

