typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

struct VACB_LEVEL_ALLOCATION_LIST
{
  /* 0x0000 */ struct _LIST_ENTRY VacbLevelList;
  /* 0x0010 */ void* VacbLevelWithBcbListHeads;
  /* 0x0018 */ unsigned long VacbLevelsAllocated;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

