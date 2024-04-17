typedef struct _IMAGEHLP_DEFERRED_SYMBOL_LOAD64
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0008 */ unsigned __int64 BaseOfImage;
  /* 0x0010 */ unsigned long CheckSum;
  /* 0x0014 */ unsigned long TimeDateStamp;
  /* 0x0018 */ char FileName[260];
  /* 0x011c */ unsigned char Reparse;
  /* 0x0120 */ void* hFile;
  /* 0x0128 */ unsigned long Flags;
  /* 0x012c */ long __PADDING__[1];
} IMAGEHLP_DEFERRED_SYMBOL_LOAD64, *PIMAGEHLP_DEFERRED_SYMBOL_LOAD64; /* size: 0x0130 */

