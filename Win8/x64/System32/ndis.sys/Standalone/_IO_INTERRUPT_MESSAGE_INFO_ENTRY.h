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

typedef enum _KINTERRUPT_MODE
{
  LevelSensitive = 0,
  Latched = 1,
} KINTERRUPT_MODE, *PKINTERRUPT_MODE;

typedef enum _KINTERRUPT_POLARITY
{
  InterruptPolarityUnknown = 0,
  InterruptActiveHigh = 1,
  InterruptRisingEdge = 1,
  InterruptActiveLow = 2,
  InterruptFallingEdge = 2,
  InterruptActiveBoth = 3,
} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;

typedef struct _IO_INTERRUPT_MESSAGE_INFO_ENTRY
{
  /* 0x0000 */ union _LARGE_INTEGER MessageAddress;
  /* 0x0008 */ unsigned __int64 TargetProcessorSet;
  /* 0x0010 */ struct _KINTERRUPT* InterruptObject;
  /* 0x0018 */ unsigned long MessageData;
  /* 0x001c */ unsigned long Vector;
  /* 0x0020 */ unsigned char Irql;
  /* 0x0024 */ enum _KINTERRUPT_MODE Mode;
  /* 0x0028 */ enum _KINTERRUPT_POLARITY Polarity;
  /* 0x002c */ long __PADDING__[1];
} IO_INTERRUPT_MESSAGE_INFO_ENTRY, *PIO_INTERRUPT_MESSAGE_INFO_ENTRY; /* size: 0x0030 */

