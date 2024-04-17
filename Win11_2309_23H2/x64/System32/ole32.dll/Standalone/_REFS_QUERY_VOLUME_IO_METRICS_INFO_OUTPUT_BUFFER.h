typedef enum _REFS_QUERY_VOLUME_IO_METRICS_INFO_QUERY_TYPE
{
  REFS_QUERY_VOLUME_IO_METRICS_INFO_QUERY_TYPE_PARAMETERS = 1,
  REFS_QUERY_VOLUME_IO_METRICS_INFO_QUERY_TYPE_METRICS_DATA = 2,
} REFS_QUERY_VOLUME_IO_METRICS_INFO_QUERY_TYPE, *PREFS_QUERY_VOLUME_IO_METRICS_INFO_QUERY_TYPE;

typedef struct _REFS_QUERY_VOLUME_IO_METRICS_METRICS_DATA
{
  /* 0x0000 */ unsigned __int64 PlaceHolder;
} REFS_QUERY_VOLUME_IO_METRICS_METRICS_DATA, *PREFS_QUERY_VOLUME_IO_METRICS_METRICS_DATA; /* size: 0x0008 */

typedef struct _REFS_QUERY_VOLUME_IO_METRICS_INFO_OUTPUT_BUFFER
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ enum _REFS_QUERY_VOLUME_IO_METRICS_INFO_QUERY_TYPE QueryType;
  /* 0x0008 */ unsigned long Reserved[6];
  union
  {
    /* 0x0020 */ unsigned __int64 UnusedAlign;
    struct
    {
      /* 0x0020 */ unsigned long GlobalSecondsToTrack;
      /* 0x0024 */ unsigned long MetricsPeriodicitySeconds;
      /* 0x0028 */ unsigned long MetricsGenerationsPerContainer;
      /* 0x002c */ unsigned long Reserved[6];
    } /* size: 0x0024 */ Parameters;
    struct
    {
      /* 0x0020 */ unsigned long EntryCount;
      /* 0x0028 */ unsigned __int64 ResumeKeyBlob[2];
      /* 0x0038 */ unsigned long Reserved[6];
      /* 0x0050 */ struct _REFS_QUERY_VOLUME_IO_METRICS_METRICS_DATA Metrics[1];
    } /* size: 0x0038 */ MetricsData;
  }; /* size: 0x0038 */
} REFS_QUERY_VOLUME_IO_METRICS_INFO_OUTPUT_BUFFER, *PREFS_QUERY_VOLUME_IO_METRICS_INFO_OUTPUT_BUFFER; /* size: 0x0058 */

