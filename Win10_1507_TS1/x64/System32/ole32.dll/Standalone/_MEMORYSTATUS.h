typedef struct _MEMORYSTATUS
{
  /* 0x0000 */ unsigned long dwLength;
  /* 0x0004 */ unsigned long dwMemoryLoad;
  /* 0x0008 */ unsigned __int64 dwTotalPhys;
  /* 0x0010 */ unsigned __int64 dwAvailPhys;
  /* 0x0018 */ unsigned __int64 dwTotalPageFile;
  /* 0x0020 */ unsigned __int64 dwAvailPageFile;
  /* 0x0028 */ unsigned __int64 dwTotalVirtual;
  /* 0x0030 */ unsigned __int64 dwAvailVirtual;
} MEMORYSTATUS, *PMEMORYSTATUS; /* size: 0x0038 */

