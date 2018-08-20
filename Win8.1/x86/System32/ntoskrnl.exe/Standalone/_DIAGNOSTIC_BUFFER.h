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

