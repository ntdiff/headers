typedef enum _TP_CALLBACK_PRIORITY
{
  TP_CALLBACK_PRIORITY_HIGH = 0,
  TP_CALLBACK_PRIORITY_NORMAL = 1,
  TP_CALLBACK_PRIORITY_LOW = 2,
  TP_CALLBACK_PRIORITY_INVALID = 3,
} TP_CALLBACK_PRIORITY, *PTP_CALLBACK_PRIORITY;

typedef struct _TP_CALLBACK_ENVIRON_V3
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ struct _TP_POOL* Pool;
  /* 0x0010 */ struct _TP_CLEANUP_GROUP* CleanupGroup;
  /* 0x0018 */ void* CleanupGroupCancelCallback /* function */;
  /* 0x0020 */ void* RaceDll;
  /* 0x0028 */ struct _ACTIVATION_CONTEXT* ActivationContext;
  /* 0x0030 */ void* FinalizationCallback /* function */;
  union
  {
    union
    {
      /* 0x0038 */ unsigned long Flags;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0038 */ unsigned long LongFunction : 1; /* bit position: 0 */
          /* 0x0038 */ unsigned long Persistent : 1; /* bit position: 1 */
          /* 0x0038 */ unsigned long Private : 30; /* bit position: 2 */
        }; /* bitfield */
      } /* size: 0x0004 */ s;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x003c */ enum _TP_CALLBACK_PRIORITY CallbackPriority;
  /* 0x0040 */ unsigned long Size;
  /* 0x0044 */ long __PADDING__[1];
} TP_CALLBACK_ENVIRON_V3, *PTP_CALLBACK_ENVIRON_V3; /* size: 0x0048 */

