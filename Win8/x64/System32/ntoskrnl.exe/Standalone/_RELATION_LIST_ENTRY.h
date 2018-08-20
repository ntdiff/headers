typedef struct _RELATION_LIST_ENTRY
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long MaxCount;
  /* 0x0008 */ struct _DEVICE_OBJECT* Devices[1];
} RELATION_LIST_ENTRY, *PRELATION_LIST_ENTRY; /* size: 0x0010 */

