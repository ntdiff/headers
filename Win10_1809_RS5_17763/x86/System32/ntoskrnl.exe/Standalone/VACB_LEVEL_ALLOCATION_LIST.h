typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

struct VACB_LEVEL_ALLOCATION_LIST
{
  /* 0x0000 */ struct _LIST_ENTRY VacbLevelList;
  /* 0x0008 */ void* VacbLevelWithBcbListHeads;
  /* 0x000c */ unsigned long VacbLevelsAllocated;
}; /* size: 0x0010 */

