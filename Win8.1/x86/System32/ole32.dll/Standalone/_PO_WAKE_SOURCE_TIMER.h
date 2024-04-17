enum PO_WAKE_SOURCE_TYPE
{
  DeviceWakeSourceType = 0,
  FixedWakeSourceType = 1,
  TimerWakeSourceType = 2,
};

typedef struct _PO_WAKE_SOURCE_HEADER
{
  /* 0x0000 */ enum PO_WAKE_SOURCE_TYPE Type;
  /* 0x0004 */ unsigned long Size;
} PO_WAKE_SOURCE_HEADER, *PPO_WAKE_SOURCE_HEADER; /* size: 0x0008 */

typedef enum _REQUESTER_TYPE
{
  KernelRequester = 0,
  UserProcessRequester = 1,
  UserSharedServiceRequester = 2,
} REQUESTER_TYPE, *PREQUESTER_TYPE;

typedef struct _DIAGNOSTIC_BUFFER
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ enum _REQUESTER_TYPE CallerType;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned long ProcessImageNameOffset;
      /* 0x000c */ unsigned long ProcessId;
      /* 0x0010 */ unsigned long ServiceTag;
    }; /* size: 0x000c */
    struct
    {
      /* 0x0008 */ unsigned long DeviceDescriptionOffset;
      /* 0x000c */ unsigned long DevicePathOffset;
    }; /* size: 0x0008 */
  }; /* size: 0x000c */
  /* 0x0014 */ unsigned long ReasonOffset;
} DIAGNOSTIC_BUFFER, *PDIAGNOSTIC_BUFFER; /* size: 0x0018 */

typedef struct _PO_WAKE_SOURCE_TIMER
{
  /* 0x0000 */ struct _PO_WAKE_SOURCE_HEADER Header;
  /* 0x0008 */ struct _DIAGNOSTIC_BUFFER Reason;
} PO_WAKE_SOURCE_TIMER, *PPO_WAKE_SOURCE_TIMER; /* size: 0x0020 */

