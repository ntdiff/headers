typedef struct _ISRDPCSTATS
{
  /* 0x0000 */ unsigned __int64 IsrTime;
  /* 0x0008 */ unsigned __int64 IsrTimeStart;
  /* 0x0010 */ unsigned __int64 IsrCount;
  /* 0x0018 */ unsigned __int64 DpcTime;
  /* 0x0020 */ unsigned __int64 DpcTimeStart;
  /* 0x0028 */ unsigned __int64 DpcCount;
  /* 0x0030 */ unsigned char IsrActive;
  /* 0x0031 */ unsigned char Reserved[15];
} ISRDPCSTATS, *PISRDPCSTATS; /* size: 0x0040 */

