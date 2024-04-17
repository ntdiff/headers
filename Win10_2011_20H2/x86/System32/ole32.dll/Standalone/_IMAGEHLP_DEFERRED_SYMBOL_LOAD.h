typedef struct _IMAGEHLP_DEFERRED_SYMBOL_LOAD
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0004 */ unsigned long BaseOfImage;
  /* 0x0008 */ unsigned long CheckSum;
  /* 0x000c */ unsigned long TimeDateStamp;
  /* 0x0010 */ char FileName[260];
  /* 0x0114 */ unsigned char Reparse;
  /* 0x0118 */ void* hFile;
} IMAGEHLP_DEFERRED_SYMBOL_LOAD, *PIMAGEHLP_DEFERRED_SYMBOL_LOAD; /* size: 0x011c */

