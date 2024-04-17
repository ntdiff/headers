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
    struct /* bitfield */
    {
      /* 0x0068 */ unsigned short Foreground : 1; /* bit position: 0 */
      /* 0x0068 */ unsigned short DesktopVisible : 1; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0068 */ unsigned short WindowInformation;
  }; /* size: 0x0002 */
  /* 0x006a */ unsigned short CompositorRendered;
  /* 0x006c */ unsigned short DirtyGenerated;
  /* 0x006e */ unsigned short DirtyPropagated;
  /* 0x0070 */ __int64 DesktopVisibilityReportTimestamp;
  /* 0x0078 */ unsigned __int64 DesktopVisibleTime;
  /* 0x0080 */ __int64 ForegroundReportTimestamp;
  /* 0x0088 */ unsigned __int64 ForegroundTime;
} PROCESS_ENERGY_VALUES, *PPROCESS_ENERGY_VALUES; /* size: 0x0090 */

