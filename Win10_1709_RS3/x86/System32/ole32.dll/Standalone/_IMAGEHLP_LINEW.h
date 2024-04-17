typedef struct _IMAGEHLP_LINEW
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0004 */ void* Key;
  /* 0x0008 */ unsigned long LineNumber;
  /* 0x000c */ char* FileName;
  /* 0x0010 */ unsigned __int64 Address;
} IMAGEHLP_LINEW, *PIMAGEHLP_LINEW; /* size: 0x0018 */

