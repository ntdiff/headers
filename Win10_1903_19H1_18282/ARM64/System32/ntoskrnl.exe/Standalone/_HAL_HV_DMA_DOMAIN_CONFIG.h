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

typedef struct _HAL_HV_DMA_DOMAIN_CONFIG
{
  /* 0x0000 */ union _LARGE_INTEGER Ttbr0;
  /* 0x0008 */ union _LARGE_INTEGER Ttbr1;
  /* 0x0010 */ unsigned long Mair0;
  /* 0x0014 */ unsigned long Mair1;
  /* 0x0018 */ unsigned char InputSize0;
  /* 0x0019 */ unsigned char InputSize1;
  /* 0x001a */ unsigned short Asid;
  /* 0x001c */ unsigned char CoherentTableWalks;
  /* 0x001d */ unsigned char TranslationEnabled;
  /* 0x001e */ char __PADDING__[2];
} HAL_HV_DMA_DOMAIN_CONFIG, *PHAL_HV_DMA_DOMAIN_CONFIG; /* size: 0x0020 */

