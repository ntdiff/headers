typedef struct _IMAGE_TLS_DIRECTORY32
{
  /* 0x0000 */ unsigned long StartAddressOfRawData;
  /* 0x0004 */ unsigned long EndAddressOfRawData;
  /* 0x0008 */ unsigned long AddressOfIndex;
  /* 0x000c */ unsigned long AddressOfCallBacks;
  /* 0x0010 */ unsigned long SizeOfZeroFill;
  /* 0x0014 */ unsigned long Characteristics;
} IMAGE_TLS_DIRECTORY32, *PIMAGE_TLS_DIRECTORY32; /* size: 0x0018 */

