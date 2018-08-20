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
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef enum _EXT_IOMMU_TRANSLATION_TYPE
{
  TypePassThrough = 0,
  TypeSafePassThrough = 1,
  TypeBlocked = 2,
  TypeTranslate = 3,
  TypeInvalid = 4,
} EXT_IOMMU_TRANSLATION_TYPE, *PEXT_IOMMU_TRANSLATION_TYPE;

typedef struct _HALP_DMA_DOMAIN_OBJECT
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned char AddedToDomainList;
  /* 0x0018 */ union _LARGE_INTEGER MaximumPhysicalAddress;
  /* 0x0020 */ union _LARGE_INTEGER BoundaryAddressMultiple;
  /* 0x0028 */ unsigned char CacheCoherent;
  /* 0x0030 */ void* IommuDomainPointer;
  /* 0x0038 */ void* LaState;
  /* 0x0040 */ unsigned __int64 LaStateLock;
  /* 0x0048 */ enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;
  /* 0x0050 */ struct _ADAPTER_OBJECT* OwningAdapter;
  /* 0x0058 */ struct _LIST_ENTRY CommonBufferListHead;
  /* 0x0068 */ unsigned __int64 CommonBufferListLock;
} HALP_DMA_DOMAIN_OBJECT, *PHALP_DMA_DOMAIN_OBJECT; /* size: 0x0070 */

