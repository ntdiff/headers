typedef struct _HALP_DMA_TRANSLATION_ENTRY
{
  /* 0x0000 */ unsigned __int64 PhysicalAddress;
  /* 0x0008 */ struct _HALP_DMA_TRANSLATION_ENTRY* Next;
  /* 0x000c */ unsigned long MappedLength;
  union // _TAG_UNNAMED_2
  {
    union
    {
      /* 0x0010 */ void* VirtualAddress;
      struct // _TAG_UNNAMED_3
      {
        struct /* bitfield */
        {
          /* 0x0010 */ unsigned long BoundToMaster : 1; /* bit position: 0 */
          /* 0x0010 */ unsigned long BoundToScatterPool : 1; /* bit position: 1 */
          /* 0x0010 */ unsigned long OwnedByMaster : 1; /* bit position: 2 */
          /* 0x0010 */ unsigned long OwnedByScatterPool : 1; /* bit position: 3 */
          /* 0x0010 */ unsigned long TemporaryMapping : 1; /* bit position: 4 */
          /* 0x0010 */ unsigned long Address : 27; /* bit position: 5 */
        }; /* bitfield */
      } /* size: 0x0004 */ Flags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x0014 */ struct _HALP_DMA_TRANSLATION_ENTRY* NextMapping;
} HALP_DMA_TRANSLATION_ENTRY, *PHALP_DMA_TRANSLATION_ENTRY; /* size: 0x0018 */

