typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef struct _RTL_RVA_LIST
{
  /* 0x0000 */ unsigned __int64 RvaCount;
  /* 0x0008 */ unsigned long StateBitsPerRva;
  /* 0x0010 */ unsigned char* CompressedBuffer;
  /* 0x0018 */ unsigned __int64 CompressedBufferSize;
  /* 0x0020 */ struct _RTL_BITMAP_EX RvaStateBitMap;
  /* 0x0030 */ unsigned long* StateBitValueMap;
  /* 0x0038 */ void* ExtensionBuffer;
} RTL_RVA_LIST, *PRTL_RVA_LIST; /* size: 0x0040 */

