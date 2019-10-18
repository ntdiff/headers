typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef enum _EXT_IOMMU_TRANSLATION_TYPE
{
  ExtTranslationTypePassThrough = 0,
  ExtTranslationTypeBlocked = 1,
  ExtTranslationTypeTranslate = 2,
  ExtTranslationTypeSafePassThrough = 3,
  ExtTranslationTypeInvalid = 4,
} EXT_IOMMU_TRANSLATION_TYPE, *PEXT_IOMMU_TRANSLATION_TYPE;

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _HALP_DMA_DOMAIN_OBJECT
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ union _LARGE_INTEGER MaximumPhysicalAddress;
  /* 0x0010 */ union _LARGE_INTEGER BoundaryAddressMultiple;
  /* 0x0018 */ unsigned char CacheCoherent;
  /* 0x0019 */ unsigned char FirmwareReserved;
  /* 0x001c */ void* IommuDomainPointer;
  /* 0x0020 */ void* LaState;
  /* 0x0024 */ unsigned long LaStateLock;
  /* 0x0028 */ enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;
  /* 0x002c */ struct _ADAPTER_OBJECT* OwningAdapter;
  /* 0x0030 */ struct _RTL_RB_TREE CommonBufferRoot;
  /* 0x0038 */ unsigned long CommonBufferTreeLock;
  /* 0x003c */ struct _LIST_ENTRY VectorCommonBufferListHead;
  /* 0x0044 */ unsigned long VectorCommonBufferLock;
  /* 0x0048 */ unsigned long DomainRefCount;
  /* 0x004c */ long __PADDING__[1];
} HALP_DMA_DOMAIN_OBJECT, *PHALP_DMA_DOMAIN_OBJECT; /* size: 0x0050 */

