typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef struct _MI_SECTION_WOW_STATE
{
  /* 0x0000 */ struct _RTL_BITMAP_EX ImageBitMap;
  /* 0x0010 */ struct _SECTION* CfgBitMapSection;
  /* 0x0018 */ struct _CONTROL_AREA* CfgBitMapControlArea;
} MI_SECTION_WOW_STATE, *PMI_SECTION_WOW_STATE; /* size: 0x0020 */

