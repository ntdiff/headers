typedef struct _IMAGE_TLS_DIRECTORY32
{
  /* 0x0000 */ unsigned long StartAddressOfRawData;
  /* 0x0004 */ unsigned long EndAddressOfRawData;
  /* 0x0008 */ unsigned long AddressOfIndex;
  /* 0x000c */ unsigned long AddressOfCallBacks;
  /* 0x0010 */ unsigned long SizeOfZeroFill;
  union
  {
    /* 0x0014 */ unsigned long Characteristics;
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned long Reserved0 : 20; /* bit position: 0 */
      /* 0x0014 */ unsigned long Alignment : 4; /* bit position: 20 */
      /* 0x0014 */ unsigned long Reserved1 : 8; /* bit position: 24 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} IMAGE_TLS_DIRECTORY32, *PIMAGE_TLS_DIRECTORY32; /* size: 0x0018 */

