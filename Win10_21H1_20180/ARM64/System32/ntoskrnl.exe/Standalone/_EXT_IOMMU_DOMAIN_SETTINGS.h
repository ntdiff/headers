typedef struct _EXT_IOMMU_DOMAIN_SETTINGS
{
  /* 0x0000 */ unsigned char CoherentTableWalks;
  /* 0x0001 */ unsigned char OutputSize;
  union
  {
    struct
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0008 */ unsigned char EnableTranslation : 1; /* bit position: 0 */
          /* 0x0008 */ unsigned char Reserved : 7; /* bit position: 1 */
        }; /* bitfield */
      } /* size: 0x0001 */ Flags;
      /* 0x0009 */ unsigned char InputSize0;
      /* 0x000a */ unsigned char InputSize1;
      /* 0x000c */ unsigned int Mair0;
      /* 0x0010 */ unsigned int Mair1;
      /* 0x0018 */ unsigned __int64 PageTableRoot0;
      /* 0x0020 */ unsigned __int64 PageTableRoot1;
      /* 0x0028 */ unsigned int Asid;
      /* 0x002c */ long __PADDING__[1];
    } /* size: 0x0028 */ S1;
    struct
    {
      struct
      {
        /* 0x0008 */ unsigned char PageTableRootLevel;
        /* 0x0009 */ unsigned char InputSize;
        /* 0x0010 */ unsigned __int64 PageTableRoot;
      } /* size: 0x0010 */ S2;
      /* 0x0018 */ long __PADDING__[6];
    }; /* size: 0x0028 */
  }; /* size: 0x0028 */
} EXT_IOMMU_DOMAIN_SETTINGS, *PEXT_IOMMU_DOMAIN_SETTINGS; /* size: 0x0030 */

