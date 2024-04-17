typedef struct _IMAGEHLP_LINE
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0004 */ void* Key;
  /* 0x0008 */ unsigned long LineNumber;
  /* 0x000c */ char* FileName;
  /* 0x0010 */ unsigned long Address;
} IMAGEHLP_LINE, *PIMAGEHLP_LINE; /* size: 0x0014 */

