typedef enum _REFS_QUERY_VOLUME_IO_METRICS_INFO_QUERY_TYPE
{
  REFS_QUERY_VOLUME_IO_METRICS_INFO_QUERY_TYPE_PARAMETERS = 1,
  REFS_QUERY_VOLUME_IO_METRICS_INFO_QUERY_TYPE_METRICS_DATA = 2,
} REFS_QUERY_VOLUME_IO_METRICS_INFO_QUERY_TYPE, *PREFS_QUERY_VOLUME_IO_METRICS_INFO_QUERY_TYPE;

typedef struct _REFS_QUERY_VOLUME_IO_METRICS_INFO_INPUT_BUFFER
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ enum _REFS_QUERY_VOLUME_IO_METRICS_INFO_QUERY_TYPE QueryType;
  /* 0x0008 */ unsigned long Reserved[6];
  union
  {
    /* 0x0020 */ unsigned __int64 UnusedAlign;
    struct
    {
      /* 0x0020 */ unsigned long Reserved[6];
    } /* size: 0x0018 */ Parameters;
    struct
    {
      /* 0x0020 */ unsigned __int64 ResumeKeyBlob[2];
      /* 0x0030 */ unsigned long Reserved[6];
    } /* size: 0x0028 */ MetricsData;
  }; /* size: 0x0028 */
} REFS_QUERY_VOLUME_IO_METRICS_INFO_INPUT_BUFFER, *PREFS_QUERY_VOLUME_IO_METRICS_INFO_INPUT_BUFFER; /* size: 0x0048 */

