typedef struct _MUISTRINGPOOL
{
  /* 0x0000 */ unsigned int TotalSize;
  /* 0x0004 */ unsigned short MaxNumStrings;
  /* 0x0006 */ unsigned short NumStrings;
  /* 0x0008 */ unsigned short MaxNumCharsInPool;
  /* 0x000a */ unsigned short NumCharsInPool;
  /* 0x000c */ short* Strings;
  /* 0x0010 */ wchar_t* Pool;
} MUISTRINGPOOL, *PMUISTRINGPOOL; /* size: 0x0014 */

