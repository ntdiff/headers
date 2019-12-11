typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef enum _NDIS_SS_STOP_REASON
{
  NdisSSReasonUnspecified = 0,
  NdisSSQueryRemove = 1,
  NdisSSDeviceRemove = 2,
  NdisSSDeviceSurpriseRemove = 3,
  NdisSSQueryStop = 4,
  NdisSSDeviceStop = 5,
  NdisSSSystemPower = 6,
  NdisSSNicQuiet = 7,
  NdisSSPnPOp = 8,
  NdisSSNotStarted = 9,
  NdisSSApplyInterfaceChange = 11,
  NdisSSMagicPacket = 12,
  NdisSSBindChanges = 13,
  NdisSSStopReasonMax = 15,
} NDIS_SS_STOP_REASON, *PNDIS_SS_STOP_REASON;

typedef enum _NDIS_SS_BUSY_REASON
{
  NdisBusyOid = 33,
  NdisBusyPause = 34,
  NdisBusyRestart = 35,
  NdisBusyReset = 36,
  NdisBusyDevicePnPEvent = 37,
  NdisBusyCheckForHang = 49,
  NdisBusyDirectOid = 50,
  NdisBusyCancelDirectOid = 51,
  NdisBusySend = 52,
  NdisBusyCancelSend = 53,
  NdisBusyReceiveReturn = 54,
  NdisBusyWaitWake = 65,
} NDIS_SS_BUSY_REASON, *PNDIS_SS_BUSY_REASON;

typedef union _NDIS_SS_RESUME_REASON
{
  union
  {
    /* 0x0000 */ enum _NDIS_SS_STOP_REASON StopReason;
    /* 0x0000 */ enum _NDIS_SS_BUSY_REASON BusyReason;
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} NDIS_SS_RESUME_REASON, *PNDIS_SS_RESUME_REASON; /* size: 0x0004 */

typedef struct _NDIS_NAPS_TELEMETRY_REASON_DATA
{
  /* 0x0000 */ unsigned short WakeCount;
  /* 0x0002 */ unsigned short BusyCount;
  /* 0x0004 */ union _NDIS_SS_RESUME_REASON Reason;
  /* 0x0008 */ unsigned __int64 TotalTimeMs;
} NDIS_NAPS_TELEMETRY_REASON_DATA, *PNDIS_NAPS_TELEMETRY_REASON_DATA; /* size: 0x0010 */

typedef struct _NDIS_NAPS_TELEMETRY_OID_DATA
{
  /* 0x0000 */ unsigned short WakeCount;
  /* 0x0002 */ unsigned short BusyCount;
  /* 0x0004 */ unsigned short Weight;
  /* 0x0008 */ unsigned long Oid;
} NDIS_NAPS_TELEMETRY_OID_DATA, *PNDIS_NAPS_TELEMETRY_OID_DATA; /* size: 0x000c */

typedef struct _NDIS_NAPS_TELEMETRY_DATA
{
  /* 0x0000 */ unsigned long StartingSuspendCount;
  /* 0x0008 */ unsigned __int64 StartingResumeLatencyMs;
  /* 0x0010 */ unsigned __int64 StartingSuspendTimeMs;
  /* 0x0018 */ union _LARGE_INTEGER StartTime;
  /* 0x0020 */ struct _NDIS_NAPS_TELEMETRY_REASON_DATA Reasons[49];
  /* 0x0330 */ struct _NDIS_NAPS_TELEMETRY_OID_DATA ReasonOids[8];
} NDIS_NAPS_TELEMETRY_DATA, *PNDIS_NAPS_TELEMETRY_DATA; /* size: 0x0390 */

