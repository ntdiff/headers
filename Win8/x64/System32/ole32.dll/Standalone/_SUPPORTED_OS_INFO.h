typedef struct _SUPPORTED_OS_INFO
{
  /* 0x0000 */ unsigned short OsCount;
  /* 0x0002 */ unsigned short MitigationExist;
  /* 0x0004 */ unsigned short OsList[4];
} SUPPORTED_OS_INFO, *PSUPPORTED_OS_INFO; /* size: 0x000c */

