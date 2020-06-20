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

typedef struct _LOADER_PARAMETER_CI_EXTENSION
{
  /* 0x0000 */ unsigned long CodeIntegrityOptions;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long UpgradeInProgress : 1; /* bit position: 0 */
    /* 0x0004 */ unsigned long IsWinPE : 1; /* bit position: 1 */
    /* 0x0004 */ unsigned long CustomKernelSignersAllowed : 1; /* bit position: 2 */
    /* 0x0004 */ unsigned long StateSeparationEnabled : 1; /* bit position: 3 */
    /* 0x0004 */ unsigned long Reserved : 28; /* bit position: 4 */
  }; /* bitfield */
  /* 0x0008 */ union _LARGE_INTEGER WhqlEnforcementDate;
  /* 0x0010 */ unsigned long RevocationListOffset;
  /* 0x0014 */ unsigned long RevocationListSize;
  /* 0x0018 */ unsigned long CodeIntegrityPolicyOffset;
  /* 0x001c */ unsigned long CodeIntegrityPolicySize;
  /* 0x0020 */ unsigned long CodeIntegrityPolicyHashOffset;
  /* 0x0024 */ unsigned long CodeIntegrityPolicyHashSize;
  /* 0x0028 */ unsigned long CodeIntegrityPolicyOriginalHashOffset;
  /* 0x002c */ unsigned long CodeIntegrityPolicyOriginalHashSize;
  /* 0x0030 */ long WeakCryptoPolicyLoadStatus;
  /* 0x0034 */ unsigned long WeakCryptoPolicyOffset;
  /* 0x0038 */ unsigned long WeakCryptoPolicySize;
  /* 0x003c */ unsigned long SecureBootPolicyOffset;
  /* 0x0040 */ unsigned long SecureBootPolicySize;
  /* 0x0044 */ unsigned long Reserved2;
  /* 0x0048 */ unsigned char SerializedData[1];
  /* 0x0049 */ char __PADDING__[7];
} LOADER_PARAMETER_CI_EXTENSION, *PLOADER_PARAMETER_CI_EXTENSION; /* size: 0x0050 */

