typedef struct _TP_CALLBACK_ENVIRON
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ struct _TP_POOL* Pool;
  /* 0x0008 */ struct _TP_CLEANUP_GROUP* CleanupGroup;
  /* 0x000c */ void* CleanupGroupCancelCallback /* function */;
  /* 0x0010 */ void* RaceDll;
  /* 0x0014 */ struct _ACTIVATION_CONTEXT* ActivationContext;
  /* 0x0018 */ void* FinalizationCallback /* function */;
  union
  {
    union
    {
      /* 0x001c */ unsigned long Flags;
      struct
      {
        struct /* bitfield */
        {
          /* 0x001c */ unsigned long LongFunction : 1; /* bit position: 0 */
          /* 0x001c */ unsigned long Private : 31; /* bit position: 1 */
        }; /* bitfield */
      } /* size: 0x0004 */ s;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
} TP_CALLBACK_ENVIRON, *PTP_CALLBACK_ENVIRON; /* size: 0x0020 */

