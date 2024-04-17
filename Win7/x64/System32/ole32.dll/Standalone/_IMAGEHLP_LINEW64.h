typedef struct _IMAGEHLP_LINEW64
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0008 */ void* Key;
  /* 0x0010 */ unsigned long LineNumber;
  /* 0x0018 */ wchar_t* FileName;
  /* 0x0020 */ unsigned __int64 Address;
} IMAGEHLP_LINEW64, *PIMAGEHLP_LINEW64; /* size: 0x0028 */

