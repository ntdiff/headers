typedef struct _IMAGEHLP_LINE64
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0008 */ void* Key;
  /* 0x0010 */ unsigned long LineNumber;
  /* 0x0018 */ char* FileName;
  /* 0x0020 */ unsigned __int64 Address;
} IMAGEHLP_LINE64, *PIMAGEHLP_LINE64; /* size: 0x0028 */

