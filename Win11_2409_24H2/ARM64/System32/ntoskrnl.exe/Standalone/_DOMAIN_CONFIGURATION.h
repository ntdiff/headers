typedef enum _DOMAIN_CONFIGURATION_ARCH
{
  DomainConfigurationArm64 = 0,
  DomainConfigurationX64 = 1,
  DomainConfigurationInvalid = 2,
} DOMAIN_CONFIGURATION_ARCH, *PDOMAIN_CONFIGURATION_ARCH;

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

typedef struct _DOMAIN_CONFIGURATION_ARM64
{
  /* 0x0000 */ union _LARGE_INTEGER Ttbr0;
  /* 0x0008 */ union _LARGE_INTEGER Ttbr1;
  /* 0x0010 */ unsigned long Mair0;
  /* 0x0014 */ unsigned long Mair1;
  /* 0x0018 */ unsigned char InputSize0;
  /* 0x0019 */ unsigned char InputSize1;
  /* 0x001a */ unsigned char CoherentTableWalks;
  /* 0x001b */ unsigned char TranslationEnabled;
  /* 0x001c */ long __PADDING__[1];
} DOMAIN_CONFIGURATION_ARM64, *PDOMAIN_CONFIGURATION_ARM64; /* size: 0x0020 */

typedef struct _DOMAIN_CONFIGURATION_X64
{
  /* 0x0000 */ union _LARGE_INTEGER FirstLevelPageTableRoot;
  /* 0x0008 */ unsigned char TranslationEnabled;
  /* 0x0009 */ char __PADDING__[7];
} DOMAIN_CONFIGURATION_X64, *PDOMAIN_CONFIGURATION_X64; /* size: 0x0010 */

typedef struct _DOMAIN_CONFIGURATION
{
  /* 0x0000 */ enum _DOMAIN_CONFIGURATION_ARCH Type;
  union
  {
    /* 0x0008 */ struct _DOMAIN_CONFIGURATION_ARM64 Arm64;
    struct
    {
      /* 0x0008 */ struct _DOMAIN_CONFIGURATION_X64 X64;
      /* 0x0018 */ long __PADDING__[4];
    }; /* size: 0x0020 */
  }; /* size: 0x0020 */
} DOMAIN_CONFIGURATION, *PDOMAIN_CONFIGURATION; /* size: 0x0028 */

