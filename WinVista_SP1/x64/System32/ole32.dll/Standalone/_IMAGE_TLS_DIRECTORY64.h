typedef struct _IMAGE_TLS_DIRECTORY64
{
  /* 0x0000 */ unsigned __int64 StartAddressOfRawData;
  /* 0x0008 */ unsigned __int64 EndAddressOfRawData;
  /* 0x0010 */ unsigned __int64 AddressOfIndex;
  /* 0x0018 */ unsigned __int64 AddressOfCallBacks;
  /* 0x0020 */ unsigned long SizeOfZeroFill;
  /* 0x0024 */ unsigned long Characteristics;
} IMAGE_TLS_DIRECTORY64, *PIMAGE_TLS_DIRECTORY64; /* size: 0x0028 */

