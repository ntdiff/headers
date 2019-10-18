typedef struct _HAL_CLOCK_TIMER_CONFIGURATION
{
  union
  {
    /* 0x0000 */ unsigned char Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char AlwaysOnTimer : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char HighLatency : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char PerCpuTimer : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned char DynamicTickSupported : 1; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0004 */ unsigned long KnownType;
  /* 0x0008 */ unsigned long Capabilities;
  /* 0x0010 */ unsigned __int64 MaxIncrement;
  /* 0x0018 */ unsigned long MinIncrement;
  /* 0x001c */ long __PADDING__[1];
} HAL_CLOCK_TIMER_CONFIGURATION, *PHAL_CLOCK_TIMER_CONFIGURATION; /* size: 0x0020 */

