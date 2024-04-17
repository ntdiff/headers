typedef struct _REFS_SET_VOLUME_IO_METRICS_INFO_INPUT_BUFFER
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long GlobalSecondsToTrack;
  /* 0x0008 */ unsigned long MetricsPeriodicitySeconds;
  /* 0x000c */ unsigned long MetricsGenerationsPerContainer;
  /* 0x0010 */ unsigned long Reserved[8];
} REFS_SET_VOLUME_IO_METRICS_INFO_INPUT_BUFFER, *PREFS_SET_VOLUME_IO_METRICS_INFO_INPUT_BUFFER; /* size: 0x0030 */

