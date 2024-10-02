typedef enum _IOMMU_DMA_DOMAIN_TYPE
{
  DomainTypeTranslate = 0,
  DomainTypePassThrough = 1,
  DomainTypeUnmanaged = 2,
  DomainTypeTranslateS1 = 3,
  DomainTypeMax = 4,
} IOMMU_DMA_DOMAIN_TYPE, *PIOMMU_DMA_DOMAIN_TYPE;

typedef enum _EXT_IOMMU_TRANSLATION_TYPE
{
  ExtTranslationTypePassThrough = 0,
  ExtTranslationTypeBlocked = 1,
  ExtTranslationTypeTranslate = 2,
  ExtTranslationTypeInvalid = 3,
} EXT_IOMMU_TRANSLATION_TYPE, *PEXT_IOMMU_TRANSLATION_TYPE;

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _IOMMU_DMA_DOMAIN
{
  /* 0x0000 */ struct _HALP_DMA_DOMAIN_OBJECT* DmaDomainOwner;
  /* 0x0008 */ enum _IOMMU_DMA_DOMAIN_TYPE DomainType;
  /* 0x000c */ enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;
  /* 0x0010 */ struct _LIST_ENTRY HardwareDomainListHead;
  /* 0x0020 */ unsigned __int64 HardwareDomainListLock;
  /* 0x0028 */ struct _DMAR_PAGE_TABLE_STATE* DmarptState;
  /* 0x0030 */ unsigned long DomainId;
  /* 0x0034 */ unsigned char IsStage1;
  /* 0x0038 */ unsigned long Asid;
  /* 0x0040 */ struct _IOMMU_DMA_LOGICAL_ALLOCATOR* LogicalAllocator;
  /* 0x0048 */ struct _LIST_ENTRY AttachedDevicesList;
  /* 0x0058 */ volatile long AttachedDevicesListLock;
  /* 0x005c */ unsigned long HvReferences;
  /* 0x0060 */ unsigned char HvDomainIdAllocated;
  /* 0x0068 */ struct _EX_PUSH_LOCK HvPushLock;
} IOMMU_DMA_DOMAIN, *PIOMMU_DMA_DOMAIN; /* size: 0x0070 */

