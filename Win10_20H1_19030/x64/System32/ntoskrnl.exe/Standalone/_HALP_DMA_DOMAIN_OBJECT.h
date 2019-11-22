typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _HALP_DMA_DOMAIN_OBJECT
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ union _LARGE_INTEGER MaximumPhysicalAddress;
  /* 0x0018 */ union _LARGE_INTEGER BoundaryAddressMultiple;
  /* 0x0020 */ unsigned char CacheCoherent;
  /* 0x0021 */ unsigned char FirmwareReserved;
  /* 0x0028 */ void* IommuDomainPointer;
  /* 0x0030 */ void* LaState;
  /* 0x0038 */ unsigned __int64 LaStateLock;
  /* 0x0040 */ enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;
  /* 0x0048 */ struct _ADAPTER_OBJECT* OwningAdapter;
  /* 0x0050 */ struct _RTL_RB_TREE CommonBufferRoot;
  /* 0x0060 */ unsigned __int64 CommonBufferTreeLock;
  /* 0x0068 */ struct _LIST_ENTRY VectorCommonBufferListHead;
  /* 0x0078 */ unsigned __int64 VectorCommonBufferLock;
  /* 0x0080 */ unsigned long DomainRefCount;
  /* 0x0084 */ long __PADDING__[1];
} HALP_DMA_DOMAIN_OBJECT, *PHALP_DMA_DOMAIN_OBJECT; /* size: 0x0088 */

