typedef enum _EXT_IOMMU_DOMAIN_TYPE
{
  ExtIommuDomainTypeS1 = 0,
  ExtIommuDomainTypeS2 = 1,
  ExtIommuDomainTypeInvalid = 2,
} EXT_IOMMU_DOMAIN_TYPE, *PEXT_IOMMU_DOMAIN_TYPE;

typedef enum _EXT_IOMMU_TRANSLATION_TYPE
{
  ExtTranslationTypePassThrough = 0,
  ExtTranslationTypeBlocked = 1,
  ExtTranslationTypeTranslate = 2,
  ExtTranslationTypeSafePassThrough = 3,
  ExtTranslationTypeHybridPassthrough = 4,
  ExtTranslationTypeInvalid = 5,
} EXT_IOMMU_TRANSLATION_TYPE, *PEXT_IOMMU_TRANSLATION_TYPE;

typedef struct _EXT_IOMMU_DOMAIN_SETTINGS
{
  struct
  {
    /* 0x0000 */ unsigned char PageTableRootLevel;
    /* 0x0001 */ unsigned char InputSize;
    /* 0x0008 */ unsigned __int64 PageTableRoot;
  } /* size: 0x0010 */ S2;
} EXT_IOMMU_DOMAIN_SETTINGS, *PEXT_IOMMU_DOMAIN_SETTINGS; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _EXT_ENV_SPINLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned __int64 Lock;
  /* 0x0018 */ unsigned char OldIrql;
  /* 0x0019 */ char __PADDING__[7];
} EXT_ENV_SPINLOCK, *PEXT_ENV_SPINLOCK; /* size: 0x0020 */

typedef struct _EXT_IOMMU_DOMAIN
{
  /* 0x0000 */ enum _EXT_IOMMU_DOMAIN_TYPE DomainType;
  /* 0x0004 */ enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0008 */ unsigned char DefaultDomain : 1; /* bit position: 0 */
      /* 0x0008 */ unsigned char FirmwareDomain : 1; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0001 */ Flags;
  /* 0x000a */ unsigned short FirmwareDomainId;
  /* 0x0010 */ struct _EXT_IOMMU_DOMAIN_SETTINGS Settings;
  /* 0x0020 */ unsigned int ContextId;
  /* 0x0028 */ struct _LIST_ENTRY Devices;
  /* 0x0038 */ struct _EXT_ENV_SPINLOCK Lock;
} EXT_IOMMU_DOMAIN, *PEXT_IOMMU_DOMAIN; /* size: 0x0058 */

