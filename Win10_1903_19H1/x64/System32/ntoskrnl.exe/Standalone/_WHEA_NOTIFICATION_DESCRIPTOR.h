typedef union _WHEA_NOTIFICATION_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short PollIntervalRW : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short SwitchToPollingThresholdRW : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned short SwitchToPollingWindowRW : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned short ErrorThresholdRW : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned short ErrorThresholdWindowRW : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned short Reserved : 11; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AsUSHORT;
  }; /* size: 0x0002 */
} WHEA_NOTIFICATION_FLAGS, *PWHEA_NOTIFICATION_FLAGS; /* size: 0x0002 */

typedef struct _WHEA_NOTIFICATION_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ union _WHEA_NOTIFICATION_FLAGS Flags;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
      } /* size: 0x0004 */ Polled;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Interrupt;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ LocalInterrupt;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Sci;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Nmi;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Sea;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Sei;
      struct
      {
        /* 0x0004 */ unsigned long PollInterval;
        /* 0x0008 */ unsigned long Vector;
        /* 0x000c */ unsigned long SwitchToPollingThreshold;
        /* 0x0010 */ unsigned long SwitchToPollingWindow;
        /* 0x0014 */ unsigned long ErrorThreshold;
        /* 0x0018 */ unsigned long ErrorThresholdWindow;
      } /* size: 0x0018 */ Gsiv;
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ u;
} WHEA_NOTIFICATION_DESCRIPTOR, *PWHEA_NOTIFICATION_DESCRIPTOR; /* size: 0x001c */

