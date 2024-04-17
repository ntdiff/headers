typedef struct _IMAGE_TLS_DIRECTORY64
{
  /* 0x0000 */ unsigned __int64 StartAddressOfRawData;
  /* 0x0008 */ unsigned __int64 EndAddressOfRawData;
  /* 0x0010 */ unsigned __int64 AddressOfIndex;
  /* 0x0018 */ unsigned __int64 AddressOfCallBacks;
  /* 0x0020 */ unsigned long SizeOfZeroFill;
  union
  {
    /* 0x0024 */ unsigned long Characteristics;
    struct /* bitfield */
    {
      /* 0x0024 */ unsigned long Reserved0 : 20; /* bit position: 0 */
      /* 0x0024 */ unsigned long Alignment : 4; /* bit position: 20 */
      /* 0x0024 */ unsigned long Reserved1 : 8; /* bit position: 24 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} IMAGE_TLS_DIRECTORY64, *PIMAGE_TLS_DIRECTORY64; /* size: 0x0028 */

