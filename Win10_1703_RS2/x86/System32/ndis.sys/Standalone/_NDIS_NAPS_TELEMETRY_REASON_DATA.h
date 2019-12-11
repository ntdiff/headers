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

