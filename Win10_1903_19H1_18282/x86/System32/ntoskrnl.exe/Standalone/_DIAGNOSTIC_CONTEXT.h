typedef enum _REQUESTER_TYPE
{
  KernelRequester = 0,
  UserProcessRequester = 1,
  UserSharedServiceRequester = 2,
} REQUESTER_TYPE, *PREQUESTER_TYPE;

typedef struct _DIAGNOSTIC_CONTEXT
{
  /* 0x0000 */ enum _REQUESTER_TYPE CallerType;
  union
  {
    struct
    {
      /* 0x0004 */ struct _EPROCESS* Process;
      /* 0x0008 */ unsigned long ServiceTag;
    }; /* size: 0x0008 */
    /* 0x0004 */ struct _DEVICE_OBJECT* DeviceObject;
  }; /* size: 0x0008 */
  /* 0x000c */ unsigned long ReasonSize;
} DIAGNOSTIC_CONTEXT, *PDIAGNOSTIC_CONTEXT; /* size: 0x0010 */

