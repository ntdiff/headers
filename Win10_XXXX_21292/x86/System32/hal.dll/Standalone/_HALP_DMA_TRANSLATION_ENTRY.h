typedef struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT
{
  /* 0x0000 */ struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN* OwningToken;
  /* 0x0004 */ unsigned long Offset;
  /* 0x0008 */ unsigned long Size;
} IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT, *PIOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT; /* size: 0x000c */

typedef struct _HALP_DMA_TRANSLATION_ENTRY
{
  /* 0x0000 */ unsigned __int64 PhysicalAddress;
  /* 0x0008 */ struct _HALP_DMA_TRANSLATION_ENTRY* Next;
  /* 0x000c */ unsigned long MappedLength;
  /* 0x0010 */ struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT RemappingAddress;
  union
  {
    union
    {
      /* 0x001c */ void* VirtualAddress;
      struct
      {
        struct /* bitfield */
        {
          /* 0x001c */ unsigned long BoundToMaster : 1; /* bit position: 0 */
          /* 0x001c */ unsigned long BoundToScatterPool : 1; /* bit position: 1 */
          /* 0x001c */ unsigned long OwnedByMaster : 1; /* bit position: 2 */
          /* 0x001c */ unsigned long OwnedByScatterPool : 1; /* bit position: 3 */
          /* 0x001c */ unsigned long TemporaryMapping : 1; /* bit position: 4 */
          /* 0x001c */ unsigned long ZeroBuffer : 1; /* bit position: 5 */
          /* 0x001c */ unsigned long Address : 26; /* bit position: 6 */
        }; /* bitfield */
      } /* size: 0x0004 */ Flags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x0020 */ struct _HALP_DMA_TRANSLATION_ENTRY* NextMapping;
  /* 0x0024 */ unsigned char LogicalBounceBufferPremapped;
  /* 0x0025 */ char __PADDING__[3];
} HALP_DMA_TRANSLATION_ENTRY, *PHALP_DMA_TRANSLATION_ENTRY; /* size: 0x0028 */

