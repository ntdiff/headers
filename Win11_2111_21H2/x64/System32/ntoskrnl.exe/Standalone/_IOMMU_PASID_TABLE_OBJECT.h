typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _IOMMU_PASID_TABLE_OBJECT
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned long Domain;
  /* 0x0018 */ struct _LIST_ENTRY DeviceListHead;
  /* 0x0028 */ void* Table;
  /* 0x0030 */ unsigned long PasidCount;
  /* 0x0038 */ void* OldTable;
} IOMMU_PASID_TABLE_OBJECT, *PIOMMU_PASID_TABLE_OBJECT; /* size: 0x0040 */

