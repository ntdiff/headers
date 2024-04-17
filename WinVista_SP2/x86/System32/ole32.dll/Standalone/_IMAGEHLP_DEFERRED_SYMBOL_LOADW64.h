typedef struct _IMAGEHLP_DEFERRED_SYMBOL_LOADW64
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0008 */ unsigned __int64 BaseOfImage;
  /* 0x0010 */ unsigned long CheckSum;
  /* 0x0014 */ unsigned long TimeDateStamp;
  /* 0x0018 */ wchar_t FileName[261];
  /* 0x0222 */ unsigned char Reparse;
  /* 0x0224 */ void* hFile;
  /* 0x0228 */ unsigned long Flags;
  /* 0x022c */ long __PADDING__[1];
} IMAGEHLP_DEFERRED_SYMBOL_LOADW64, *PIMAGEHLP_DEFERRED_SYMBOL_LOADW64; /* size: 0x0230 */

