typedef struct _PROCESS_ENERGY_VALUES
{
  /* 0x0000 */ unsigned __int64 Cycles[2][4];
  /* 0x0040 */ unsigned __int64 DiskEnergy;
  /* 0x0048 */ unsigned __int64 NetworkTailEnergy;
  /* 0x0050 */ unsigned __int64 MBBTailEnergy;
  /* 0x0058 */ unsigned __int64 NetworkTxRxBytes;
  /* 0x0060 */ unsigned __int64 MBBTxRxBytes;
  union
  {
    /* 0x0068 */ unsigned long Foreground : 1; /* bit position: 0 */
    /* 0x0068 */ unsigned long WindowInformation;
  }; /* size: 0x0004 */
  /* 0x006c */ unsigned long PixelArea;
  /* 0x0070 */ __int64 PixelReportTimestamp;
  /* 0x0078 */ unsigned __int64 PixelTime;
  /* 0x0080 */ __int64 ForegroundReportTimestamp;
  /* 0x0088 */ unsigned __int64 ForegroundTime;
} PROCESS_ENERGY_VALUES, *PPROCESS_ENERGY_VALUES; /* size: 0x0090 */

