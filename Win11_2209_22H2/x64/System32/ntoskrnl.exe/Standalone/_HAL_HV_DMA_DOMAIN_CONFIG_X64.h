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

typedef struct _HAL_HV_DMA_DOMAIN_CONFIG_X64
{
  /* 0x0000 */ union _LARGE_INTEGER FirstLevelPageTableRoot;
  /* 0x0008 */ unsigned char TranslationEnabled;
  /* 0x0009 */ char __PADDING__[7];
} HAL_HV_DMA_DOMAIN_CONFIG_X64, *PHAL_HV_DMA_DOMAIN_CONFIG_X64; /* size: 0x0010 */

