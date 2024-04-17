typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _RTL_RVA_LIST
{
  /* 0x0000 */ unsigned long RvaCount;
  /* 0x0004 */ unsigned long StateBitsPerRva;
  /* 0x0008 */ unsigned char* CompressedBuffer;
  /* 0x000c */ unsigned long CompressedBufferSize;
  /* 0x0010 */ struct _RTL_BITMAP RvaStateBitMap;
  /* 0x0018 */ unsigned long* StateBitValueMap;
  /* 0x001c */ void* ExtensionBuffer;
} RTL_RVA_LIST, *PRTL_RVA_LIST; /* size: 0x0020 */

