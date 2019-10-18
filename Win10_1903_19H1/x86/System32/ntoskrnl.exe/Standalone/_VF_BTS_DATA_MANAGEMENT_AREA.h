typedef struct _VF_BTS_DATA_MANAGEMENT_AREA
{
  /* 0x0000 */ void* BTSBufferBase;
  /* 0x0004 */ void* BTSIndex;
  /* 0x0008 */ void* BTSMax;
  /* 0x000c */ void* BTSInterruptThreshold;
  /* 0x0010 */ void* PEBSBufferBase;
  /* 0x0014 */ void* PEBSIndex;
  /* 0x0018 */ void* PEBSMax;
  /* 0x001c */ void* PEBSInterruptThreshold;
  /* 0x0020 */ void* PEBSCounterReset[2];
  /* 0x0028 */ char Reserved[12];
} VF_BTS_DATA_MANAGEMENT_AREA, *PVF_BTS_DATA_MANAGEMENT_AREA; /* size: 0x0034 */

