typedef struct _MEMORYSTATUS
{
  /* 0x0000 */ unsigned long dwLength;
  /* 0x0004 */ unsigned long dwMemoryLoad;
  /* 0x0008 */ unsigned long dwTotalPhys;
  /* 0x000c */ unsigned long dwAvailPhys;
  /* 0x0010 */ unsigned long dwTotalPageFile;
  /* 0x0014 */ unsigned long dwAvailPageFile;
  /* 0x0018 */ unsigned long dwTotalVirtual;
  /* 0x001c */ unsigned long dwAvailVirtual;
} MEMORYSTATUS, *PMEMORYSTATUS; /* size: 0x0020 */

