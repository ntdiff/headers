typedef struct _SECTION_IMAGE_INFORMATION64
{
  /* 0x0000 */ unsigned __int64 TransferAddress;
  /* 0x0008 */ unsigned long ZeroBits;
  /* 0x0010 */ unsigned __int64 MaximumStackSize;
  /* 0x0018 */ unsigned __int64 CommittedStackSize;
  /* 0x0020 */ unsigned long SubSystemType;
  union
  {
    struct
    {
      /* 0x0024 */ unsigned short SubSystemMinorVersion;
      /* 0x0026 */ unsigned short SubSystemMajorVersion;
    }; /* size: 0x0004 */
    /* 0x0024 */ unsigned long SubSystemVersion;
  }; /* size: 0x0004 */
  /* 0x0028 */ unsigned long GpValue;
  /* 0x002c */ unsigned short ImageCharacteristics;
  /* 0x002e */ unsigned short DllCharacteristics;
  /* 0x0030 */ unsigned short Machine;
  /* 0x0032 */ unsigned char ImageContainsCode;
  union
  {
    /* 0x0033 */ unsigned char ImageFlags;
    struct /* bitfield */
    {
      /* 0x0033 */ unsigned char ComPlus : 1; /* bit position: 0 */
      /* 0x0033 */ unsigned char ImageDynamicallyRelocated : 1; /* bit position: 1 */
      /* 0x0033 */ unsigned char Reserved : 6; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0034 */ unsigned long LoaderFlags;
  /* 0x0038 */ unsigned long ImageFileSize;
  /* 0x003c */ unsigned long CheckSum;
} SECTION_IMAGE_INFORMATION64, *PSECTION_IMAGE_INFORMATION64; /* size: 0x0040 */

