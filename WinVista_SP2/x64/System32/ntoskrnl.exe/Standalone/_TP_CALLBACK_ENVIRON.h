typedef struct _TP_CALLBACK_ENVIRON
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
          /* 0x0038 */ unsigned long Private : 31; /* bit position: 1 */
        }; /* bitfield */
      } /* size: 0x0004 */ s;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x003c */ long __PADDING__[1];
} TP_CALLBACK_ENVIRON, *PTP_CALLBACK_ENVIRON; /* size: 0x0040 */

