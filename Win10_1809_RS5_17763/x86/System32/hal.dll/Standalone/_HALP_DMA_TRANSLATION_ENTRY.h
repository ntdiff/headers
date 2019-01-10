typedef struct _HALP_DMA_TRANSLATION_ENTRY
{
  /* 0x0000 */ unsigned __int64 PhysicalAddress;
  /* 0x0008 */ struct _HALP_DMA_TRANSLATION_ENTRY* Next;
  /* 0x000c */ unsigned long MappedLength;
  /* 0x0010 */ unsigned __int64 LogicalAddress;
  /* 0x0018 */ unsigned __int64 LogicalMappedLength;
  /* 0x0020 */ unsigned __int64 NextLogicalAddress;
  union
  {
    union
    {
      /* 0x0028 */ void* VirtualAddress;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0028 */ unsigned long BoundToMaster : 1; /* bit position: 0 */
          /* 0x0028 */ unsigned long BoundToScatterPool : 1; /* bit position: 1 */
          /* 0x0028 */ unsigned long OwnedByMaster : 1; /* bit position: 2 */
          /* 0x0028 */ unsigned long OwnedByScatterPool : 1; /* bit position: 3 */
          /* 0x0028 */ unsigned long TemporaryMapping : 1; /* bit position: 4 */
          /* 0x0028 */ unsigned long ZeroBuffer : 1; /* bit position: 5 */
          /* 0x0028 */ unsigned long Address : 26; /* bit position: 6 */
        }; /* bitfield */
      } /* size: 0x0004 */ Flags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x002c */ struct _HALP_DMA_TRANSLATION_ENTRY* NextMapping;
  /* 0x0030 */ unsigned char LogicalBounceBufferPremapped;
  /* 0x0031 */ char __PADDING__[7];
} HALP_DMA_TRANSLATION_ENTRY, *PHALP_DMA_TRANSLATION_ENTRY; /* size: 0x0038 */

