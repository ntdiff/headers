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

typedef struct _IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long CryptoIndex;
  /* 0x000c */ unsigned long AlgorithmId;
  /* 0x0010 */ unsigned long DataUnitSize;
  /* 0x0014 */ unsigned long KeySize;
  /* 0x0018 */ unsigned char KeyHash[32];
  /* 0x0038 */ void* KeyVirtualAddress;
  /* 0x0040 */ union _LARGE_INTEGER KeyPhysicalAddress;
} IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR, *PIO_ADAPTER_CRYPTO_KEY_DESCRIPTOR; /* size: 0x0048 */

