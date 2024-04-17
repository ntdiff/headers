typedef struct _HIBERFILE_BUCKET
{
  /* 0x0000 */ unsigned __int64 MaxPhysicalMemory;
  /* 0x0008 */ unsigned long PhysicalMemoryPercent[3];
  /* 0x0014 */ long __PADDING__[1];
} HIBERFILE_BUCKET, *PHIBERFILE_BUCKET; /* size: 0x0018 */

